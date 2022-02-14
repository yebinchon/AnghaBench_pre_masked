
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static qboolean FUNC_3(int VAR_7, float *VAR_8, int VAR_9) {
  if (VAR_9 == VAR_2 || VAR_9 == VAR_3 || VAR_9 == VAR_0 || VAR_9 == VAR_1) {
   int VAR_10 = FUNC_1( "g_spSkill" );

  if (VAR_9 == VAR_3) {
     VAR_10--;
  } else {
     VAR_10++;
  }

    if (VAR_10 < 1) {
   VAR_10 = VAR_4;
  } else if (VAR_10 > VAR_4) {
      VAR_10 = 1;
    }

    FUNC_0("g_spSkill", FUNC_2("%i", VAR_10));
    return VAR_6;
  }
  return VAR_5;
}
