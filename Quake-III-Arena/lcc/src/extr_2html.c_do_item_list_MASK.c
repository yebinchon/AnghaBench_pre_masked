
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* rcc_item_ty ;
typedef int list_ty ;
struct TYPE_4__ {int uid; } ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(list_ty VAR_0) {
 int VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 == 0)
  FUNC_3("<em>empty item list</em>\n");
 else {
  int VAR_2;
  FUNC_3("<em>item list</em>");
  FUNC_3("<ol>\n");
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
   rcc_item_ty VAR_3 = FUNC_0(VAR_0, VAR_2);
   FUNC_3("<li value=%d>", VAR_3->uid);
   FUNC_2(VAR_3);
   FUNC_3("</li>\n");
  }
  FUNC_3("</ol>\n");
 }
}
