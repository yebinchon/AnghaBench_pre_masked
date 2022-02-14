
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ end_point; scalar_t__ num_bits; } ;
struct TYPE_6__ {scalar_t__ num_masks; scalar_t__ max_masks; scalar_t__ masks; } ;
typedef TYPE_1__* PS_Mask_Table ;
typedef TYPE_2__* PS_Mask ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static FT_Error
  FUNC_1( PS_Mask_Table VAR_1,
                       FT_Memory VAR_2,
                       PS_Mask *VAR_3 )
  {
    FT_UInt VAR_4;
    FT_Error VAR_5 = VAR_0;
    PS_Mask VAR_6 = ((void*)0);


    VAR_4 = VAR_1->num_masks;
    VAR_4++;

    if ( VAR_4 > VAR_1->max_masks )
    {
      VAR_5 = FUNC_0( VAR_1, VAR_4, VAR_2 );
      if ( VAR_5 )
        goto Exit;
    }

    VAR_6 = VAR_1->masks + VAR_4 - 1;
    VAR_6->num_bits = 0;
    VAR_6->end_point = 0;
    VAR_1->num_masks = VAR_4;

  Exit:
    *VAR_3 = VAR_6;
    return VAR_5;
  }
