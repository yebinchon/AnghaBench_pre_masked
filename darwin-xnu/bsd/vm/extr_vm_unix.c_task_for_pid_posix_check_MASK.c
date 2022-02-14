
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef TYPE_1__* proc_t ;
typedef int kauth_cred_t ;
struct TYPE_5__ {scalar_t__ p_stat; int p_flag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_9(proc_t VAR_6)
{
 kauth_cred_t VAR_7, VAR_8;
 uid_t VAR_9;
 int VAR_10;


 if (VAR_6->p_stat == VAR_3) {
  return VAR_0;
 }

 VAR_8 = FUNC_1();
 VAR_9 = FUNC_4(VAR_8);


 if (FUNC_6(VAR_8))
  return VAR_4;


 if (VAR_6 == FUNC_0())
  return VAR_4;





 if (VAR_5 == VAR_1) {
  return VAR_0;
 }

 VAR_7 = FUNC_7(VAR_6);
 VAR_10 = VAR_4;


 if ((FUNC_4(VAR_7) != VAR_9) ||
   (FUNC_2(VAR_7) != VAR_9) ||
   (FUNC_3(VAR_7) != VAR_9)) {
  VAR_10 = VAR_0;
  goto out;
 }


 if (FUNC_5(VAR_7, VAR_8, &VAR_10) ||
   VAR_10 == 0) {
  VAR_10 = VAR_0;
  goto out;
 }


 if (VAR_6->p_flag & VAR_2) {
  VAR_10 = VAR_0;
  goto out;
 }

out:
 FUNC_8(&VAR_7);
 return VAR_10;
}
