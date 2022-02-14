
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int fixed_x; int fixed_y; int full_x; int full_y; } ;
typedef TYPE_1__ cocoa_touch_data_t ;
struct TYPE_5__ {unsigned int touch_count; int * touches; } ;
typedef TYPE_2__ cocoa_input_data_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;





__attribute__((used)) static int16_t FUNC_0(cocoa_input_data_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4, unsigned VAR_5)
{
   const bool VAR_6 = (VAR_3 == VAR_1);

   if (VAR_4 < VAR_2->touch_count && (VAR_4 < VAR_0))
   {
      int16_t VAR_7, VAR_8;
      const cocoa_touch_data_t *VAR_9 = (const cocoa_touch_data_t *)
         &VAR_2->touches[VAR_4];

       if (!VAR_9)
           return 0;

      VAR_7 = VAR_9->fixed_x;
      VAR_8 = VAR_9->fixed_y;

      if (VAR_6)
      {
         VAR_7 = VAR_9->full_x;
         VAR_8 = VAR_9->full_y;
      }

      switch (VAR_5)
      {
         case 130:
            return (VAR_7 != -0x8000) && (VAR_8 != -0x8000);
         case 129:
            return VAR_7;
         case 128:
            return VAR_8;
         case 131:
            return VAR_2->touch_count;
      }
   }

   return 0;
}
