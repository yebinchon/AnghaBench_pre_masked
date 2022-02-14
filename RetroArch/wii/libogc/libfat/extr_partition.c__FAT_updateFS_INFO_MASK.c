
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int numberLastAllocCluster; int numberFreeCluster; } ;
struct TYPE_6__ {int fsInfoSector; int disc; TYPE_1__ fat; } ;
typedef TYPE_2__ PARTITION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(PARTITION * VAR_2, uint8_t *VAR_3) {
 VAR_2->fat.numberFreeCluster = FUNC_1(VAR_2);
 FUNC_2(VAR_3, VAR_1, VAR_2->fat.numberFreeCluster);
 FUNC_2(VAR_3, VAR_0, VAR_2->fat.numberLastAllocCluster);
 FUNC_0 (VAR_2->disc, VAR_2->fsInfoSector, 1, VAR_3);
}
