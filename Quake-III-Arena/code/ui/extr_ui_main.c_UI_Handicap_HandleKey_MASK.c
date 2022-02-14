
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static qboolean FUNC_4(int VAR_6, float *VAR_7, int VAR_8) {
  if (VAR_8 == VAR_2 || VAR_8 == VAR_3 || VAR_8 == VAR_0 || VAR_8 == VAR_1) {
    int VAR_9;
    VAR_9 = FUNC_0( 5, 100, FUNC_2("handicap") );
  if (VAR_8 == VAR_3) {
     VAR_9 -= 5;
  } else {
     VAR_9 += 5;
  }
    if (VAR_9 > 100) {
      VAR_9 = 5;
    } else if (VAR_9 < 0) {
   VAR_9 = 100;
  }
   FUNC_1( "handicap", FUNC_3( "%i", VAR_9) );
    return VAR_5;
  }
  return VAR_4;
}
