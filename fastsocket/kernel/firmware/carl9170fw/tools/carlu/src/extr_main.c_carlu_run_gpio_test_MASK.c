
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct carlu*) ;
 int FUNC_1 (struct carlu*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct carlu*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct carlu*) ;
 struct carlu* FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void)
{
 struct carlu *VAR_2 = ((void*)0);
 int VAR_3;

 VAR_3 = FUNC_4();
 if (VAR_3)
  goto out;

 VAR_2 = FUNC_6();
 if (FUNC_0(VAR_2)) {
  VAR_3 = FUNC_1(VAR_2);
  goto out;
 }

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto out_close;

out_close:
 FUNC_5(VAR_2);

out:
 FUNC_2();
 return VAR_3 ? VAR_0 : VAR_1;
}
