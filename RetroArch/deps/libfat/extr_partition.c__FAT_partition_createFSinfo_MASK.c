
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int numberLastAllocCluster; int numberFreeCluster; } ;
struct TYPE_6__ {scalar_t__ filesysType; int fsInfoSector; int disc; TYPE_1__ fat; int bytesPerSector; scalar_t__ readOnly; } ;
typedef TYPE_2__ PARTITION ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_0 (int ,int ,int,int*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (int*,int ,int ) ;

void FUNC_6(PARTITION * VAR_9)
{
 int VAR_10;
   uint8_t *VAR_11;

 if(VAR_9->readOnly || VAR_9->filesysType != VAR_6)
  return;

 VAR_11 = (uint8_t*) FUNC_2(VAR_9->bytesPerSector);
 if (!VAR_11)
      return;
 FUNC_4(VAR_11, 0, VAR_9->bytesPerSector);

 for(VAR_10 = 0; VAR_10 < 4; ++VAR_10)
 {
  VAR_11[VAR_0+VAR_10] = VAR_7[VAR_10];
  VAR_11[VAR_1+VAR_10] = VAR_8[VAR_10];
 }

 VAR_9->fat.numberFreeCluster = FUNC_1(VAR_9);
 FUNC_5(VAR_11, VAR_5, VAR_9->fat.numberFreeCluster);
 FUNC_5(VAR_11, VAR_4, VAR_9->fat.numberLastAllocCluster);

 VAR_11[VAR_2] = 0x55;
 VAR_11[VAR_3] = 0xAA;

 FUNC_0 (VAR_9->disc, VAR_9->fsInfoSector, 1, VAR_11);

 FUNC_3(VAR_11);
}
