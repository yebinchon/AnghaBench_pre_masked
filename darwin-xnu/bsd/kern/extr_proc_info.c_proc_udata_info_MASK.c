
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {scalar_t__ p_pid; int p_user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;

int
FUNC_5(int VAR_5, int VAR_6, user_addr_t VAR_7, uint32_t VAR_8, int32_t *VAR_9)
{
 int VAR_10 = 0;
 proc_t VAR_11;

 VAR_11 = FUNC_2(VAR_5);
 if (VAR_11 == VAR_4) {
  return VAR_3;
 }




 if (VAR_11->p_pid != FUNC_4()) {
  VAR_10 = VAR_0;
  goto out;
 }

 if (VAR_8 != sizeof (VAR_11->p_user_data)) {
  VAR_10 = VAR_1;
  goto out;
 }

 switch (VAR_6) {
 case 128:
  VAR_10 = FUNC_0(VAR_7, &VAR_11->p_user_data, sizeof (VAR_11->p_user_data));
  break;
 case 129:
  VAR_10 = FUNC_1(&VAR_11->p_user_data, VAR_7, sizeof (VAR_11->p_user_data));
  break;
 default:
  VAR_10 = VAR_2;
  break;
 }

out:
 FUNC_3(VAR_11);

 if (VAR_10 == 0) {
  *VAR_9 = 0;
 }

 return VAR_10;
}
