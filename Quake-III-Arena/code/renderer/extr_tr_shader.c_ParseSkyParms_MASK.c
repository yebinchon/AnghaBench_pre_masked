
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pathname ;
struct TYPE_8__ {int (* Printf ) (int ,char*,int ) ;} ;
struct TYPE_5__ {int cloudHeight; void** innerbox; void** outerbox; } ;
struct TYPE_7__ {int isSky; TYPE_1__ sky; int name; } ;
struct TYPE_6__ {void* defaultImage; } ;


 char* FUNC_0 (char**,int ) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static void FUNC_9( char **VAR_9 ) {
 char *VAR_10;
 static char *VAR_11[6] = {"rt", "bk", "lf", "ft", "up", "dn"};
 char VAR_12[VAR_2];
 int VAR_13;


 VAR_10 = FUNC_0( VAR_9, VAR_4 );
 if ( VAR_10[0] == 0 ) {
  VAR_6.Printf( VAR_3, "WARNING: 'skyParms' missing parameter in shader '%s'\n", VAR_7.name );
  return;
 }
 if ( FUNC_5( VAR_10, "-" ) ) {
  for (VAR_13=0 ; VAR_13<6 ; VAR_13++) {
   FUNC_1( VAR_12, sizeof(VAR_12), "%s_%s.tga"
    , VAR_10, VAR_11[VAR_13] );
   VAR_7.sky.outerbox[VAR_13] = FUNC_2( ( char * ) VAR_12, VAR_5, VAR_5, VAR_0 );
   if ( !VAR_7.sky.outerbox[VAR_13] ) {
    VAR_7.sky.outerbox[VAR_13] = VAR_8.defaultImage;
   }
  }
 }


 VAR_10 = FUNC_0( VAR_9, VAR_4 );
 if ( VAR_10[0] == 0 ) {
  VAR_6.Printf( VAR_3, "WARNING: 'skyParms' missing parameter in shader '%s'\n", VAR_7.name );
  return;
 }
 VAR_7.sky.cloudHeight = FUNC_4( VAR_10 );
 if ( !VAR_7.sky.cloudHeight ) {
  VAR_7.sky.cloudHeight = 512;
 }
 FUNC_3( VAR_7.sky.cloudHeight );



 VAR_10 = FUNC_0( VAR_9, VAR_4 );
 if ( VAR_10[0] == 0 ) {
  VAR_6.Printf( VAR_3, "WARNING: 'skyParms' missing parameter in shader '%s'\n", VAR_7.name );
  return;
 }
 if ( FUNC_5( VAR_10, "-" ) ) {
  for (VAR_13=0 ; VAR_13<6 ; VAR_13++) {
   FUNC_1( VAR_12, sizeof(VAR_12), "%s_%s.tga"
    , VAR_10, VAR_11[VAR_13] );
   VAR_7.sky.innerbox[VAR_13] = FUNC_2( ( char * ) VAR_12, VAR_5, VAR_5, VAR_1 );
   if ( !VAR_7.sky.innerbox[VAR_13] ) {
    VAR_7.sky.innerbox[VAR_13] = VAR_8.defaultImage;
   }
  }
 }

 VAR_7.isSky = VAR_5;
}
