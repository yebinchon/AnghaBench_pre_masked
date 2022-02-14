
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned short high; unsigned short low; } ;
struct TYPE_7__ {int low; int high; } ;
struct TYPE_8__ {int DSPWrite; int board; scalar_t__ DSPbase; TYPE_1__ ssr; int iscontrolreadyfail; int iscontrolready; } ;
typedef TYPE_2__ IXJ ;
typedef TYPE_3__ BYTES ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_7 (unsigned short,scalar_t__) ;
 int FUNC_8 (char*,int ,unsigned short) ;
 scalar_t__ FUNC_9 (int,unsigned long) ;

__attribute__((used)) static int FUNC_10(unsigned short VAR_2, IXJ *VAR_3)
{
 BYTES VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->DSPWrite);
 if(FUNC_3(&VAR_3->DSPWrite) > 1) {
  FUNC_8("IXJ %d DSP write overlap attempting command 0x%4.4x\n", VAR_3->board, VAR_2);
  return -1;
 }
 VAR_4.high = (VAR_2 & 0xFF00) >> 8;
 VAR_4.low = VAR_2 & 0x00FF;
 VAR_5 = VAR_1 + ((60 * VAR_0) / 100);
 while (!FUNC_0(VAR_3)) {
  FUNC_5(VAR_3->iscontrolready);
  if (FUNC_9(VAR_1, VAR_5)) {
   FUNC_5(VAR_3->iscontrolreadyfail);
   FUNC_1(&VAR_3->DSPWrite);
   if(FUNC_3(&VAR_3->DSPWrite) > 0) {
    FUNC_8("IXJ %d DSP overlaped command 0x%4.4x during control ready failure.\n", VAR_3->board, VAR_2);
    while(FUNC_3(&VAR_3->DSPWrite) > 0) {
     FUNC_1(&VAR_3->DSPWrite);
    }
   }
   return -1;
  }
 }
 FUNC_7(VAR_4.low, VAR_3->DSPbase + 6);
 FUNC_7(VAR_4.high, VAR_3->DSPbase + 7);

 if (FUNC_6(VAR_3)) {
  VAR_3->ssr.low = 0xFF;
  VAR_3->ssr.high = 0xFF;
  FUNC_1(&VAR_3->DSPWrite);
  if(FUNC_3(&VAR_3->DSPWrite) > 0) {
   FUNC_8("IXJ %d DSP overlaped command 0x%4.4x during status wait failure.\n", VAR_3->board, VAR_2);
   while(FUNC_3(&VAR_3->DSPWrite) > 0) {
    FUNC_1(&VAR_3->DSPWrite);
   }
  }
  return -1;
 }

 VAR_3->ssr.low = FUNC_4(VAR_3->DSPbase + 2);
 VAR_3->ssr.high = FUNC_4(VAR_3->DSPbase + 3);
 FUNC_1(&VAR_3->DSPWrite);
 if(FUNC_3(&VAR_3->DSPWrite) > 0) {
  FUNC_8("IXJ %d DSP overlaped command 0x%4.4x\n", VAR_3->board, VAR_2);
  while(FUNC_3(&VAR_3->DSPWrite) > 0) {
   FUNC_1(&VAR_3->DSPWrite);
  }
 }
 return 0;
}
