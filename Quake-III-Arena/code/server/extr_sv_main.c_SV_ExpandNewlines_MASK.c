
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string ;



char *FUNC_0( char *VAR_0 ) {
 static char VAR_1[1024];
 int VAR_2;

 VAR_2 = 0;
 while ( *VAR_0 && VAR_2 < sizeof(VAR_1) - 3 ) {
  if ( *VAR_0 == '\n' ) {
   VAR_1[VAR_2++] = '\\';
   VAR_1[VAR_2++] = 'n';
  } else {
   VAR_1[VAR_2++] = *VAR_0;
  }
  VAR_0++;
 }
 VAR_1[VAR_2] = 0;

 return VAR_1;
}
