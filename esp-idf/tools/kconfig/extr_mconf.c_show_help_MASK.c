
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int dummy; } ;
struct gstr {scalar_t__ max_width; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct menu*,struct gstr*) ;
 int FUNC_3 (struct menu*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct gstr*) ;
 int FUNC_6 (struct gstr*) ;
 struct gstr FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct menu *VAR_1)
{
 struct gstr VAR_2 = FUNC_7();

 VAR_2.max_width = FUNC_1(VAR_0) - 10;
 FUNC_2(VAR_1, &VAR_2);

 FUNC_4(FUNC_0(FUNC_3(VAR_1)), FUNC_6(&VAR_2));
 FUNC_5(&VAR_2);
}
