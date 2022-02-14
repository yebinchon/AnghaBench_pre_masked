
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ encoding; scalar_t__ platform_id; scalar_t__ encoding_id; } ;
struct TYPE_5__ {int num_charmaps; TYPE_2__* charmap; TYPE_2__** charmaps; } ;
typedef TYPE_1__* FT_Face ;
typedef int FT_Error ;
typedef TYPE_2__* FT_CharMap ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static FT_Error
  FUNC_2( FT_Face VAR_7 )
  {
    FT_CharMap* VAR_8;
    FT_CharMap* VAR_9;



    FUNC_0( VAR_7 );

    VAR_8 = VAR_7->charmaps;

    if ( !VAR_8 )
      return FUNC_1( VAR_2 );
    VAR_9 = VAR_8 + VAR_7->num_charmaps;

    for ( ; --VAR_9 >= VAR_8; )
    {
      if ( VAR_9[0]->encoding == VAR_0 )
      {


        if ( ( VAR_9[0]->platform_id == VAR_6 &&
               VAR_9[0]->encoding_id == VAR_4 ) ||
             ( VAR_9[0]->platform_id == VAR_5 &&
               VAR_9[0]->encoding_id == VAR_3 ) )
        {
          VAR_7->charmap = VAR_9[0];
          return VAR_1;
        }
      }
    }



    VAR_9 = VAR_8 + VAR_7->num_charmaps;

    for ( ; --VAR_9 >= VAR_8; )
    {
      if ( VAR_9[0]->encoding == VAR_0 )
      {
        VAR_7->charmap = VAR_9[0];
        return VAR_1;
      }
    }

    return FUNC_1( VAR_2 );
  }
