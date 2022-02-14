
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_10__ {int numGameTypes; TYPE_2__* gameTypes; TYPE_1__* mapList; } ;
struct TYPE_9__ {size_t integer; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {scalar_t__ gtEnum; } ;
struct TYPE_6__ {int mapLoadName; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*,char*) ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 TYPE_3__ VAR_10 ;
 char* FUNC_5 (char*,size_t) ;

__attribute__((used)) static qboolean FUNC_6(int VAR_11, float *VAR_12, int VAR_13, qboolean VAR_14) {
  if (VAR_13 == VAR_4 || VAR_13 == VAR_5 || VAR_13 == VAR_2 || VAR_13 == VAR_3) {
  int VAR_15 = FUNC_2(VAR_7);


  if (VAR_13 == VAR_5) {
   VAR_10.integer--;
   if (VAR_10.integer == 2) {
    VAR_10.integer = 1;
   } else if (VAR_10.integer < 2) {
    VAR_10.integer = VAR_8.numGameTypes - 1;
   }
  } else {
   VAR_10.integer++;
   if (VAR_10.integer >= VAR_8.numGameTypes) {
    VAR_10.integer = 1;
   } else if (VAR_10.integer == 2) {
    VAR_10.integer = 3;
   }
  }

  if (VAR_8.gameTypes[VAR_10.integer].gtEnum == VAR_1) {
   FUNC_4("ui_Q3Model", "1");
  } else {
   FUNC_4("ui_Q3Model", "0");
  }

  FUNC_4("ui_gameType", FUNC_5("%d", VAR_10.integer));
  FUNC_3(VAR_7);
  FUNC_1(VAR_8.mapList[VAR_9.integer].mapLoadName, VAR_8.gameTypes[VAR_10.integer].gtEnum);
  if (VAR_14 && VAR_15 != FUNC_2(VAR_7)) {
    FUNC_4( "ui_currentMap", "0");
   FUNC_0(((void*)0), VAR_0, 0, ((void*)0));
  }
    return VAR_7;
  }
  return VAR_6;
}
