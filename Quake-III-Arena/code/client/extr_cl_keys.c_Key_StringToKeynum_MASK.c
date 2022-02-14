
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keynum; scalar_t__ name; } ;
typedef TYPE_1__ keyname_t ;


 int FUNC_0 (char*,scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*) ;

int FUNC_2( char *VAR_1 ) {
 keyname_t *VAR_2;

 if ( !VAR_1 || !VAR_1[0] ) {
  return -1;
 }
 if ( !VAR_1[1] ) {
  return VAR_1[0];
 }


 if ( VAR_1[0] == '0' && VAR_1[1] == 'x' && FUNC_1( VAR_1 ) == 4) {
  int VAR_3, VAR_4;

  VAR_3 = VAR_1[2];
  if ( VAR_3 >= '0' && VAR_3 <= '9' ) {
   VAR_3 -= '0';
  } else if ( VAR_3 >= 'a' && VAR_3 <= 'f' ) {
   VAR_3 = VAR_3 - 'a' + 10;
  } else {
   VAR_3 = 0;
  }

  VAR_4 = VAR_1[3];
  if ( VAR_4 >= '0' && VAR_4 <= '9' ) {
   VAR_4 -= '0';
  } else if ( VAR_4 >= 'a' && VAR_4 <= 'f' ) {
   VAR_4 = VAR_4 - 'a' + 10;
  } else {
   VAR_4 = 0;
  }

  return VAR_3 * 16 + VAR_4;
 }


 for ( VAR_2=VAR_0 ; VAR_2->name ; VAR_2++ ) {
  if ( !FUNC_0( VAR_1,VAR_2->name ) )
   return VAR_2->keynum;
 }

 return -1;
}
