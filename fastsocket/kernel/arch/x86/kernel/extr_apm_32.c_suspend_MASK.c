
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_user {int suspend_result; scalar_t__ suspend_wait; struct apm_user* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 struct apm_user* VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(int VAR_11)
{
 int VAR_12;
 struct apm_user *VAR_13;

 FUNC_4(VAR_6);

 FUNC_3(VAR_6);

 FUNC_5();
 FUNC_15(VAR_6);

 FUNC_6();

 FUNC_10();
 VAR_12 = FUNC_11(VAR_2);
 VAR_8 = 1;
 FUNC_9();

 FUNC_5();
 FUNC_8();

 if (VAR_12 == VAR_1)
  VAR_12 = VAR_3;
 if (VAR_12 != VAR_3)
  FUNC_0("suspend", VAR_12);
 VAR_12 = (VAR_12 == VAR_3) ? 0 : -VAR_4;

 FUNC_14();
 FUNC_6();

 FUNC_2(VAR_5);

 FUNC_1(VAR_5);
 FUNC_7(VAR_0, ((void*)0));
 FUNC_12(&VAR_10);
 for (VAR_13 = VAR_9; VAR_13 != ((void*)0); VAR_13 = VAR_13->next) {
  VAR_13->suspend_wait = 0;
  VAR_13->suspend_result = VAR_12;
 }
 FUNC_13(&VAR_10);
 FUNC_16(&VAR_7);
 return VAR_12;
}
