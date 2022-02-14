
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int right; unsigned int left; unsigned int bottom; unsigned int top; } ;
struct TYPE_5__ {TYPE_1__ rcMonitor; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ MONITORINFOEX ;
typedef int HWND ;
typedef int * HMONITOR ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int **,unsigned int*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2,
      unsigned *VAR_3, unsigned *VAR_4)
{
   HWND VAR_5 = FUNC_0();

   (void)VAR_2;

   if (!VAR_5)
   {
      RECT VAR_6;
      MONITORINFOEX VAR_7;
      unsigned VAR_8 = 0;
      HMONITOR VAR_9 = ((void*)0);

      FUNC_1(&VAR_7, &VAR_9, &VAR_8);
      VAR_6 = VAR_7.rcMonitor;
      *VAR_3 = VAR_6.right - VAR_6.left;
      *VAR_4 = VAR_6.bottom - VAR_6.top;
   }
   else
   {
      *VAR_3 = VAR_1;
      *VAR_4 = VAR_0;
   }
}
