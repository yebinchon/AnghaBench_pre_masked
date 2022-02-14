
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame_coords; int frame; int dList; } ;
struct TYPE_4__ {TYPE_1__ menu; int main_dList; } ;
typedef TYPE_2__ psp1_video_t ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int ,unsigned int,unsigned int,unsigned int,void*,int ,int ,unsigned int,int ) ;
 int FUNC_6 (int ,int,int ,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ,unsigned int,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (void const*,unsigned int) ;

__attribute__((used)) static void FUNC_15(void *VAR_19, const void *VAR_20, bool VAR_21,
                               unsigned VAR_22, unsigned VAR_23, float VAR_24)
{
   psp1_video_t *VAR_25 = (psp1_video_t*)VAR_19;

   (void) VAR_21;
   (void) VAR_24;






   FUNC_1(VAR_25->menu.frame_coords, 0, 0,
         VAR_18, VAR_17, 0);
   FUNC_2(VAR_25->menu.frame_coords, VAR_22, VAR_23);

   FUNC_14(VAR_20, VAR_22 * VAR_23 * 2);

   FUNC_9(VAR_2, VAR_25->main_dList);
   FUNC_5(VAR_7, 0, 0, VAR_22, VAR_23, VAR_22,
         (void*)VAR_20, 0, 0, VAR_22, VAR_25->menu.frame);
   FUNC_8();

   FUNC_9(VAR_8, VAR_25->menu.dList);
   FUNC_13(VAR_7, 0, 0, VAR_3);
   FUNC_11(VAR_13, VAR_11);
   FUNC_10(VAR_5, VAR_5);
   FUNC_12(0, FUNC_0(VAR_22), FUNC_0(VAR_23), VAR_22, VAR_25->menu.frame);
   FUNC_7(VAR_1);





   FUNC_4(VAR_0, VAR_4, VAR_4, 0xF0F0F0F0, 0x0F0F0F0F);
;
   FUNC_6(VAR_9, VAR_12 | VAR_15 |
         VAR_14, VAR_16, ((void*)0),
         VAR_25->menu.frame_coords);
   FUNC_8();

}
