
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; int y; int x; } ;
struct TYPE_5__ {int height; int width; int y_offset; int x_offset; } ;
typedef TYPE_1__ OMX_DISPLAYRECTTYPE ;
typedef TYPE_2__ MMAL_RECT_T ;



__attribute__((used)) static void FUNC_0(MMAL_RECT_T *VAR_0, const OMX_DISPLAYRECTTYPE *VAR_1)
{
   VAR_0->x = VAR_1->x_offset;
   VAR_0->y = VAR_1->y_offset;
   VAR_0->width = VAR_1->width;
   VAR_0->height = VAR_1->height;
}
