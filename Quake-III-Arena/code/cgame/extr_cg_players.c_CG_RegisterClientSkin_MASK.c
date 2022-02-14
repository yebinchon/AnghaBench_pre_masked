
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
typedef int filename ;
struct TYPE_5__ {void* headSkin; void* torsoSkin; void* legsSkin; } ;
typedef TYPE_1__ clientInfo_t ;


 scalar_t__ FUNC_0 (char*,int,TYPE_1__*,char const*,char const*,char const*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,int,TYPE_1__*,char const*,char const*,char const*,char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (char*) ;

__attribute__((used)) static qboolean FUNC_4( clientInfo_t *VAR_3, const char *VAR_4, const char *VAR_5, const char *VAR_6, const char *VAR_7, const char *VAR_8 ) {
 char VAR_9[VAR_0];
 if ( FUNC_1( VAR_9, sizeof(VAR_9), VAR_3, VAR_4, VAR_5, VAR_6, "lower", "skin" ) ) {
  VAR_3->legsSkin = FUNC_3( VAR_9 );
 }
 if (!VAR_3->legsSkin) {
  FUNC_2( "Leg skin load failure: %s\n", VAR_9 );
 }

 if ( FUNC_1( VAR_9, sizeof(VAR_9), VAR_3, VAR_4, VAR_5, VAR_6, "upper", "skin" ) ) {
  VAR_3->torsoSkin = FUNC_3( VAR_9 );
 }
 if (!VAR_3->torsoSkin) {
  FUNC_2( "Torso skin load failure: %s\n", VAR_9 );
 }

 if ( FUNC_0( VAR_9, sizeof(VAR_9), VAR_3, VAR_4, VAR_7, VAR_8, "head", "skin" ) ) {
  VAR_3->headSkin = FUNC_3( VAR_9 );
 }
 if (!VAR_3->headSkin) {
  FUNC_2( "Head skin load failure: %s\n", VAR_9 );
 }


 if ( !VAR_3->legsSkin || !VAR_3->torsoSkin || !VAR_3->headSkin ) {
  return VAR_1;
 }
 return VAR_2;
}
