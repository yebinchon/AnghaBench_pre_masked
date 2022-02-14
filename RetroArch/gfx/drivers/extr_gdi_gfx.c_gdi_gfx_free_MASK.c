
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ winDC; scalar_t__ memDC; scalar_t__ texDC; scalar_t__ bmp; } ;
typedef TYPE_1__ gdi_t ;
typedef scalar_t__ HWND ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_2)
{
   gdi_t *VAR_3 = (gdi_t*)VAR_2;
   HWND VAR_4 = FUNC_6();

   if (VAR_0)
   {
      FUNC_4(VAR_0);
      VAR_0 = ((void*)0);
   }

   if (VAR_1)
   {
      FUNC_4(VAR_1);
      VAR_1 = ((void*)0);
   }

   if (!VAR_3)
      return;

   if (VAR_3->bmp)
      FUNC_1(VAR_3->bmp);

   if (VAR_3->texDC)
   {
      FUNC_0(VAR_3->texDC);
      VAR_3->texDC = 0;
   }
   if (VAR_3->memDC)
   {
      FUNC_0(VAR_3->memDC);
      VAR_3->memDC = 0;
   }

   if (VAR_4 && VAR_3->winDC)
   {
      FUNC_2(VAR_4, VAR_3->winDC);
      VAR_3->winDC = 0;
   }

   FUNC_3();
   FUNC_5();
   FUNC_4(VAR_3);
}
