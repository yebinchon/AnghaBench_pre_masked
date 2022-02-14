
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int* input_libretro_device; unsigned int** input_keymapper_ids; unsigned int** input_remap_ids; } ;
struct TYPE_9__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
typedef int int16_t ;
typedef int input_overlay_t ;
struct TYPE_10__ {int** analog_value; int * buttons; int keys; } ;
typedef TYPE_3__ input_mapper_t ;
struct TYPE_11__ {int* analog_buttons; int* analogs; } ;
typedef TYPE_4__ input_bits_t ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (TYPE_4__,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*,unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;



 unsigned int VAR_5 ;
 int FUNC_4 (int) ;
 int* FUNC_5 (int ) ;
 int FUNC_6 (int,unsigned int,int ,int ,int const) ;
 unsigned int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int ,int ,int) ;

void FUNC_9(input_mapper_t *VAR_6,
      void *VAR_7,
      void *VAR_8,
      void *VAR_9,
      unsigned VAR_10,
      bool VAR_11)
{
   unsigned VAR_12, VAR_13;



   settings_t *VAR_14 = (settings_t*)VAR_8;
   input_bits_t *VAR_15 = (input_bits_t*)VAR_9;

   FUNC_8(VAR_6->keys, 0, sizeof(VAR_6->keys));

   for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
   {
      unsigned VAR_16 = VAR_14->uints.input_libretro_device[VAR_12]
         & VAR_5;
      input_bits_t VAR_17 = *VAR_15++;

      switch (VAR_16)
      {

         case 128:
            for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
            {
               unsigned VAR_18 =
                  VAR_14->uints.input_keymapper_ids[VAR_12][VAR_13];
               bool VAR_19 = VAR_18 != VAR_4;

               if (VAR_19)
               {
                  unsigned VAR_20 = FUNC_1(VAR_17, VAR_13);




                  if ((VAR_20 == 1) && (VAR_13 != VAR_18))
                  {
                     FUNC_3 (VAR_6,
                           VAR_18);
                     FUNC_6(1,
                           VAR_18,
                           0, 0, 128);
                     continue;
                  }


                  FUNC_6(0,
                        VAR_18,
                        0, 0, 128);
               }
            }
            break;


         case 129:
         case 130:





            FUNC_0(VAR_6->buttons[VAR_12]);

            for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
               VAR_6->analog_value[VAR_12][VAR_13] = 0;

            for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
            {
               bool VAR_21;
               unsigned VAR_22 =
                  VAR_14->uints.input_remap_ids[VAR_12][VAR_13];
               unsigned VAR_23 = FUNC_1(VAR_17, VAR_13);




               VAR_21 = (VAR_23 == 1) &&
                  (VAR_13 != VAR_22) && (VAR_22 != VAR_3);

               if (VAR_21)
               {
                  if (VAR_22 < VAR_2)
                  {
                     FUNC_2(VAR_6->buttons[VAR_12], VAR_22);
                  }
                  else if (VAR_22 >= VAR_2)
                  {
                     int VAR_24 = 1;

                     if (VAR_22 % 2 != 0)
                        VAR_24 = -1;

                     VAR_6->analog_value[VAR_12][
                        VAR_22 - VAR_2] =
                           (VAR_17.analog_buttons[VAR_13] ? VAR_17.analog_buttons[VAR_13] : 32767) * VAR_24;
                  }
               }
            }

            for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
            {
               unsigned VAR_25 = VAR_13 + VAR_2;
               int16_t VAR_26 = VAR_17.analogs[VAR_13];
               unsigned VAR_27 =
                  VAR_14->uints.input_remap_ids[VAR_12][VAR_25];

               if (
                     (FUNC_4(VAR_26) > 0 &&
                      (VAR_25 != VAR_27) &&
                      (VAR_27 != VAR_3)
                     ))
               {
                  if (VAR_27 < VAR_2 &&
                        FUNC_4(VAR_26) > *FUNC_5(VAR_0) * 32767)
                  {
                     FUNC_2(VAR_6->buttons[VAR_12], VAR_27);
                  }
                  else
                  {
                     unsigned VAR_28 = VAR_27 - VAR_2;

                     if (VAR_28 < sizeof(VAR_6->analog_value[VAR_12]))
                     {
                        int VAR_29 = 1;
                        if ( (VAR_25 % 2 == 0 && VAR_27 % 2 != 0) ||
                              (VAR_25 % 2 != 0 && VAR_27 % 2 == 0)
                           )
                           VAR_29 = -1;

                        VAR_6->analog_value[VAR_12][
                           VAR_28] =
                              VAR_26 * VAR_29;
                     }
                  }
               }

            }
            break;
         default:
            break;
      }
   }
}
