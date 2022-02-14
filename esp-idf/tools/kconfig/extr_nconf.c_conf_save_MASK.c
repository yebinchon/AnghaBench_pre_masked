
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int ,int ,int **,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 while (1) {
  int VAR_6;
  VAR_6 = FUNC_3(VAR_3,
    ((void*)0), VAR_5,
    VAR_2,
    &VAR_0,
    &VAR_1);
  switch (VAR_6) {
  case 0:
   if (!VAR_0[0])
    return;
   VAR_6 = FUNC_2(VAR_0);
   if (!VAR_6) {
    FUNC_4(VAR_0);
    return;
   }
   FUNC_1(VAR_3, FUNC_0("Can't create file! "
    "Probably a nonexistent directory."),
    1, "<OK>");
   break;
  case 1:
   FUNC_5(VAR_3,
    FUNC_0("Save Alternate Configuration"),
    VAR_4);
   break;
  case 128:
   return;
  }
 }
}
