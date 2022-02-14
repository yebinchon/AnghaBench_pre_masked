
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int progress; } ;
typedef TYPE_1__ dispserv_win32_t ;
typedef int HWND ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(void *VAR_5, int VAR_6, bool VAR_7)
{
   HWND VAR_8 = FUNC_2();
   dispserv_win32_t *VAR_9 = (dispserv_win32_t*)VAR_5;

   if (VAR_9)
      VAR_9->progress = VAR_6;
   return 1;
}
