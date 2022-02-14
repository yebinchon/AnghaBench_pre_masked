
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_bits; int * bytes; } ;
typedef TYPE_1__* PS_Mask ;
typedef int PSH_Hint_Table ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Int ;
typedef int FT_Byte ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
  FUNC_1( PSH_Hint_Table VAR_0,
                              PS_Mask VAR_1 )
  {
    FT_Int VAR_2 = 0, VAR_3 = 0;
    FT_Byte* VAR_4 = VAR_1->bytes;
    FT_UInt VAR_5, VAR_6;


    VAR_6 = VAR_1->num_bits;

    for ( VAR_5 = 0; VAR_5 < VAR_6; VAR_5++ )
    {
      if ( VAR_2 == 0 )
      {
        VAR_3 = *VAR_4++;
        VAR_2 = 0x80;
      }

      if ( VAR_3 & VAR_2 )
        FUNC_0( VAR_0, VAR_5 );

      VAR_2 >>= 1;
    }
  }
