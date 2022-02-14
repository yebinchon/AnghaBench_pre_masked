
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* rcc_item_ty ;
struct TYPE_3__ {int uid; int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(rcc_item_ty VAR_4) {
 FUNC_2("<a name='%d'>", VAR_4->uid);

 FUNC_2("</a>");
 switch (VAR_4->kind) {
 static char *VAR_5 = "item";
 FUNC_1(VAR_0);
  FUNC_3(VAR_0,VAR_2,VAR_2);
  break;
 FUNC_1(VAR_1);
  FUNC_3(VAR_1,VAR_3,VAR_3);
  break;
 default: FUNC_0(0);
 }

 FUNC_2("</ul>\n");
}
