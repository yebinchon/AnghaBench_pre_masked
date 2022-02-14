
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct png_ihdr {scalar_t__ width; scalar_t__ height; void* interlace; void* filter; void* compression; void* color_type; void* depth; } ;


 void* FUNC_0 (void**) ;

__attribute__((used)) static bool FUNC_1(uint8_t *VAR_0,
      struct png_ihdr *VAR_1)
{
   VAR_0 += 4 + 4;

   VAR_1->width = FUNC_0(VAR_0 + 0);
   VAR_1->height = FUNC_0(VAR_0 + 4);
   VAR_1->depth = VAR_0[8];
   VAR_1->color_type = VAR_0[9];
   VAR_1->compression = VAR_0[10];
   VAR_1->filter = VAR_0[11];
   VAR_1->interlace = VAR_0[12];

   if (VAR_1->width == 0 || VAR_1->height == 0)
      return 0;

   return 1;
}
