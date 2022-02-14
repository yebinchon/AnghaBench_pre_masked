
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_5__ {TYPE_1__* oppositeInfo; int oppositeCount; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;
struct TYPE_4__ {int valid; int camIdx; int wpaState; scalar_t__ pkInstalled; int aliveCounter; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(zdev_t* VAR_3, int VAR_4)
{
    FUNC_0(VAR_3);


    VAR_2->sta.oppositeInfo[VAR_4].valid = 1;
    VAR_2->sta.oppositeInfo[VAR_4].aliveCounter = VAR_0;
    VAR_2->sta.oppositeCount++;







}
