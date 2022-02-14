
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct buf {int dummy; } ;
typedef scalar_t__ ppnum_t ;
typedef int caddr_t ;
typedef int addr64_t ;
struct TYPE_2__ {int mdFlags; int mdSecsize; int mdSize; int mdBase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,void*,size_t) ;
 int FUNC_1 (int,int,unsigned int) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 scalar_t__ FUNC_7 (struct buf*,int *) ;
 int FUNC_8 (struct buf*,int) ;
 int FUNC_9 (struct buf*,int ) ;
 int FUNC_10 (struct buf*,int) ;
 int FUNC_11 (struct buf*) ;
 int VAR_3 ;
 int FUNC_12 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 unsigned int FUNC_13 (unsigned int,unsigned int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,...) ;
 scalar_t__ FUNC_16 (int ,int) ;

__attribute__((used)) static void FUNC_17(struct buf *VAR_7) {
 unsigned int VAR_8, VAR_9, VAR_10;
 vm_offset_t VAR_11, VAR_12;
 int VAR_13;
 addr64_t VAR_14, VAR_15;
 ppnum_t VAR_16;

 VAR_13 = FUNC_14(FUNC_5(VAR_7));

 if ((VAR_6[VAR_13].mdFlags & VAR_4) == 0) {
         FUNC_9(VAR_7, VAR_2);
  FUNC_2(VAR_7);
  return;
 }

 FUNC_10(VAR_7, FUNC_4(VAR_7));

 VAR_12 = FUNC_3(VAR_7) * VAR_6[VAR_13].mdSecsize;






 if (VAR_12 >= (VAR_6[VAR_13].mdSize << 12)) {
  if(VAR_12 != (VAR_6[VAR_13].mdSize << 12)) {
          FUNC_9(VAR_7, VAR_1);
  }
  FUNC_2(VAR_7);
  return;
 }

 if ((VAR_12 + FUNC_4(VAR_7)) > (VAR_6[VAR_13].mdSize << 12)) {
  FUNC_8(VAR_7, ((VAR_6[VAR_13].mdSize << 12) - VAR_12));
 }




 if (FUNC_7(VAR_7, (caddr_t *)&VAR_11))
         FUNC_15("ramstrategy: buf_map failed\n");

 VAR_15 = (VAR_6[VAR_13].mdBase << 12) + VAR_12;

 if (FUNC_6(VAR_7) & VAR_0) {
  if(!(VAR_6[VAR_13].mdFlags & VAR_5)) {
   FUNC_0((void *)((uintptr_t)VAR_15),
    (void *)VAR_11, (size_t)FUNC_4(VAR_7));
  }
  else {
   VAR_8 = FUNC_4(VAR_7);
   while(VAR_8) {

    VAR_9 = FUNC_13((4096 - (VAR_11 & 4095)), (4096 - (VAR_15 & 4095)));
    VAR_10 = FUNC_13(VAR_9, VAR_8);

    VAR_16 = FUNC_16(VAR_3, (addr64_t)((uintptr_t)VAR_11));
    if(!VAR_16) {
     FUNC_15("mdevstrategy: sink address %016llX not mapped\n", (addr64_t)((uintptr_t)VAR_11));
    }
    VAR_14 = (addr64_t)(((addr64_t)VAR_16 << 12) | (addr64_t)(VAR_11 & 4095));
    FUNC_1(VAR_15, VAR_14, VAR_10);
    FUNC_12(VAR_14 >> 12);

    VAR_8 = VAR_8 - VAR_10;
    VAR_11 = VAR_11 + VAR_10;
    VAR_15 = VAR_15 + VAR_10;
   }
  }
 }
 else {
  if(!(VAR_6[VAR_13].mdFlags & VAR_5)) {
   FUNC_0((void *)VAR_11, (void *)((uintptr_t)VAR_15),
    (size_t)FUNC_4(VAR_7));
  }
  else {
   VAR_8 = FUNC_4(VAR_7);
   while(VAR_8) {

    VAR_9 = FUNC_13((4096 - (VAR_11 & 4095)), (4096 - (VAR_15 & 4095)));
    VAR_10 = FUNC_13(VAR_9, VAR_8);

    VAR_16 = FUNC_16(VAR_3, (addr64_t)((uintptr_t)VAR_11));
    if(!VAR_16) {
     FUNC_15("mdevstrategy: source address %016llX not mapped\n", (addr64_t)((uintptr_t)VAR_11));
    }
    VAR_14 = (addr64_t)(((addr64_t)VAR_16 << 12) | (addr64_t)(VAR_11 & 4095));

    FUNC_1(VAR_14, VAR_15, VAR_10);

    VAR_8 = VAR_8 - VAR_10;
    VAR_11 = VAR_11 + VAR_10;
    VAR_15 = VAR_15 + VAR_10;
   }
  }
 }






 FUNC_11(VAR_7);

 FUNC_10(VAR_7, 0);
 FUNC_2(VAR_7);
}
