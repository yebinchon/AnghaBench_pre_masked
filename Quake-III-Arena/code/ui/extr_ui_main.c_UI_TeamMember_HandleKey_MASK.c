
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {int characterCount; } ;
struct TYPE_3__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 char* FUNC_3 (char*,int) ;

__attribute__((used)) static qboolean FUNC_4(int VAR_9, float *VAR_10, int VAR_11, qboolean VAR_12, int VAR_13) {
  if (VAR_11 == VAR_3 || VAR_11 == VAR_4 || VAR_11 == VAR_1 || VAR_11 == VAR_2) {



  char *VAR_14 = FUNC_3(VAR_12 ? "ui_blueteam%i" : "ui_redteam%i", VAR_13);
  int VAR_15 = FUNC_2(VAR_14);

  if (VAR_11 == VAR_4) {
   VAR_15--;
  } else {
   VAR_15++;
  }

  if (VAR_8.integer >= VAR_0) {
   if (VAR_15 >= VAR_7.characterCount + 2) {
    VAR_15 = 0;
   } else if (VAR_15 < 0) {
    VAR_15 = VAR_7.characterCount + 2 - 1;
   }
  } else {
   if (VAR_15 >= FUNC_0() + 2) {
    VAR_15 = 0;
   } else if (VAR_15 < 0) {
    VAR_15 = FUNC_0() + 2 - 1;
   }
  }

  FUNC_1(VAR_14, FUNC_3("%i", VAR_15));
    return VAR_6;
  }
  return VAR_5;
}
