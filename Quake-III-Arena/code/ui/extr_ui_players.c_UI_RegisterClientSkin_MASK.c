
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {void* headSkin; void* torsoSkin; void* legsSkin; } ;
typedef TYPE_1__ playerInfo_t ;
typedef int filename ;


 int FUNC_0 (char*,int,char*,char const*,char const*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,int,char const*,char const*,char const*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (char*) ;

__attribute__((used)) static qboolean FUNC_3( playerInfo_t *VAR_3, const char *VAR_4, const char *VAR_5, const char *VAR_6, const char *VAR_7 , const char *VAR_8) {
 char VAR_9[VAR_0*2];

 if (VAR_8 && *VAR_8) {
  FUNC_0( VAR_9, sizeof( VAR_9 ), "models/players/%s/%s/lower_%s.skin", VAR_4, VAR_8, VAR_5 );
 } else {
  FUNC_0( VAR_9, sizeof( VAR_9 ), "models/players/%s/lower_%s.skin", VAR_4, VAR_5 );
 }
 VAR_3->legsSkin = FUNC_2( VAR_9 );
 if (!VAR_3->legsSkin) {
  if (VAR_8 && *VAR_8) {
   FUNC_0( VAR_9, sizeof( VAR_9 ), "models/players/characters/%s/%s/lower_%s.skin", VAR_4, VAR_8, VAR_5 );
  } else {
   FUNC_0( VAR_9, sizeof( VAR_9 ), "models/players/characters/%s/lower_%s.skin", VAR_4, VAR_5 );
  }
  VAR_3->legsSkin = FUNC_2( VAR_9 );
 }

 if (VAR_8 && *VAR_8) {
  FUNC_0( VAR_9, sizeof( VAR_9 ), "models/players/%s/%s/upper_%s.skin", VAR_4, VAR_8, VAR_5 );
 } else {
  FUNC_0( VAR_9, sizeof( VAR_9 ), "models/players/%s/upper_%s.skin", VAR_4, VAR_5 );
 }
 VAR_3->torsoSkin = FUNC_2( VAR_9 );
 if (!VAR_3->torsoSkin) {
  if (VAR_8 && *VAR_8) {
   FUNC_0( VAR_9, sizeof( VAR_9 ), "models/players/characters/%s/%s/upper_%s.skin", VAR_4, VAR_8, VAR_5 );
  } else {
   FUNC_0( VAR_9, sizeof( VAR_9 ), "models/players/characters/%s/upper_%s.skin", VAR_4, VAR_5 );
  }
  VAR_3->torsoSkin = FUNC_2( VAR_9 );
 }

 if ( FUNC_1( VAR_9, sizeof(VAR_9), VAR_8, VAR_6, VAR_7, "head", "skin" ) ) {
  VAR_3->headSkin = FUNC_2( VAR_9 );
 }

 if ( !VAR_3->legsSkin || !VAR_3->torsoSkin || !VAR_3->headSkin ) {
  return VAR_1;
 }

 return VAR_2;
}
