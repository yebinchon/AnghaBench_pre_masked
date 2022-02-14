
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t scroll_y; } ;
typedef TYPE_1__ rgui_t ;
struct TYPE_6__ {int height; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t*) ;
 size_t FUNC_1 () ;
 size_t FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(void *VAR_3, bool VAR_4)
{
   size_t VAR_5;
   bool VAR_6 = 0;
   size_t VAR_7 = FUNC_1();
   size_t VAR_8 = FUNC_2();
   rgui_t *VAR_9 = (rgui_t*)VAR_3;

   if (!VAR_9)
      return;

   FUNC_3(VAR_9, 0);
   FUNC_4(VAR_9);

   if (!VAR_4)
      return;

   if (VAR_8 < VAR_2.height /2)
   {
      VAR_5 = 0;
      VAR_6 = 1;
   }
   else if (VAR_8 >= (VAR_2.height /2)
         && VAR_8 < (VAR_7 - VAR_2.height /2))
   {
      VAR_5 = VAR_8 - VAR_2.height /2;
      VAR_6 = 1;
   }
   else if (VAR_8 >= (VAR_7 - VAR_2.height /2))
   {
      VAR_5 = VAR_7 - VAR_2.height;
      VAR_6 = 1;
   }

   if (VAR_6)
   {
      FUNC_0(VAR_1, &VAR_5);
      VAR_9->scroll_y = VAR_5 * VAR_0;
   }
}
