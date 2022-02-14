
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct winsize {int ws_col; } ;
typedef int UINT ;
typedef int CONSOLE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct winsize*,int) ;
 scalar_t__ FUNC_2 (int,int ,struct winsize*) ;

UINT FUNC_3(CONSOLE *VAR_1)
{
 UINT VAR_2 = 0;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }




 {
  struct winsize VAR_3;

  FUNC_1(&VAR_3, sizeof(VAR_3));

  if (FUNC_2(1, VAR_0, &VAR_3) == 0)
  {
   VAR_2 = VAR_3.ws_col;
  }
 }


 return VAR_2;
}
