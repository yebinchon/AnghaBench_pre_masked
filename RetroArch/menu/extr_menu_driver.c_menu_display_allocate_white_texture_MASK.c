
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct texture_image {int width; int height; int * pixels; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct texture_image*,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;

void FUNC_2(void)
{
   struct texture_image VAR_2;
   static const uint8_t VAR_3[] = { 0xff, 0xff, 0xff, 0xff };

   VAR_2.width = 1;
   VAR_2.height = 1;
   VAR_2.pixels = (uint32_t*)&VAR_3;

   if (VAR_1)
      FUNC_1(&VAR_1);

   FUNC_0(&VAR_2,
         VAR_0, &VAR_1);
}
