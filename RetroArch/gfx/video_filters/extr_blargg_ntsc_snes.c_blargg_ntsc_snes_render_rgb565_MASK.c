
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct filter_data {int burst_toggle; int burst; int ntsc; } ;


 int FUNC_0 (int ,int *,int,int ,int,int,int *,int,int,int) ;
 int FUNC_1 (int ,int *,int,int ,int,int,int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1, int VAR_2,
      int VAR_3, int VAR_4,
      uint16_t *VAR_5, int VAR_6, uint16_t *VAR_7, int VAR_8)
{
   struct filter_data *VAR_9 = (struct filter_data*)VAR_0;
   if(VAR_1 <= 256)
      FUNC_0(VAR_9->ntsc, VAR_5, VAR_6, VAR_9->burst,
            VAR_1, VAR_2, VAR_7, VAR_8 * 2, VAR_3, VAR_4);
   else
      FUNC_1(VAR_9->ntsc, VAR_5, VAR_6, VAR_9->burst,
            VAR_1, VAR_2, VAR_7, VAR_8 * 2, VAR_3, VAR_4);

   VAR_9->burst ^= VAR_9->burst_toggle;
}
