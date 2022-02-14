
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int mapCount; TYPE_1__* mapList; } ;
struct TYPE_3__ {scalar_t__ active; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static qboolean FUNC_1(int VAR_4, int VAR_5) {
 int VAR_6;
 for (VAR_6 = VAR_4 + 1; VAR_6 < VAR_3.mapCount; VAR_6++) {
  if (VAR_3.mapList[VAR_6].active) {
   FUNC_0(((void*)0), VAR_0, VAR_5 + 1, "skirmish");
   return VAR_2;
  }
 }
 return VAR_1;
}
