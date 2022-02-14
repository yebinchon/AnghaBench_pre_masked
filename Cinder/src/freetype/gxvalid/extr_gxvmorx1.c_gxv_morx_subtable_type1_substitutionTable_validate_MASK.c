
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int optdata; } ;
struct TYPE_8__ {int lookupfmt4_trans; int lookupval_func; int lookupval_sign; TYPE_1__ xstatetable; } ;
struct TYPE_7__ {scalar_t__ substitutionTable_num_lookupTables; } ;
typedef TYPE_2__* GXV_morx_subtable_type1_StateOptRecData ;
typedef TYPE_3__* GXV_Validator ;
typedef scalar_t__ FT_UShort ;
typedef scalar_t__ FT_ULong ;
typedef scalar_t__ FT_Bytes ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
  FUNC_3( FT_Bytes VAR_3,
                                                      FT_Bytes VAR_4,
                                                      GXV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_3;
    FT_UShort VAR_7;

    GXV_morx_subtable_type1_StateOptRecData VAR_8 =
      (GXV_morx_subtable_type1_StateOptRecData)VAR_5->xstatetable.optdata;



    VAR_5->lookupval_sign = VAR_0;
    VAR_5->lookupval_func = VAR_2;
    VAR_5->lookupfmt4_trans = VAR_1;

    for ( VAR_7 = 0; VAR_7 < VAR_8->substitutionTable_num_lookupTables; VAR_7++ )
    {
      FT_ULong VAR_9;


      FUNC_1( 4 );
      VAR_9 = FUNC_0( VAR_6 );

      FUNC_2( VAR_3 + VAR_9, VAR_4, VAR_5 );
    }


  }
