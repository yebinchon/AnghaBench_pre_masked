
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_video {float aspect_ratio; int src_pitch; int src_height; int src_width; } ;
struct TYPE_2__ {float value; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct sunxi_video*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, unsigned VAR_2)
{
   struct sunxi_video *VAR_3 = (struct sunxi_video*)VAR_1;
   float VAR_4 = VAR_0[VAR_2].value;

   if (VAR_4 != VAR_3->aspect_ratio)
   {

      VAR_3->aspect_ratio = VAR_4;
      FUNC_0(VAR_3, VAR_3->src_width, VAR_3->src_height, VAR_3->src_pitch);
   }
}
