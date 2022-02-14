
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ proc_t ;
typedef int kauth_cred_t ;
typedef int integer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int ,int*) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int
FUNC_12(proc_t VAR_6, proc_t VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 uint32_t VAR_10 = 0;

 kauth_cred_t VAR_11, VAR_12;

 VAR_11 = FUNC_0();
 VAR_12 = FUNC_4(VAR_7);

 if (!FUNC_3(VAR_11) && FUNC_1(VAR_11) &&
     FUNC_2(VAR_11) != FUNC_2(VAR_12) &&
     FUNC_1(VAR_11) != FUNC_2(VAR_12)) {
  if (FUNC_7(VAR_11, VAR_2, 0) != 0) {
   VAR_9 = VAR_1;
   goto out;
  }
 }

 if (VAR_6 != VAR_7) {




 }

 FUNC_9(FUNC_11(VAR_7), &VAR_10);
 if ((VAR_10 & VAR_3) != VAR_3) {
  VAR_9 = VAR_0;
  goto out;
 }

 integer_t VAR_13 = 0;

 if ((VAR_9 = FUNC_8(VAR_8, &VAR_13)))
  goto out;

 FUNC_10(FUNC_11(VAR_7), VAR_4,
                      VAR_5, VAR_13);

out:
 FUNC_5(&VAR_12);
 return (VAR_9);
}
