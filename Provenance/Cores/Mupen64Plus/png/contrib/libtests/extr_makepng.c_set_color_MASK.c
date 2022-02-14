
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void** png_const_bytep ;
typedef TYPE_1__* png_colorp ;
typedef scalar_t__* png_bytep ;
typedef scalar_t__ png_byte ;
struct TYPE_3__ {void* blue; void* green; void* red; } ;



__attribute__((used)) static void
FUNC_0(png_colorp VAR_0, png_bytep VAR_1, unsigned int VAR_2,
   unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5,
   png_const_bytep VAR_6)
{
   VAR_0->red = VAR_6[VAR_2];
   VAR_0->green = VAR_6[VAR_3];
   VAR_0->blue = VAR_6[VAR_4];
   *VAR_1 = (png_byte)VAR_5;
}
