
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mapCount; TYPE_1__* mapList; } ;
struct TYPE_3__ {char const* mapName; scalar_t__ active; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static const char *FUNC_0(int VAR_1, int *VAR_2) {
 int VAR_3, VAR_4;
 VAR_4 = 0;
 *VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0.mapCount; VAR_3++) {
  if (VAR_0.mapList[VAR_3].active) {
   if (VAR_4 == VAR_1) {
    *VAR_2 = VAR_3;
    return VAR_0.mapList[VAR_3].mapName;
   } else {
    VAR_4++;
   }
  }
 }
 return "";
}
