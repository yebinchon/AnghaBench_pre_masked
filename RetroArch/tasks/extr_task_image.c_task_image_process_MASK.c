
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int width; unsigned int height; int pixels; } ;
struct nbio_image_handle {TYPE_1__ ti; int size; int type; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(
      struct nbio_image_handle *VAR_1,
      unsigned *VAR_2,
      unsigned *VAR_3)
{
   int VAR_4;

   if (!FUNC_0(VAR_1->handle, VAR_1->type))
      return VAR_0;

   VAR_4 = FUNC_1(
         VAR_1->handle,
         VAR_1->type,
         &VAR_1->ti.pixels, VAR_1->size, VAR_2, VAR_3);

   if (VAR_4 == VAR_0)
      return VAR_0;

   VAR_1->ti.width = *VAR_2;
   VAR_1->ti.height = *VAR_3;

   return VAR_4;
}
