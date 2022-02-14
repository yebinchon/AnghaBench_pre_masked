
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int dummy; } ;
struct gstr {int dummy; } ;


 int FUNC_0 (struct menu*,struct gstr*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct gstr*) ;
 char* FUNC_3 (struct gstr*) ;
 struct gstr FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct menu *VAR_0)
{
 struct gstr VAR_1 = FUNC_4();

 FUNC_0(VAR_0, &VAR_1);

 FUNC_1("\n%s\n", FUNC_3(&VAR_1));
 FUNC_2(&VAR_1);
}
