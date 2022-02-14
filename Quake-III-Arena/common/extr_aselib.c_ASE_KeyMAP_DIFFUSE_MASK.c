
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t numMaterials; TYPE_1__* materials; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (char*,char*,char*) ;
 scalar_t__* FUNC_3 (char*,char) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9( const char *VAR_4 )
{
 char VAR_5[1024], VAR_6[1024], VAR_7[1024];
  char *VAR_8, *VAR_9;
 int VAR_10 = 0, VAR_11;

 if ( !FUNC_4( VAR_4, "*BITMAP" ) )
 {
  FUNC_0( VAR_2 );

  FUNC_5( VAR_5, VAR_3 + 1 );
  if ( FUNC_3( VAR_5, '"' ) )
   *FUNC_3( VAR_5, '"' ) = 0;

  while ( VAR_5[VAR_10] )
  {
   if ( VAR_5[VAR_10] == '\\' )
    VAR_5[VAR_10] = '/';
   VAR_10++;
  }

    VAR_8 = VAR_5;
    VAR_9 = VAR_1;


    if ( (VAR_1[1] == ':' && (VAR_5[0] == '/' && VAR_5[1] == '/')) ||
      (VAR_5[1] == ':' && (VAR_1[0] == '/' && VAR_1[1] == '/')) ) {
      if (VAR_5[1] == ':') {
        VAR_8 = VAR_5 + 2;
        VAR_9 = VAR_1 + 2;
      } else {
        VAR_8 = VAR_1 + 2;
        VAR_9 = VAR_5 +2;
      }
      VAR_11 = 0;
      while (*VAR_9 && VAR_11 < 2) {
        if (*VAR_9 == '/') {
          VAR_11++;
        }
        VAR_9++;
      }
    }
    FUNC_5(VAR_6, VAR_8);
    FUNC_7(VAR_6);
    FUNC_5(VAR_7, VAR_9);
    FUNC_7(VAR_7);
    if ( FUNC_8( VAR_7, VAR_6 + 2 ) )
  {
   FUNC_5( VAR_0.materials[VAR_0.numMaterials].name, FUNC_8( VAR_7, VAR_6 + 2 ) + FUNC_6( VAR_6 ) - 2 );
  }
  else
  {
   FUNC_2( VAR_0.materials[VAR_0.numMaterials].name, "(not converted: '%s')", VAR_5 );
   FUNC_1( "WARNING: illegal material name '%s'\n", VAR_5 );
  }
 }
 else
 {
 }
}
