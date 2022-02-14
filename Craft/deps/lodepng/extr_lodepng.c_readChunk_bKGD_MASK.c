
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ colortype; } ;
struct TYPE_5__ {int background_defined; unsigned char background_r; unsigned char background_g; unsigned char background_b; TYPE_1__ color; } ;
typedef TYPE_2__ LodePNGInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static unsigned FUNC_0(LodePNGInfo* VAR_5, const unsigned char* VAR_6, size_t VAR_7)
{
  if(VAR_5->color.colortype == VAR_2)
  {

    if(VAR_7 != 1) return 43;

    VAR_5->background_defined = 1;
    VAR_5->background_r = VAR_5->background_g = VAR_5->background_b = VAR_6[0];
  }
  else if(VAR_5->color.colortype == VAR_0 || VAR_5->color.colortype == VAR_1)
  {

    if(VAR_7 != 2) return 44;

    VAR_5->background_defined = 1;
    VAR_5->background_r = VAR_5->background_g = VAR_5->background_b
                                 = 256 * VAR_6[0] + VAR_6[1];
  }
  else if(VAR_5->color.colortype == VAR_3 || VAR_5->color.colortype == VAR_4)
  {

    if(VAR_7 != 6) return 45;

    VAR_5->background_defined = 1;
    VAR_5->background_r = 256 * VAR_6[0] + VAR_6[1];
    VAR_5->background_g = 256 * VAR_6[2] + VAR_6[3];
    VAR_5->background_b = 256 * VAR_6[4] + VAR_6[5];
  }

  return 0;
}
