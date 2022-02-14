
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int numberFreeCluster; int firstFree; int lastCluster; } ;
struct TYPE_7__ {int numberOfSectors; int sectorsPerCluster; TYPE_1__ fat; } ;
typedef TYPE_2__ PARTITION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

bool FUNC_2 (PARTITION* VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;

 if ((VAR_5 < VAR_2) || (VAR_5 > VAR_4->fat.lastCluster ))
  return 0;


 if (VAR_5 < VAR_4->fat.firstFree)
  VAR_4->fat.firstFree = VAR_5;

 while ((VAR_5 != VAR_0) && (VAR_5 != VAR_3) && (VAR_5 != VAR_1))
   {

  VAR_6 = FUNC_0 (VAR_4, VAR_5);


  FUNC_1 (VAR_4, VAR_5, VAR_3);

  if(VAR_4->fat.numberFreeCluster < (VAR_4->numberOfSectors/VAR_4->sectorsPerCluster))
   VAR_4->fat.numberFreeCluster++;

  VAR_5 = VAR_6;
 }

 return 1;
}
