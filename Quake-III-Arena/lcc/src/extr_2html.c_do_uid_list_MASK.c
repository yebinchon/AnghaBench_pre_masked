
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list_ty ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(list_ty VAR_0) {
 int VAR_1, VAR_2 = FUNC_1(VAR_0);

 if (VAR_2 == 0)
  FUNC_3("<em>empty int list</em>\n");
 else {
  int VAR_3;
  FUNC_3("<em>int list</em>");
  for (VAR_3= 0; VAR_3 < VAR_2; VAR_3++) {
   FUNC_3(" ");
   FUNC_2(*(int *)FUNC_0(VAR_0, VAR_3));
  }
 }
}
