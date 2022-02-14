
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int botIndex; int characterCount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static qboolean FUNC_2(int VAR_8, float *VAR_9, int VAR_10) {
  if (VAR_10 == VAR_3 || VAR_10 == VAR_4 || VAR_10 == VAR_1 || VAR_10 == VAR_2) {
  int VAR_11 = FUNC_1("g_gametype");
  int VAR_12 = VAR_7.botIndex;

  if (VAR_10 == VAR_4) {
   VAR_12--;
  } else {
   VAR_12++;
  }

  if (VAR_11 >= VAR_0) {
   if (VAR_12 >= VAR_7.characterCount + 2) {
    VAR_12 = 0;
   } else if (VAR_12 < 0) {
    VAR_12 = VAR_7.characterCount + 2 - 1;
   }
  } else {
   if (VAR_12 >= FUNC_0() + 2) {
    VAR_12 = 0;
   } else if (VAR_12 < 0) {
    VAR_12 = FUNC_0() + 2 - 1;
   }
  }
  VAR_7.botIndex = VAR_12;
    return VAR_6;
  }
  return VAR_5;
}
