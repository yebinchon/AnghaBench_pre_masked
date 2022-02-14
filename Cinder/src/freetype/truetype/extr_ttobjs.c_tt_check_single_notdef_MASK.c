
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_locations; } ;
typedef TYPE_1__* TT_Face ;
typedef scalar_t__ FT_ULong ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Face ;
typedef int FT_Error ;
typedef int FT_Bool ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static FT_Bool
  FUNC_3( FT_Face VAR_2 )
  {
    FT_Bool VAR_3 = VAR_0;

    TT_Face VAR_4 = (TT_Face)VAR_2;
    FT_UInt VAR_5;
    FT_ULong VAR_6;
    FT_ULong VAR_7 = 0;
    FT_UInt VAR_8 = 0;


    for( VAR_6 = 0; VAR_6 < VAR_4->num_locations; VAR_6++ )
    {
      FUNC_2( VAR_4, VAR_6, &VAR_5 );
      if ( VAR_5 > 0 )
      {
        VAR_8 += 1;
        if ( VAR_8 > 1 )
          break;
        VAR_7 = VAR_6;
      }
    }


    if ( VAR_8 == 1 )
    {
      if ( VAR_7 == 0 )
        VAR_3 = VAR_1;
      else
      {

        FT_Error VAR_9;
        char VAR_10[8];


        VAR_9 = FUNC_0( VAR_2, VAR_7, VAR_10, 8 );
        if ( !VAR_9 &&
             VAR_10[0] == '.' && !FUNC_1( VAR_10, ".notdef", 8 ) )
          VAR_3 = VAR_1;
      }
    }

    return VAR_3;
  }
