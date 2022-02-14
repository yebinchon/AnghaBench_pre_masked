
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_16__ {int input_remap_binds_enable; } ;
struct TYPE_15__ {unsigned int** input_remap_ids; int input_turbo_period; int input_turbo_duty_cycle; } ;
struct TYPE_17__ {TYPE_2__ bools; TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
typedef int int16_t ;
struct TYPE_18__ {int** analog; } ;
typedef TYPE_4__ input_remote_state_t ;
struct TYPE_19__ {int* analog; int buttons; } ;
typedef TYPE_5__ input_overlay_state_t ;
struct TYPE_22__ {int* enable; int count; int * frame_enable; } ;
struct TYPE_21__ {int valid; } ;
struct TYPE_20__ {int alive; TYPE_5__ overlay_state; } ;
struct TYPE_14__ {int** analog_value; int * buttons; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (TYPE_10__*,unsigned int) ;
 int FUNC_2 (TYPE_5__*,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;





 TYPE_3__* VAR_7 ;
 TYPE_10__* VAR_8 ;
 int VAR_9 ;
 TYPE_9__ VAR_10 ;
 int FUNC_3 (unsigned int,unsigned int) ;
 TYPE_8__** VAR_11 ;
 TYPE_7__* VAR_12 ;
 TYPE_4__ VAR_13 ;

__attribute__((used)) static int16_t FUNC_4(
      int16_t VAR_14,
      unsigned VAR_15, unsigned VAR_16,
      unsigned VAR_17, unsigned VAR_18,
      bool VAR_19)
{
   int16_t VAR_20 = 0;
   settings_t *VAR_21 = VAR_7;





   switch (VAR_16)
   {
      case 132:
         if (VAR_18 < VAR_1




            )
         {
            bool VAR_22 = VAR_11[VAR_15]
               && VAR_11[VAR_15][VAR_18].valid;

            if (VAR_21->bools.input_remap_binds_enable &&
                  VAR_18 != VAR_21->uints.input_remap_ids[VAR_15][VAR_18])
               VAR_20 = 0;
            else if (VAR_22)
            {
               if (VAR_19)
               {
                  VAR_20 = 0;
                  if (VAR_14 & (1 << VAR_18))
                     VAR_20 |= (1 << VAR_18);
               }
               else
                  VAR_20 = VAR_14;
            }
         }

         if (VAR_21->bools.input_remap_binds_enable && VAR_8)
            if (FUNC_0(VAR_8->buttons[VAR_15], VAR_18))
               VAR_20 = 1;


         if ((VAR_18 < VAR_5 || VAR_18 > VAR_4))
         {
            if (VAR_20 && VAR_10.frame_enable[VAR_15])
               VAR_10.enable[VAR_15] |= (1 << VAR_18);
            else if (!VAR_20)
               VAR_10.enable[VAR_15] &= ~(1 << VAR_18);

            if (VAR_10.enable[VAR_15] & (1 << VAR_18))
            {

               VAR_20 = VAR_20 && ((VAR_10.count
                        % VAR_21->uints.input_turbo_period)
                     < VAR_21->uints.input_turbo_duty_cycle);
            }
         }

         break;

      case 129:

         if (VAR_18 < VAR_1)
         {
            bool VAR_23 = VAR_11[VAR_15]
               && VAR_11[VAR_15][VAR_18].valid;

            if (VAR_23)
            {
               if (VAR_19)
               {
                  VAR_20 = 0;
                  if (VAR_14 & (1 << VAR_18))
                     VAR_20 |= (1 << VAR_18);
               }
               else
                  VAR_20 = VAR_14;
            }
         }

         break;

      case 131:

         VAR_20 = VAR_14;
         if (VAR_21->bools.input_remap_binds_enable && VAR_8)
            if (VAR_18 < VAR_2)
               if (FUNC_1(VAR_8, VAR_18))
                  VAR_20 |= 1;

         break;

      case 130:

         if (VAR_18 < VAR_1)
         {
            bool VAR_24 = VAR_11[VAR_15]
               && VAR_11[VAR_15][VAR_18].valid;

            if (VAR_24)
            {
               if (VAR_19)
               {
                  VAR_20 = 0;
                  if (VAR_14 & (1 << VAR_18))
                     VAR_20 |= (1 << VAR_18);
               }
               else
                  VAR_20 = VAR_14;
            }
         }

         break;

      case 133:

         {
            if (VAR_18 < VAR_1



                )
            {
               bool VAR_25 = VAR_11[VAR_15]
                  && VAR_11[VAR_15][VAR_18].valid;

               if (VAR_25)
               {


                  bool VAR_26 = 0;
                  if (VAR_21->bools.input_remap_binds_enable)
                  {
                     if (VAR_17 < 2 && VAR_18 < 2)
                     {
                        unsigned VAR_27 = VAR_0 +
                           (VAR_17 * 4) + (VAR_18 * 2);

                        if (VAR_21->uints.input_remap_ids
                              [VAR_15][VAR_27] != VAR_27)
                           VAR_26 = 1;
                        else if (VAR_21->uints.input_remap_ids
                              [VAR_15][VAR_27+1] != (VAR_27+1))
                           VAR_26 = 1;
                     }
                  }

                  if (!VAR_26)
                  {
                     VAR_20 = VAR_14;





                  }
                  else
                     VAR_20 = 0;
               }
            }

            if (VAR_21->bools.input_remap_binds_enable && VAR_8)
            {
               if (VAR_17 < 2 && VAR_18 < 2)
               {
                  int VAR_28 = 0;
                  unsigned VAR_29 = 0 + (VAR_17 * 4) + (VAR_18 * 2);
                  int VAR_30 = VAR_8->analog_value[VAR_15][VAR_29];
                  int VAR_31 = VAR_8->analog_value[VAR_15][VAR_29+1];

                  if (VAR_30)
                     VAR_28 = VAR_30;
                  else if (VAR_31)
                     VAR_28 = VAR_31;

                  if (VAR_30 || VAR_31)
                     VAR_20 |= VAR_28;
               }
            }
         }
         break;

      case 128:

         if (VAR_18 < VAR_1)
         {
            bool VAR_32 = VAR_11[VAR_15]
               && VAR_11[VAR_15][VAR_18].valid;

            if (VAR_32)
            {
               if (VAR_19)
               {
                  VAR_20 = 0;
                  if (VAR_14 & (1 << VAR_18))
                     VAR_20 |= (1 << VAR_18);
               }
               else
                  VAR_20 = VAR_14;
            }
         }

         break;
   }

   return VAR_20;
}
