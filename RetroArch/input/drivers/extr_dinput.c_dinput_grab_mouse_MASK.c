
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dinput_input {int mouse; } ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_3, bool VAR_4)
{
   struct dinput_input *VAR_5 = (struct dinput_input*)VAR_3;

   FUNC_2(VAR_5->mouse);
   FUNC_1(VAR_5->mouse,
      (HWND)FUNC_3(),
      VAR_4 ?
      (VAR_0 | VAR_1) :
      (VAR_2 | VAR_1));
   FUNC_0(VAR_5->mouse);
}
