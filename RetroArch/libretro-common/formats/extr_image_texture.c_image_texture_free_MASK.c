
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct texture_image {int * pixels; scalar_t__ height; scalar_t__ width; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct texture_image *VAR_0)
{
   if (!VAR_0)
      return;

   if (VAR_0->pixels)
      FUNC_0(VAR_0->pixels);
   VAR_0->width = 0;
   VAR_0->height = 0;
   VAR_0->pixels = ((void*)0);
}
