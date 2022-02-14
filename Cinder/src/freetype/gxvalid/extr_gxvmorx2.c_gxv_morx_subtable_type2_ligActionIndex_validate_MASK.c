
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int optdata; } ;
struct TYPE_9__ {TYPE_2__* face; TYPE_1__ xstatetable; } ;
struct TYPE_8__ {scalar_t__ ligActionTable; } ;
struct TYPE_7__ {scalar_t__ num_glyphs; } ;
typedef TYPE_3__* GXV_morx_subtable_type2_StateOptRecData ;
typedef TYPE_4__* GXV_Validator ;
typedef int FT_UShort ;
typedef int FT_ULong ;
typedef scalar_t__ FT_Long ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
  FUNC_3(
    FT_Bytes VAR_2,
    FT_UShort VAR_3,
    GXV_Validator VAR_4 )
  {

    GXV_morx_subtable_type2_StateOptRecData VAR_5 =
      (GXV_morx_subtable_type2_StateOptRecData)VAR_4->xstatetable.optdata;

    FT_Bytes VAR_6 = VAR_2 + VAR_5->ligActionTable;
    FT_Bytes VAR_7 = VAR_6 +
                         VAR_3 * VAR_1;
    FT_Bytes VAR_8 = VAR_6 + VAR_5->ligActionTable;


    if ( VAR_7 < VAR_6 )
    {
      FUNC_2(( "p < lat_base (%d byte rewind)\n", VAR_6 - VAR_7 ));
      VAR_0;
    }
    else if ( VAR_8 < VAR_7 )
    {
      FUNC_2(( "lat_limit < p (%d byte overrun)\n", VAR_7 - VAR_8 ));
      VAR_0;
    }

    {

      FT_ULong VAR_9;




      FT_ULong VAR_10;
      FT_Long VAR_11;


      VAR_9 = FUNC_0( VAR_7 );





      VAR_10 = VAR_9 & 0x3FFFFFFFUL;



      if ( ( VAR_10 & 0x3FFF0000UL ) == 0x3FFF0000UL )
      {
        VAR_11 = VAR_4->face->num_glyphs -
                    (FT_Long)( VAR_10 & 0x0000FFFFUL );
        if ( VAR_11 > 0 )
          return;

        FUNC_2(( "ligature action table includes"
                    " too negative offset moving all GID"
                    " below defined range: 0x%04x\n",
                    VAR_10 & 0xFFFFU ));
        FUNC_1( VAR_0 );
      }
      else if ( ( VAR_10 & 0x3FFF0000UL ) == 0x00000000UL )
      {
        if ( (FT_Long)VAR_10 < VAR_4->face->num_glyphs )
          return;

        FUNC_2(( "ligature action table includes"
                    " too large offset moving all GID"
                    " over defined range: 0x%04x\n",
                    VAR_10 & 0xFFFFU ));
        FUNC_1( VAR_0 );
      }

      FUNC_2(( "ligature action table includes"
                  " invalid offset to add to 16-bit GID:"
                  " 0x%08x\n", VAR_10 ));
      FUNC_1( VAR_0 );
    }
  }
