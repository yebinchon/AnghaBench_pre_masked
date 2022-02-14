
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef int kauth_cred_t ;
typedef int int32_t ;
struct TYPE_9__ {int task; } ;


 int FUNC_0 (int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_1__*,int) ;
 int VAR_9 ;

int
FUNC_9(int VAR_10, int32_t *VAR_11)
{
 int VAR_12 = 0;
 proc_t VAR_13;
 kauth_cred_t VAR_14 = FUNC_3();
 int VAR_15;







 if (VAR_10 <= 0 || VAR_11 == ((void*)0)) {
  return (VAR_0);
 }

 if ((VAR_13 = FUNC_5(VAR_10)) == ((void*)0)) {
  return (VAR_2);
 }







 if (!FUNC_1(FUNC_2(), VAR_14, VAR_13, VAR_3)) {
  VAR_12 = VAR_1;
  goto out;
 }


 if (VAR_13 == FUNC_2()) {
  VAR_12 = VAR_1;
  goto out;
 }





 VAR_15 = VAR_4;


 FUNC_7(VAR_13->task, VAR_5,
                      VAR_7, VAR_6);

 FUNC_8(VAR_13, VAR_15);
 *VAR_11 = VAR_15;

out:
 FUNC_6(VAR_13);

 return VAR_12;
}
