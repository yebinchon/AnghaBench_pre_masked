
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ lastCluster; scalar_t__ firstFree; scalar_t__ numberLastAllocCluster; scalar_t__ numberFreeCluster; } ;
struct TYPE_7__ {TYPE_1__ fat; } ;
typedef TYPE_2__ PARTITION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;

uint32_t FUNC_2(PARTITION* VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 bool VAR_9 = 0;

 VAR_8 = VAR_4->fat.lastCluster;

 if (VAR_5 > VAR_8)
  return VAR_1;


 VAR_7 = FUNC_0(VAR_4, VAR_5);
 if ((VAR_7 >= VAR_2) && (VAR_7 <= VAR_8))
  return VAR_7;


 VAR_6 = VAR_4->fat.firstFree;

 if (VAR_6 < VAR_2)
  VAR_6 = VAR_2;


 while (FUNC_0(VAR_4, VAR_6) != VAR_3)
   {
  VAR_6++;
  if (VAR_6 > VAR_8)
      {
         if (VAR_9)
         {

            VAR_4->fat.firstFree = VAR_6;
            return VAR_1;
         }



         VAR_6 = VAR_2;
         VAR_9 = 1;
      }
 }
 VAR_4->fat.firstFree = VAR_6;
 if(VAR_4->fat.numberFreeCluster)
  VAR_4->fat.numberFreeCluster--;
 VAR_4->fat.numberLastAllocCluster = VAR_6;


 if ((VAR_5 >= VAR_2) && (VAR_5 <= VAR_8))
  FUNC_1 (VAR_4, VAR_5, VAR_6);

 FUNC_1 (VAR_4, VAR_6, VAR_0);

 return VAR_6;
}
