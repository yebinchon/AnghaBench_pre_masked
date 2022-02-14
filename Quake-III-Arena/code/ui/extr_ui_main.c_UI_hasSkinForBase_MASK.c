
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test ;
typedef int qboolean ;


 int FUNC_0 (char*,int,char*,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;

qboolean FUNC_2(const char *VAR_3, const char *VAR_4) {
 char VAR_5[1024];

 FUNC_0( VAR_5, sizeof( VAR_5 ), "models/players/%s/%s/lower_default.skin", VAR_3, VAR_4 );

 if (FUNC_1(VAR_5, 0, VAR_0)) {
  return VAR_2;
 }
 FUNC_0( VAR_5, sizeof( VAR_5 ), "models/players/characters/%s/%s/lower_default.skin", VAR_3, VAR_4 );

 if (FUNC_1(VAR_5, 0, VAR_0)) {
  return VAR_2;
 }
 return VAR_1;
}
