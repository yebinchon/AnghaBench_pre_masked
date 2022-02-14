
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int surfName ;
struct TYPE_8__ {char* name; int numSurfaces; void* shader; struct TYPE_8__** surfaces; } ;
typedef TYPE_1__ skin_t ;
typedef TYPE_1__ skinSurface_t ;
typedef size_t qhandle_t ;
struct TYPE_10__ {int (* FS_FreeFile ) (char*) ;TYPE_1__* (* Hunk_Alloc ) (int,int ) ;int (* FS_ReadFile ) (char const*,void**) ;int (* Printf ) (int ,char*,char const*) ;} ;
struct TYPE_9__ {size_t numSkins; TYPE_1__** skins; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int) ;
 void* FUNC_5 (char const*,int ,int ) ;
 int FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__ VAR_6 ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*,char const*) ;
 TYPE_1__* FUNC_11 (int,int ) ;
 TYPE_1__* FUNC_12 (int,int ) ;
 int FUNC_13 (char const*,void**) ;
 TYPE_1__* FUNC_14 (int,int ) ;
 int FUNC_15 (char*) ;
 TYPE_3__ VAR_7 ;

qhandle_t FUNC_16( const char *VAR_8 ) {
 qhandle_t VAR_9;
 skin_t *VAR_10;
 skinSurface_t *VAR_11;
 char *VAR_12, *VAR_13;
 char *VAR_14;
 char VAR_15[VAR_1];

 if ( !VAR_8 || !VAR_8[0] ) {
  FUNC_0( "Empty name passed to RE_RegisterSkin\n" );
  return 0;
 }

 if ( FUNC_8( VAR_8 ) >= VAR_1 ) {
  FUNC_0( "Skin name exceeds MAX_QPATH\n" );
  return 0;
 }



 for ( VAR_9 = 1; VAR_9 < VAR_7.numSkins ; VAR_9++ ) {
  VAR_10 = VAR_7.skins[VAR_9];
  if ( !FUNC_2( VAR_10->name, VAR_8 ) ) {
   if( VAR_10->numSurfaces == 0 ) {
    return 0;
   }
   return VAR_9;
  }
 }


 if ( VAR_7.numSkins == VAR_2 ) {
  VAR_6.Printf( VAR_3, "WARNING: RE_RegisterSkin( '%s' ) MAX_SKINS hit\n", VAR_8 );
  return 0;
 }
 VAR_7.numSkins++;
 VAR_10 = VAR_6.Hunk_Alloc( sizeof( skin_t ), VAR_4 );
 VAR_7.skins[VAR_9] = VAR_10;
 FUNC_4( VAR_10->name, VAR_8, sizeof( VAR_10->name ) );
 VAR_10->numSurfaces = 0;


 FUNC_6();


 if ( FUNC_7( VAR_8 + FUNC_8( VAR_8 ) - 5, ".skin" ) ) {
  VAR_10->numSurfaces = 1;
  VAR_10->surfaces[0] = VAR_6.Hunk_Alloc( sizeof(VAR_10->surfaces[0]), VAR_4 );
  VAR_10->surfaces[0]->shader = FUNC_5( VAR_8, VAR_0, VAR_5 );
  return VAR_9;
 }


    VAR_6.FS_ReadFile( VAR_8, (void **)&VAR_12 );
 if ( !VAR_12 ) {
  return 0;
 }

 VAR_13 = VAR_12;
 while ( VAR_13 && *VAR_13 ) {

  VAR_14 = FUNC_1( &VAR_13 );
  FUNC_4( VAR_15, VAR_14, sizeof( VAR_15 ) );

  if ( !VAR_14[0] ) {
   break;
  }

  FUNC_3( VAR_15 );

  if ( *VAR_13 == ',' ) {
   VAR_13++;
  }

  if ( FUNC_9( VAR_14, "tag_" ) ) {
   continue;
  }


  VAR_14 = FUNC_1( &VAR_13 );

  VAR_11 = VAR_10->surfaces[ VAR_10->numSurfaces ] = VAR_6.Hunk_Alloc( sizeof( *VAR_10->surfaces[0] ), VAR_4 );
  FUNC_4( VAR_11->name, VAR_15, sizeof( VAR_11->name ) );
  VAR_11->shader = FUNC_5( VAR_14, VAR_0, VAR_5 );
  VAR_10->numSurfaces++;
 }

 VAR_6.FS_FreeFile( VAR_12 );



 if ( VAR_10->numSurfaces == 0 ) {
  return 0;
 }

 return VAR_9;
}
