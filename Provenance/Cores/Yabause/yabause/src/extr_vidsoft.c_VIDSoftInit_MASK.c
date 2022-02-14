
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int pixel_t ;
struct TYPE_4__ {int* draw_finished; scalar_t__* need_draw; } ;
struct TYPE_3__ {int draw_finished; scalar_t__ need_draw; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int,int) ;
 int * VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int ** VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_2__ VAR_21 ;
 TYPE_1__ VAR_22 ;

int FUNC_4(void)
{
   int VAR_23;

   if (FUNC_0() == -1)
      return -1;

   if ((VAR_14 = (pixel_t *)FUNC_3(sizeof(pixel_t), 704 * 512)) == ((void*)0))
      return -1;


   if ((VAR_17[0] = (u8 *)FUNC_3(sizeof(u8), 0x40000)) == ((void*)0))
      return -1;


   if ((VAR_17[1] = (u8 *)FUNC_3(sizeof(u8), 0x40000)) == ((void*)0))
      return -1;

   VAR_16 = VAR_17[0];
   VAR_18 = VAR_17[1];
   VAR_15 = VAR_20 = 320;
   VAR_19 = 224;





   for (VAR_23 = 0; VAR_23 < 6; VAR_23++)
   {
      VAR_21.draw_finished[VAR_23] = 1;
      VAR_21.need_draw[VAR_23] = 0;
   }

   VAR_22.need_draw = 0;
   VAR_22.draw_finished = 1;
   FUNC_2(VAR_13, VAR_6, 0);

   FUNC_2(VAR_11, VAR_4, 0);
   FUNC_2(VAR_7, VAR_0, 0);
   FUNC_2(VAR_8, VAR_1, 0);
   FUNC_2(VAR_9, VAR_2, 0);
   FUNC_2(VAR_10, VAR_3, 0);
   FUNC_2(VAR_12, VAR_5, 0);

   return 0;
}
