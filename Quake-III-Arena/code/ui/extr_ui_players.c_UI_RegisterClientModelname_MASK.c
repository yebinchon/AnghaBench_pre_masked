
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int skinName ;
typedef int qboolean ;
struct TYPE_4__ {int animations; void* headModel; void* torsoModel; void* legsModel; } ;
typedef TYPE_1__ playerInfo_t ;
typedef int modelName ;
typedef int headModelName ;
typedef int filename ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,char*,char*,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_5 (char*,char) ;
 void* FUNC_6 (char*) ;

qboolean FUNC_7( playerInfo_t *VAR_3, const char *VAR_4, const char *VAR_5, const char *VAR_6 ) {
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];
 char VAR_10[VAR_0];
 char VAR_11[VAR_0];
 char *VAR_12;

 VAR_3->torsoModel = 0;
 VAR_3->headModel = 0;

 if ( !VAR_4[0] ) {
  return VAR_1;
 }

 FUNC_2( VAR_7, VAR_4, sizeof( VAR_7 ) );

 VAR_12 = FUNC_5( VAR_7, '/' );
 if ( !VAR_12 ) {

  FUNC_2( VAR_8, "default", sizeof( VAR_8 ) );
 } else {
  FUNC_2( VAR_8, VAR_12 + 1, sizeof( VAR_8 ) );
  *VAR_12 = '\0';
 }

 FUNC_2( VAR_9, VAR_5, sizeof( VAR_9 ) );
 VAR_12 = FUNC_5( VAR_9, '/' );
 if ( !VAR_12 ) {

  FUNC_2( VAR_10, "default", sizeof( VAR_8 ) );
 } else {
  FUNC_2( VAR_10, VAR_12 + 1, sizeof( VAR_8 ) );
  *VAR_12 = '\0';
 }



 FUNC_1( VAR_11, sizeof( VAR_11 ), "models/players/%s/lower.md3", VAR_7 );
 VAR_3->legsModel = FUNC_6( VAR_11 );
 if ( !VAR_3->legsModel ) {
  FUNC_1( VAR_11, sizeof( VAR_11 ), "models/players/characters/%s/lower.md3", VAR_7 );
  VAR_3->legsModel = FUNC_6( VAR_11 );
  if ( !VAR_3->legsModel ) {
   FUNC_0( "Failed to load model file %s\n", VAR_11 );
   return VAR_1;
  }
 }

 FUNC_1( VAR_11, sizeof( VAR_11 ), "models/players/%s/upper.md3", VAR_7 );
 VAR_3->torsoModel = FUNC_6( VAR_11 );
 if ( !VAR_3->torsoModel ) {
  FUNC_1( VAR_11, sizeof( VAR_11 ), "models/players/characters/%s/upper.md3", VAR_7 );
  VAR_3->torsoModel = FUNC_6( VAR_11 );
  if ( !VAR_3->torsoModel ) {
   FUNC_0( "Failed to load model file %s\n", VAR_11 );
   return VAR_1;
  }
 }

 if (VAR_9 && VAR_9[0] == '*' ) {
  FUNC_1( VAR_11, sizeof( VAR_11 ), "models/players/heads/%s/%s.md3", &VAR_9[1], &VAR_9[1] );
 }
 else {
  FUNC_1( VAR_11, sizeof( VAR_11 ), "models/players/%s/head.md3", VAR_9 );
 }
 VAR_3->headModel = FUNC_6( VAR_11 );
 if ( !VAR_3->headModel && VAR_9[0] != '*') {
  FUNC_1( VAR_11, sizeof( VAR_11 ), "models/players/heads/%s/%s.md3", VAR_9, VAR_9 );
  VAR_3->headModel = FUNC_6( VAR_11 );
 }

 if (!VAR_3->headModel) {
  FUNC_0( "Failed to load model file %s\n", VAR_11 );
  return VAR_1;
 }


 if ( !FUNC_4( VAR_3, VAR_7, VAR_8, VAR_9, VAR_10, VAR_6) ) {
  if ( !FUNC_4( VAR_3, VAR_7, "default", VAR_9, "default", VAR_6 ) ) {
   FUNC_0( "Failed to load skin file: %s : %s\n", VAR_7, VAR_8 );
   return VAR_1;
  }
 }


 FUNC_1( VAR_11, sizeof( VAR_11 ), "models/players/%s/animation.cfg", VAR_7 );
 if ( !FUNC_3( VAR_11, VAR_3->animations ) ) {
  FUNC_1( VAR_11, sizeof( VAR_11 ), "models/players/characters/%s/animation.cfg", VAR_7 );
  if ( !FUNC_3( VAR_11, VAR_3->animations ) ) {
   FUNC_0( "Failed to load animation file %s\n", VAR_11 );
   return VAR_1;
  }
 }

 return VAR_2;
}
