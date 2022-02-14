
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t joy_idx; int auto_binds; int axis_threshold; } ;
typedef TYPE_2__ rarch_joypad_info_t ;
typedef int int16_t ;
struct TYPE_13__ {int movie_end; } ;
struct TYPE_12__ {int file; } ;
struct TYPE_8__ {size_t* input_joypad_map; } ;
struct TYPE_11__ {TYPE_1__ uints; } ;
struct TYPE_10__ {int (* input_state ) (int ,TYPE_2__,int ,unsigned int,unsigned int,unsigned int,unsigned int) ;} ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_7__ VAR_4 ;
 TYPE_6__* VAR_5 ;
 TYPE_5__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,unsigned int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int*,int) ;
 int VAR_13 ;
 int FUNC_5 (int ,TYPE_2__,int ,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int16_t FUNC_7(unsigned VAR_14, unsigned VAR_15,
      unsigned VAR_16, unsigned VAR_17)
{
   rarch_joypad_info_t VAR_18;
   int16_t VAR_19 = 0;
   int16_t VAR_20 = 0;
   VAR_18.axis_threshold = VAR_10;
   VAR_18.joy_idx = VAR_6->uints.input_joypad_map[VAR_14];
   VAR_18.auto_binds = VAR_9[VAR_18.joy_idx];

   if (FUNC_1())
   {
      int16_t VAR_21;
      if (FUNC_3(VAR_5->file, &VAR_21, 2) == 2)
         return FUNC_6(VAR_21);
      VAR_4.movie_end = 1;
   }

   VAR_15 &= VAR_3;
   VAR_20 = VAR_7->input_state(
         VAR_8, VAR_18,
         VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);

   if ( !VAR_12
         && !VAR_11)
   {
      if ( (VAR_15 == VAR_2) &&
            (VAR_17 == VAR_1))
      {
         unsigned VAR_22;

         {
            for (VAR_22 = 0; VAR_22 < VAR_0; VAR_22++)
               if (FUNC_2(VAR_20, VAR_14, VAR_15, VAR_16, VAR_22, 1))
                  VAR_19 |= (1 << VAR_22);
         }
      }
      else
         VAR_19 = FUNC_2(VAR_20, VAR_14, VAR_15, VAR_16, VAR_17, 0);
   }

   if (FUNC_0())
   {
      VAR_19 = FUNC_6(VAR_19);
      FUNC_4(VAR_5->file, &VAR_19, 2);
   }

   return VAR_19;
}
