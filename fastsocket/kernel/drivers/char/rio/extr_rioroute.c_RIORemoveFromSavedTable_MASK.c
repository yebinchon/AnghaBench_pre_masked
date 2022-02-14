
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_info {TYPE_1__* RIOSavedTable; } ;
struct Map {scalar_t__ RtaUniqueNum; } ;
struct TYPE_2__ {scalar_t__ RtaUniqueNum; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct rio_info *VAR_1, struct Map *VAR_2)
{
 int VAR_3;






 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->RIOSavedTable[VAR_3].RtaUniqueNum == VAR_2->RtaUniqueNum) {
   FUNC_0(&VAR_1->RIOSavedTable[VAR_3], 0, sizeof(struct Map));
  }
 }
 return 0;
}
