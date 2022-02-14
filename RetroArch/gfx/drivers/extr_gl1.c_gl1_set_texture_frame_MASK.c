
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int menu_linear_filter; } ;
struct TYPE_7__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {int menu_smooth; } ;
typedef TYPE_3__ gl1_t ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned char*,void const*,unsigned int) ;

__attribute__((used)) static void FUNC_5(void *VAR_6,
      const void *VAR_7, bool VAR_8, unsigned VAR_9, unsigned VAR_10,
      float VAR_11)
{
   settings_t *VAR_12 = FUNC_0();
   unsigned VAR_13 = VAR_9 * 2;
   gl1_t *VAR_14 = (gl1_t*)VAR_6;

   if (!VAR_14)
      return;

   VAR_14->menu_smooth = VAR_12->bools.menu_linear_filter;

   FUNC_2(VAR_14, 0);

   if (VAR_8)
      VAR_13 = VAR_9 * 4;

   if (VAR_1)
   {
      FUNC_1(VAR_1);
      VAR_1 = ((void*)0);
   }

   if ( !VAR_1 ||
         VAR_5 != VAR_9 ||
         VAR_2 != VAR_10 ||
         VAR_3 != VAR_13)
   {
      if (VAR_13 && VAR_10)
      {
         if (VAR_1)
            FUNC_1(VAR_1);


         VAR_1 = (unsigned char*)FUNC_3(VAR_13 * VAR_10);
      }
   }

   if (VAR_1 && VAR_7 && VAR_13 && VAR_10)
   {
      FUNC_4(VAR_1, VAR_7, VAR_13 * VAR_10);
      VAR_5 = VAR_9;
      VAR_2 = VAR_10;
      VAR_3 = VAR_13;
      VAR_0 = VAR_8 ? 32 : 16;
      VAR_4 = 1;
   }

   FUNC_2(VAR_14, 1);
}
