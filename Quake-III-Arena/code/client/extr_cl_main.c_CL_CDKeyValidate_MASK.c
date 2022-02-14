
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char const*) ;

qboolean FUNC_3( const char *VAR_4, const char *VAR_5 ) {
 char VAR_6;
 byte VAR_7;
 char VAR_8[3];
 int VAR_9, VAR_10;

 VAR_10 = FUNC_2(VAR_4);
 if( VAR_10 != VAR_1 ) {
  return VAR_2;
 }

 if( VAR_5 && FUNC_2( VAR_5 ) != VAR_0 ) {
  return VAR_2;
 }

 VAR_7 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_6 = *VAR_4++;
  if (VAR_6>='a' && VAR_6<='z') {
   VAR_6 -= 32;
  }
  switch( VAR_6 ) {
  case '2':
  case '3':
  case '7':
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'G':
  case 'H':
  case 'J':
  case 'L':
  case 'P':
  case 'R':
  case 'S':
  case 'T':
  case 'W':
   VAR_7 += VAR_6;
   continue;
  default:
   return VAR_2;
  }
 }

 FUNC_1(VAR_8, "%02x", VAR_7);

 if (VAR_5 && !FUNC_0(VAR_8, VAR_5)) {
  return VAR_3;
 }

 if (!VAR_5) {
  return VAR_3;
 }

 return VAR_2;
}
