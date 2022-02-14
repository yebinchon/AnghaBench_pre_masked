
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VGfloat ;
struct TYPE_9__ {TYPE_3__* ft_face; } ;
typedef TYPE_4__ VGFT_FONT_T ;
struct TYPE_8__ {TYPE_2__* size; } ;
struct TYPE_6__ {int height; } ;
struct TYPE_7__ {TYPE_1__ metrics; } ;


 int FUNC_0 (int ) ;

VGfloat FUNC_1(VGFT_FONT_T *VAR_0) {
   return FUNC_0(VAR_0->ft_face->size->metrics.height);
}
