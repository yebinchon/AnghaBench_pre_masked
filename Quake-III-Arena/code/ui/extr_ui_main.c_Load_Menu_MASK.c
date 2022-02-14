
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {char* string; } ;
typedef TYPE_1__ pc_token_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,TYPE_1__*) ;

qboolean FUNC_2(int VAR_2) {
 pc_token_t VAR_3;

 if (!FUNC_1(VAR_2, &VAR_3))
  return VAR_0;
 if (VAR_3.string[0] != '{') {
  return VAR_0;
 }

 while ( 1 ) {

  if (!FUNC_1(VAR_2, &VAR_3))
   return VAR_0;

  if ( VAR_3.string[0] == 0 ) {
   return VAR_0;
  }

  if ( VAR_3.string[0] == '}' ) {
   return VAR_1;
  }

  FUNC_0(VAR_3.string);
 }
 return VAR_0;
}
