
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ proc_t ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(proc_t VAR_3, proc_t VAR_4, int *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;

 kauth_cred_t VAR_8, VAR_9;

 VAR_8 = FUNC_0();
 VAR_9 = FUNC_4(VAR_4);

 if (!FUNC_3(VAR_8) && FUNC_1(VAR_8) &&
     FUNC_2(VAR_8) != FUNC_2(VAR_9) &&
     FUNC_1(VAR_8) != FUNC_2(VAR_9)) {
  VAR_6 = VAR_0;
  goto out;
 }

 if (VAR_3 != VAR_4) {




 }

 VAR_7 = FUNC_7(FUNC_8(VAR_4), VAR_1, VAR_2);

 *VAR_5 = FUNC_9(VAR_7);

out:
 FUNC_5(&VAR_9);
 return (VAR_6);
}
