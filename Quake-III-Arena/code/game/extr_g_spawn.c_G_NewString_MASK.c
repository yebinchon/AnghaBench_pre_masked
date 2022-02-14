
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

char *FUNC_2( const char *VAR_0 ) {
 char *VAR_1, *VAR_2;
 int VAR_3,VAR_4;

 VAR_4 = FUNC_1(VAR_0) + 1;

 VAR_1 = FUNC_0( VAR_4 );

 VAR_2 = VAR_1;


 for ( VAR_3=0 ; VAR_3< VAR_4 ; VAR_3++ ) {
  if (VAR_0[VAR_3] == '\\' && VAR_3 < VAR_4-1) {
   VAR_3++;
   if (VAR_0[VAR_3] == 'n') {
    *VAR_2++ = '\n';
   } else {
    *VAR_2++ = '\\';
   }
  } else {
   *VAR_2++ = VAR_0[VAR_3];
  }
 }

 return VAR_1;
}
