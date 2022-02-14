
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int keynum; } ;
typedef TYPE_1__ keyname_t ;


 TYPE_1__* VAR_0 ;

char *FUNC_0( int VAR_1 ) {
 keyname_t *VAR_2;
 static char VAR_3[5];
 int VAR_4, VAR_5;

 if ( VAR_1 == -1 ) {
  return "<KEY NOT FOUND>";
 }

 if ( VAR_1 < 0 || VAR_1 > 255 ) {
  return "<OUT OF RANGE>";
 }


 if ( VAR_1 > 32 && VAR_1 < 127 && VAR_1 != '"' && VAR_1 != ';' ) {
  VAR_3[0] = VAR_1;
  VAR_3[1] = 0;
  return VAR_3;
 }


 for ( VAR_2=VAR_0 ; VAR_2->name ; VAR_2++ ) {
  if (VAR_1 == VAR_2->keynum) {
   return VAR_2->name;
  }
 }


 VAR_4 = VAR_1 >> 4;
 VAR_5 = VAR_1 & 15;

 VAR_3[0] = '0';
 VAR_3[1] = 'x';
 VAR_3[2] = VAR_4 > 9 ? VAR_4 - 10 + 'a' : VAR_4 + '0';
 VAR_3[3] = VAR_5 > 9 ? VAR_5 - 10 + 'a' : VAR_5 + '0';
 VAR_3[4] = 0;

 return VAR_3;
}
