
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ phys_defined; scalar_t__ time_defined; scalar_t__ background_b; scalar_t__ background_g; scalar_t__ background_r; scalar_t__ background_defined; scalar_t__ filter_method; scalar_t__ compression_method; scalar_t__ interlace_method; int color; } ;
typedef TYPE_1__ LodePNGInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(LodePNGInfo* VAR_0)
{
  FUNC_3(&VAR_0->color);
  VAR_0->interlace_method = 0;
  VAR_0->compression_method = 0;
  VAR_0->filter_method = 0;
}
