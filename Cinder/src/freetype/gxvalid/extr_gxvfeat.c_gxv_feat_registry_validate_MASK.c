
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ existence; size_t nSettings; scalar_t__ exclusive; scalar_t__ apple_reserved; } ;
struct TYPE_6__ {TYPE_1__* root; } ;
struct TYPE_5__ {scalar_t__ level; } ;
typedef TYPE_2__* GXV_Validator ;
typedef size_t FT_UShort ;
typedef scalar_t__ FT_Bool ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_4__* VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static void
  FUNC_3( FT_UShort VAR_5,
                              FT_UShort VAR_6,
                              FT_Bool VAR_7,
                              GXV_Validator VAR_8 )
  {
    FUNC_0( "feature in registry" );

    FUNC_2(( " (feature = %u)\n", VAR_5 ));

    if ( VAR_5 >= VAR_4 )
    {
      FUNC_2(( "feature number %d is out of range %d\n",
                  VAR_5, VAR_4 ));
      FUNC_1( VAR_0 );
      goto Exit;
    }

    if ( VAR_3[VAR_5].existence == 0 )
    {
      FUNC_2(( "feature number %d is in defined range but doesn't exist\n",
                  VAR_5 ));
      FUNC_1( VAR_0 );
      goto Exit;
    }

    if ( VAR_3[VAR_5].apple_reserved )
    {

      FUNC_2(( "feature number %d is reserved by Apple\n", VAR_5 ));
      if ( VAR_8->root->level >= VAR_1 )
        VAR_0;
    }

    if ( VAR_6 != VAR_3[VAR_5].nSettings )
    {
      FUNC_2(( "feature %d: nSettings %d != defined nSettings %d\n",
                  VAR_5, VAR_6,
                  VAR_3[VAR_5].nSettings ));
      if ( VAR_8->root->level >= VAR_1 )
        VAR_0;
    }

    if ( VAR_7 != VAR_3[VAR_5].exclusive )
    {
      FUNC_2(( "exclusive flag %d differs from predefined value\n",
                  VAR_7 ));
      if ( VAR_8->root->level >= VAR_1 )
        VAR_0;
    }

  Exit:
    VAR_2;
  }
