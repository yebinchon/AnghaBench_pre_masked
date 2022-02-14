
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_faces; } ;
typedef int FT_Library ;
typedef TYPE_1__* FT_Face ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,char*,long,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
  FUNC_7( char* VAR_1 )
  {
    FT_Library VAR_2;
    FT_Face VAR_3;


    if ( FUNC_2( &VAR_2 ) )
    {
      FUNC_6( VAR_0, "Can't initialize FreeType.\n" );
      FUNC_5( 1 );
    }

    if ( FUNC_3( VAR_2, VAR_1, 0, &VAR_3 ) )
    {

      FUNC_5( 0 );
    }

    if ( VAR_3->num_faces == 1 )
      FUNC_4( VAR_3 );
    else
    {
      long VAR_4, VAR_5;


      VAR_5 = VAR_3->num_faces;
      FUNC_0( VAR_3 );

      for ( VAR_4 = 0; VAR_4 < VAR_5; VAR_4++ )
      {
        if ( !FUNC_3( VAR_2, VAR_1, VAR_4, &VAR_3 ) )
          FUNC_4( VAR_3 );
      }
    }

    FUNC_1( VAR_2 );

    FUNC_5( 0 );
  }
