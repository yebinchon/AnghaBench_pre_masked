
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_7__ {int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
typedef scalar_t__ qboolean ;
struct TYPE_9__ {int characterCount; TYPE_1__* characterList; } ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_6__ {char* name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,float,int ,char const*,int ,int ,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5(rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5, qboolean VAR_6, int VAR_7, int VAR_8) {



 int VAR_9 = FUNC_3(FUNC_4(VAR_6 ? "ui_blueteam%i" : "ui_redteam%i", VAR_7));
 const char *VAR_10;
 if (VAR_9 <= 0) {
  VAR_10 = "Closed";
 } else if (VAR_9 == 1) {
  VAR_10 = "Human";
 } else {
  VAR_9 -= 2;

  if (VAR_2.integer >= VAR_0) {
   if (VAR_9 >= VAR_1.characterCount) {
    VAR_9 = 0;
   }
   VAR_10 = VAR_1.characterList[VAR_9].name;
  } else {
   if (VAR_9 >= FUNC_2()) {
    VAR_9 = 0;
   }
   VAR_10 = FUNC_1(VAR_9);
  }
 }
  FUNC_0(VAR_3->x, VAR_3->y, VAR_4, VAR_5, VAR_10, 0, 0, VAR_8);
}
