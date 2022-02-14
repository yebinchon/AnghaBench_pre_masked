
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_6__ {int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_7__ {int botIndex; int characterCount; TYPE_1__* characterList; } ;
struct TYPE_5__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,float,int ,char const*,int ,int ,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_4(rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, int VAR_5) {
 int VAR_6 = VAR_1.botIndex;
 int VAR_7 = FUNC_3("g_gametype");
 const char *VAR_8 = "";
 if (VAR_7 >= VAR_0) {
  if (VAR_6 >= VAR_1.characterCount) {
   VAR_6 = 0;
  }
  VAR_8 = VAR_1.characterList[VAR_6].name;
 } else {
  if (VAR_6 >= FUNC_2()) {
   VAR_6 = 0;
  }
  VAR_8 = FUNC_1(VAR_6);
 }
  FUNC_0(VAR_2->x, VAR_2->y, VAR_3, VAR_4, VAR_8, 0, 0, VAR_5);
}
