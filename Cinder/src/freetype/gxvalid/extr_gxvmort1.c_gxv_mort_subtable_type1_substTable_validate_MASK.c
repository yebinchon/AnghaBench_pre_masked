
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ optdata; } ;
struct TYPE_7__ {scalar_t__ min_gid; scalar_t__ max_gid; TYPE_1__ statetable; } ;
struct TYPE_6__ {int substitutionTable_length; } ;
typedef TYPE_2__ GXV_mort_subtable_type1_StateOptRec ;
typedef TYPE_3__* GXV_Validator ;
typedef scalar_t__ FT_UShort ;
typedef int FT_Bytes ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
  FUNC_5( FT_Bytes VAR_2,
                                               FT_Bytes VAR_3,
                                               GXV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_2;
    FT_UShort VAR_6 = (FT_UShort)(
                 ((GXV_mort_subtable_type1_StateOptRec *)
                  (VAR_4->statetable.optdata))->substitutionTable_length / 2 );
    FT_UShort VAR_7;


    FUNC_2( "validating contents of substitutionTable" );
    for ( VAR_7 = 0; VAR_7 < VAR_6; VAR_7++ )
    {
      FT_UShort VAR_8;


      FUNC_1( 2 );
      VAR_8 = FUNC_0( VAR_5 );

      if ( VAR_8 >= 0xFFFFU )
        continue;

      if ( VAR_8 < VAR_4->min_gid || VAR_4->max_gid < VAR_8 )
      {
        FUNC_4(( "substTable include a strange gid[%d]=%d >"
                    " out of define range (%d..%d)\n",
                    VAR_7, VAR_8, VAR_4->min_gid, VAR_4->max_gid ));
        FUNC_3( VAR_0 );
      }
    }

    VAR_1;
  }
