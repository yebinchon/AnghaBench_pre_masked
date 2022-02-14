
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {float previous_scale_factor; float margins_screen_top; float icon_spacing_vertical; float active_item_factor; int depth; scalar_t__ margins_screen_left; } ;
typedef TYPE_2__ xmb_handle_t ;
struct TYPE_14__ {float menu_scale_factor; } ;
struct TYPE_16__ {TYPE_1__ floats; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_17__ {scalar_t__ type; scalar_t__ x; scalar_t__ y; int press_direction; } ;
typedef TYPE_4__ menu_input_pointer_t ;
struct TYPE_18__ {int path_enabled; int label_enabled; int rich_label_enabled; int value_enabled; int sublabel_enabled; } ;
typedef TYPE_5__ menu_entry_t ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;


 scalar_t__ VAR_8 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,size_t*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_5__*,size_t,int ) ;
 int FUNC_7 (TYPE_5__*,int ,size_t,int *,int) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (size_t) ;
 size_t FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_2__*,unsigned int,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_14 (TYPE_2__*,int ,int) ;
 float FUNC_15 (TYPE_2__*,int,size_t) ;

__attribute__((used)) static void FUNC_16(void *VAR_9,
      unsigned VAR_10, unsigned VAR_11, bool VAR_12)
{
   size_t VAR_13;
   float VAR_14;
   menu_input_pointer_t VAR_15;
   settings_t *VAR_16 = FUNC_0();
   xmb_handle_t *VAR_17 = (xmb_handle_t*)VAR_9;
   unsigned VAR_18 = (unsigned)FUNC_5();

   if (!VAR_17)
      return;

   VAR_14 = (VAR_16->floats.menu_scale_factor * (float)VAR_10) / 1920.0f;

   if (VAR_14 >= 0.1f && VAR_14 != VAR_17->previous_scale_factor)
      FUNC_14(VAR_17, FUNC_12(),
            0);

   VAR_17->previous_scale_factor = VAR_14;

   FUNC_9(&VAR_15);

   if (VAR_15.type != VAR_8)
   {
      size_t VAR_19 = FUNC_11();
      int16_t VAR_20 = (int16_t)VAR_17->margins_screen_top;
      int16_t VAR_21 = (int16_t)VAR_17->margins_screen_left;
      int16_t VAR_22 = (int16_t)((float)VAR_10 - VAR_17->margins_screen_left);
      int16_t VAR_23 = VAR_15.x;
      int16_t VAR_24 = VAR_15.y;




      FUNC_3(VAR_10);
      FUNC_2(VAR_11);




      if ((VAR_23 > VAR_21) && (VAR_23 < VAR_22))
      {
         unsigned VAR_25 = 0;
         unsigned VAR_26 = VAR_18;

         if (VAR_11)
            FUNC_13(VAR_17, VAR_11,
                  VAR_18, (unsigned)VAR_19, &VAR_25, &VAR_26);

         for (VAR_13 = VAR_25; VAR_13 <= VAR_26; VAR_13++)
         {
            float VAR_27 = (VAR_13 == VAR_19) ?
                  VAR_17->icon_spacing_vertical * VAR_17->active_item_factor : VAR_17->icon_spacing_vertical;
            float VAR_28 = VAR_27 * 0.5f;
            float VAR_29;
            int VAR_30;
            int VAR_31;

            VAR_29 = FUNC_15(VAR_17, (int)VAR_13, VAR_19) + VAR_17->margins_screen_top;

            VAR_30 = (int)((VAR_29 - VAR_28) + 0.5f);
            VAR_31 = (int)((VAR_29 + VAR_28) + 0.5f);

            if ((VAR_24 > VAR_30) && (VAR_24 < VAR_31))
            {
               FUNC_10(VAR_13);
               break;
            }
         }
      }





      if ((VAR_24 < VAR_20) || (VAR_23 > VAR_22))
      {
         menu_entry_t VAR_32;

         if (VAR_15.press_direction != VAR_7)
         {
            FUNC_8(&VAR_32);
            VAR_32.path_enabled = 0;
            VAR_32.label_enabled = 0;
            VAR_32.rich_label_enabled = 0;
            VAR_32.value_enabled = 0;
            VAR_32.sublabel_enabled = 0;
            FUNC_7(&VAR_32, 0, VAR_19, ((void*)0), 1);
         }

         switch (VAR_15.press_direction)
         {
            case 128:


               if (VAR_23 > VAR_22)
                  FUNC_6(&VAR_32, VAR_19, VAR_0);
               break;
            case 131:


               if (VAR_23 > VAR_22)
                  FUNC_6(&VAR_32, VAR_19, VAR_3);
               break;
            case 130:




               if (VAR_24 < VAR_20)
                  FUNC_6(
                        &VAR_32, VAR_19, (VAR_17->depth == 1) ? VAR_2 : VAR_1);
               break;
            case 129:




               if (VAR_24 < VAR_20)
                  FUNC_6(
                        &VAR_32, VAR_19, (VAR_17->depth == 1) ? VAR_1 : VAR_2);
               break;
            default:

               break;
         }
      }
   }

   FUNC_4(VAR_6, &VAR_13);

   if (VAR_13 >= VAR_18)
   {
      VAR_13 = 0;
      FUNC_4(VAR_5, &VAR_13);
   }

   FUNC_1(VAR_4, ((void*)0));
}
