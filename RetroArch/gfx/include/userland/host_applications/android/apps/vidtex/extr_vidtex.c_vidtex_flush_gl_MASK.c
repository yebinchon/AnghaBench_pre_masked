
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int surface; int display; } ;
typedef TYPE_1__ VIDTEX_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(VIDTEX_T *VAR_1)
{
   int VAR_2;

   FUNC_4();
   FUNC_3(0, 0, 0, 0);

   for (VAR_2 = 0; VAR_2 < 10; VAR_2++)
   {
      FUNC_2(VAR_0);
      FUNC_1(VAR_1->display, VAR_1->surface);
      FUNC_0(VAR_1);
   }

   FUNC_4();
   FUNC_0(VAR_1);
}
