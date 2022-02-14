
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int ** VAR_3 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 if (VAR_2) {
  int VAR_4;

  FUNC_0();

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_3[VAR_4] != ((void*)0)) {
    VAR_1 = VAR_4;
    break;
   }
  }

  FUNC_2();
  FUNC_1(0);
 }
}
