
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint64_t ;
typedef int dev_t ;
struct TYPE_2__ {int mdFlags; unsigned int mdBase; int mdSize; int mdBDev; int mdCDev; int mdSecsize; int * mdcdevb; int * mdbdevb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *,scalar_t__) ;
 void* FUNC_2 (int,int ,int ,int ,int,char*,int) ;
 void* FUNC_3 (scalar_t__,int) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,...) ;

dev_t FUNC_6(int VAR_13, uint64_t VAR_14, unsigned int VAR_15, int VAR_16) {

 int VAR_17;

 if(VAR_13 < 0) {

  VAR_13 = -1;
  for(VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {
   if(!(VAR_8[VAR_17].mdFlags & VAR_6)) {
    if(VAR_13 < 0)VAR_13 = VAR_17;
    continue;
   }
   if(!(((VAR_14 + VAR_15 -1 ) < VAR_8[VAR_17].mdBase) || ((VAR_8[VAR_17].mdBase + VAR_8[VAR_17].mdSize - 1) < VAR_14))) {
    FUNC_4("mdevadd: attempt to add overlapping memory device at %016llX-%016llX\n", VAR_8[VAR_17].mdBase, VAR_8[VAR_17].mdBase + VAR_8[VAR_17].mdSize - 1);
   }
  }
  if(VAR_13 < 0) {
   FUNC_4("mdevadd: attempt to add more than %d memory devices\n", VAR_4);
  }
 }
 else {
  if(VAR_13 >= VAR_4) {
   FUNC_4("mdevadd: attempt to explicitly add a bogus memory device: %08X\n", VAR_13);
  }
  if(VAR_8[VAR_13].mdFlags & VAR_6) {
   FUNC_4("mdevadd: attempt to explicitly add a previously defined memory device: %08X\n", VAR_13);
  }
 }

 if(VAR_9 < 0) {
  VAR_9 = FUNC_0(-1, &VAR_11);
  if (VAR_9 < 0) {
   FUNC_5("mdevadd: error - bdevsw_add() returned %d\n", VAR_9);
   return -1;
  }
 }

 if(VAR_10 < 0) {
  VAR_10 = FUNC_1(-1, &VAR_12, VAR_9);
  if (VAR_10 < 0) {
   FUNC_5("ramdevice_init: error - cdevsw_add() returned %d\n", VAR_10);
   return -1;
  }
 }

 VAR_8[VAR_13].mdBDev = FUNC_3(VAR_9, VAR_13);
 VAR_8[VAR_13].mdbdevb = FUNC_2(VAR_8[VAR_13].mdBDev, VAR_0,
        VAR_5, VAR_3,
        0600, "md%d", VAR_13);
 if (VAR_8[VAR_13].mdbdevb == ((void*)0)) {
  FUNC_5("mdevadd: devfs_make_node for block failed!\n");
  return -1;
 }

 VAR_8[VAR_13].mdCDev = FUNC_3(VAR_10, VAR_13);
 VAR_8[VAR_13].mdcdevb = FUNC_2(VAR_8[VAR_13].mdCDev, VAR_1,
        VAR_5, VAR_3,
        0600, "rmd%d", VAR_13);
 if (VAR_8[VAR_13].mdcdevb == ((void*)0)) {
  FUNC_5("mdevadd: devfs_make_node for character failed!\n");
  return -1;
 }

 VAR_8[VAR_13].mdBase = VAR_14;
 VAR_8[VAR_13].mdSize = VAR_15;
 VAR_8[VAR_13].mdSecsize = VAR_2;
 if(VAR_16) VAR_8[VAR_13].mdFlags |= VAR_7;
 VAR_8[VAR_13].mdFlags |= VAR_6;
 FUNC_5("Added memory device md%x/rmd%x (%08X/%08X) at %016llX for %016llX\n",
     VAR_13, VAR_13, VAR_8[VAR_13].mdBDev, VAR_8[VAR_13].mdCDev, VAR_14 << 12, (uint64_t)VAR_15 << 12);
 return VAR_8[VAR_13].mdBDev;
}
