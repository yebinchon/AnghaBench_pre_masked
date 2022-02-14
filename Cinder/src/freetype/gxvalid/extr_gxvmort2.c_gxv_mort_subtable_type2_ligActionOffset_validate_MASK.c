
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int optdata; } ;
struct TYPE_7__ {TYPE_1__ statetable; } ;
struct TYPE_6__ {scalar_t__ ligActionTable; int ligatureTable; int ligatureTable_length; } ;
typedef TYPE_2__* GXV_mort_subtable_type2_StateOptRecData ;
typedef TYPE_3__* GXV_Validator ;
typedef scalar_t__ FT_UShort ;
typedef int FT_ULong ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
  FUNC_4(
    FT_Bytes VAR_1,
    FT_UShort VAR_2,
    GXV_Validator VAR_3 )
  {

    GXV_mort_subtable_type2_StateOptRecData VAR_4 =
      (GXV_mort_subtable_type2_StateOptRecData)VAR_3->statetable.optdata;

    FT_Bytes VAR_5 = VAR_1 + VAR_4->ligActionTable;
    FT_Bytes VAR_6 = VAR_1 + VAR_2;
    FT_Bytes VAR_7 = VAR_5 + VAR_4->ligActionTable;


    FUNC_1( VAR_2 );
    if ( VAR_6 < VAR_5 )
    {
      FUNC_3(( "too short offset 0x%04x: p < lat_base (%d byte rewind)\n",
                  VAR_2, VAR_5 - VAR_6 ));


      FUNC_2( VAR_0 );
    }
    else if ( VAR_7 < VAR_6 )
    {
      FUNC_3(( "too large offset 0x%04x: lat_limit < p (%d byte overrun)\n",
                  VAR_2, VAR_6 - VAR_7 ));


      FUNC_2( VAR_0 );
    }
    else
    {

      FT_ULong VAR_8;




      FT_ULong VAR_9;


      VAR_8 = FUNC_0( VAR_6 );






      VAR_9 = VAR_8 & 0x3FFFFFFFUL;
      if ( VAR_9 * 2 < VAR_4->ligatureTable )
      {
        FUNC_3(( "too short offset 0x%08x:"
                    " 2 x offset < ligatureTable (%d byte rewind)\n",
                     VAR_9, VAR_4->ligatureTable - VAR_9 * 2 ));

        FUNC_2( VAR_0 );
      } else if ( VAR_9 * 2 >
                  VAR_4->ligatureTable + VAR_4->ligatureTable_length )
      {
        FUNC_3(( "too long offset 0x%08x:"
                    " 2 x offset > ligatureTable + ligatureTable_length"
                    " (%d byte overrun)\n",
                     VAR_9,
                     VAR_4->ligatureTable + VAR_4->ligatureTable_length
                     - VAR_9 * 2 ));

        FUNC_2( VAR_0 );
      }
    }
  }
