
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list_ty ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(list_ty VAR_0, void VAR_1(void *), char *VAR_2, char *VAR_3, char *VAR_4) {
 int VAR_5 = FUNC_1(VAR_0);

 if (VAR_5 == 0)
  FUNC_2("<em>empty %s list</em>\n", VAR_2);
 else {
  int VAR_6;
  FUNC_2("<em>%s list</em>", VAR_2);
  if (VAR_3 != ((void*)0))
   FUNC_2("<%s>\n", VAR_3);
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   if (VAR_3 != ((void*)0))
    FUNC_2("<li>");
   FUNC_2(VAR_4);
   VAR_1(FUNC_0(VAR_0, VAR_6));
   if (VAR_3 != ((void*)0))
    FUNC_2("</li>\n");
  }
  if (VAR_3 != ((void*)0))
   FUNC_2("</%s>\n", VAR_3);
 }
}
