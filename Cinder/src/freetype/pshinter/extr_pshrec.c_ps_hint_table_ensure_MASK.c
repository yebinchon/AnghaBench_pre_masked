
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_hints; int hints; } ;
typedef TYPE_1__* PS_Hint_Table ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Memory ;
typedef int FT_Error ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static FT_Error
  FUNC_2( PS_Hint_Table VAR_1,
                        FT_UInt VAR_2,
                        FT_Memory VAR_3 )
  {
    FT_UInt VAR_4 = VAR_1->max_hints;
    FT_UInt VAR_5 = VAR_2;
    FT_Error VAR_6 = VAR_0;


    if ( VAR_5 > VAR_4 )
    {

      VAR_5 = FUNC_0( VAR_5, 8 );
      if ( !FUNC_1( VAR_1->hints, VAR_4, VAR_5 ) )
        VAR_1->max_hints = VAR_5;
    }
    return VAR_6;
  }
