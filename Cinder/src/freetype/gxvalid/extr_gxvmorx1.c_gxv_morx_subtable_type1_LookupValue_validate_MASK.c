
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int u; } ;
struct TYPE_7__ {TYPE_1__* face; } ;
struct TYPE_6__ {int num_glyphs; } ;
typedef TYPE_2__* GXV_Validator ;
typedef TYPE_3__* GXV_LookupValueCPtr ;
typedef int FT_UShort ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
  FUNC_2( FT_UShort VAR_1,
                                                GXV_LookupValueCPtr VAR_2,
                                                GXV_Validator VAR_3 )
  {
    FUNC_0( VAR_1 );

    FUNC_1(( "morx subtable type1 subst.: %d -> %d\n", VAR_1, VAR_2->u ));

    if ( VAR_2->u > VAR_3->face->num_glyphs )
      VAR_0;
  }
