
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int entry_validate_func; int entry_glyphoffset_fmt; int * subtable_setup_func; int * optdata_load_func; int * optdata; } ;
struct TYPE_6__ {TYPE_1__ statetable; } ;
typedef TYPE_2__* GXV_Validator ;
typedef int FT_UShort ;
typedef scalar_t__ FT_ULong ;
typedef int FT_Bytes ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int,TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static void
  FUNC_6 ( FT_Bytes VAR_3,
                                     FT_Bytes VAR_4,
                                     GXV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_3;
    FT_UShort VAR_7;
    FT_UShort VAR_8;
    FT_ULong VAR_9;


    FUNC_3( "just justClassTable" );

    FUNC_2( 2 + 2 + 4 );
    VAR_7 = FUNC_1( VAR_6 );
    VAR_8 = FUNC_1( VAR_6 );
    VAR_9 = FUNC_0( VAR_6 );

    FUNC_4(( "  justClassTable: coverage = 0x%04x (%s) ", VAR_8 ));
    if ( ( VAR_8 & 0x4000 ) == 0 )
      FUNC_4(( "ascending\n" ));
    else
      FUNC_4(( "descending\n" ));

    if ( VAR_9 )
      FUNC_4(( "  justClassTable: nonzero value (0x%08x)"
                  " in unused subFeatureFlags\n", VAR_9 ));

    VAR_5->statetable.optdata = ((void*)0);
    VAR_5->statetable.optdata_load_func = ((void*)0);
    VAR_5->statetable.subtable_setup_func = ((void*)0);
    VAR_5->statetable.entry_glyphoffset_fmt = VAR_1;
    VAR_5->statetable.entry_validate_func =
      VAR_2;

    FUNC_5( VAR_6, VAR_3 + VAR_7, VAR_5 );



    VAR_0;
  }
