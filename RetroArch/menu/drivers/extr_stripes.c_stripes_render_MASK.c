
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cursor_size; float margins_screen_top; float icon_size; } ;
typedef TYPE_1__ stripes_handle_t ;
typedef int settings_t ;
struct TYPE_7__ {scalar_t__ type; float y; } ;
typedef TYPE_2__ menu_input_pointer_t ;
typedef float int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,size_t*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (size_t) ;
 size_t FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,unsigned int,unsigned int,size_t,unsigned int*,unsigned int*) ;
 float FUNC_8 (TYPE_1__*,int,size_t) ;

__attribute__((used)) static void FUNC_9(void *VAR_5,
      unsigned VAR_6, unsigned VAR_7,
      bool VAR_8)
{
   size_t VAR_9;
   menu_input_pointer_t VAR_10;
   settings_t *VAR_11 = FUNC_0();
   stripes_handle_t *VAR_12 = (stripes_handle_t*)VAR_5;
   unsigned VAR_13 = (unsigned)FUNC_3();

   if (!VAR_12)
      return;

   FUNC_4(&VAR_10);

   if (VAR_10.type != VAR_3)
   {
      size_t VAR_14 = FUNC_6();
      int16_t VAR_15 = VAR_10.y;
      unsigned VAR_16 = 0, VAR_17 = VAR_13;

      VAR_15 = (VAR_10.type == VAR_4) ?
            VAR_15 + (VAR_12->cursor_size/2) : VAR_15;

      if (VAR_7)
         FUNC_7(VAR_12, VAR_7,
               VAR_13, VAR_14, &VAR_16, &VAR_17);

      for (VAR_9 = VAR_16; VAR_9 <= VAR_17; VAR_9++)
      {
         float VAR_18 = VAR_12->margins_screen_top
            + FUNC_8(VAR_12, (int)VAR_9, VAR_14);
         float VAR_19 = VAR_18 + VAR_12->icon_size;

         if (VAR_15 > VAR_18 && VAR_15 < VAR_19)
            FUNC_5(VAR_9);
      }
   }

   FUNC_2(VAR_2, &VAR_9);

   if (VAR_9 >= VAR_13)
   {
      VAR_9 = 0;
      FUNC_2(VAR_1, &VAR_9);
   }

   FUNC_1(VAR_0, ((void*)0));
}
