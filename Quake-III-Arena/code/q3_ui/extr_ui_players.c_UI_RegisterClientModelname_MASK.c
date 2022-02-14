
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
typedef int filename ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_5 (char*,char) ;
 void* FUNC_6 (char*) ;

qboolean FUNC_7( playerInfo_t *VAR_3, const char *VAR_4 ) {
 char VAR_5[VAR_0];
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 char *VAR_8;

 VAR_3->torsoModel = 0;
 VAR_3->headModel = 0;

 if ( !VAR_4[0] ) {
  return VAR_1;
 }

 FUNC_2( VAR_5, VAR_4, sizeof( VAR_5 ) );

 VAR_8 = FUNC_5( VAR_5, '/' );
 if ( !VAR_8 ) {

  FUNC_2( VAR_6, "default", sizeof( VAR_6 ) );
 } else {
  FUNC_2( VAR_6, VAR_8 + 1, sizeof( VAR_6 ) );

  *VAR_8 = 0;
 }



 FUNC_1( VAR_7, sizeof( VAR_7 ), "models/players/%s/lower.md3", VAR_5 );
 VAR_3->legsModel = FUNC_6( VAR_7 );
 if ( !VAR_3->legsModel ) {
  FUNC_0( "Failed to load model file %s\n", VAR_7 );
  return VAR_1;
 }

 FUNC_1( VAR_7, sizeof( VAR_7 ), "models/players/%s/upper.md3", VAR_5 );
 VAR_3->torsoModel = FUNC_6( VAR_7 );
 if ( !VAR_3->torsoModel ) {
  FUNC_0( "Failed to load model file %s\n", VAR_7 );
  return VAR_1;
 }

 FUNC_1( VAR_7, sizeof( VAR_7 ), "models/players/%s/head.md3", VAR_5 );
 VAR_3->headModel = FUNC_6( VAR_7 );
 if ( !VAR_3->headModel ) {
  FUNC_0( "Failed to load model file %s\n", VAR_7 );
  return VAR_1;
 }


 if ( !FUNC_4( VAR_3, VAR_5, VAR_6 ) ) {
  if ( !FUNC_4( VAR_3, VAR_5, "default" ) ) {
   FUNC_0( "Failed to load skin file: %s : %s\n", VAR_5, VAR_6 );
   return VAR_1;
  }
 }


 FUNC_1( VAR_7, sizeof( VAR_7 ), "models/players/%s/animation.cfg", VAR_5 );
 if ( !FUNC_3( VAR_7, VAR_3->animations ) ) {
  FUNC_0( "Failed to load animation file %s\n", VAR_7 );
  return VAR_1;
 }

 return VAR_2;
}
