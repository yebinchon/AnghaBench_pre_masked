
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
struct TYPE_10__ {int mapCount; TYPE_2__* mapList; TYPE_1__* gameTypes; } ;
struct TYPE_9__ {size_t integer; } ;
struct TYPE_8__ {size_t integer; } ;
struct TYPE_7__ {int typeBits; int active; } ;
struct TYPE_6__ {int gtEnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static int FUNC_0(qboolean VAR_8) {
 int VAR_9, VAR_10, VAR_11;
 VAR_10 = 0;
 VAR_11 = VAR_8 ? VAR_5.gameTypes[VAR_6.integer].gtEnum : VAR_5.gameTypes[VAR_7.integer].gtEnum;
 if (VAR_11 == VAR_1) {
  VAR_11++;
 }
 if (VAR_11 == VAR_2) {
  VAR_11 = VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_5.mapCount; VAR_9++) {
  VAR_5.mapList[VAR_9].active = VAR_3;
  if ( VAR_5.mapList[VAR_9].typeBits & (1 << VAR_11)) {
   if (VAR_8) {
    if (!(VAR_5.mapList[VAR_9].typeBits & (1 << VAR_1))) {
     continue;
    }
   }
   VAR_10++;
   VAR_5.mapList[VAR_9].active = VAR_4;
  }
 }
 return VAR_10;
}
