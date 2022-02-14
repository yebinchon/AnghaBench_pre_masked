
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (char*,...) ;
 unsigned int FUNC_3 () ;
 unsigned long FUNC_4 () ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned long) ;

void FUNC_9(void)
{
 unsigned int VAR_14 = FUNC_3();
 unsigned int VAR_15 = VAR_14;

 if (VAR_10) {
  FUNC_2("\"norps\" option deprectated: use \"rpsctl=\"\n");
 }
 if (VAR_11 >= 0) {
  FUNC_2("34K return prediction stack override set to %d.\n",
   VAR_11);
  if (VAR_11)
   VAR_15 |= (1 << 2);
  else
   VAR_15 &= ~(1 << 2);
 }
 if (VAR_9 >= 0) {
  FUNC_2("34K ALU/LSU sync override set to %d.\n", VAR_9);
  if (VAR_9)
   VAR_15 |= (1 << 5);
  else
   VAR_15 &= ~(1 << 5);
 }
 if (VAR_8) {
  FUNC_2("CP0.Config7 forced to 0x%08x.\n", VAR_7);
  VAR_15 = VAR_7;
 }
 if (VAR_14 != VAR_15) {
  __asm__ __volatile("sync");
  FUNC_6(VAR_15);
  FUNC_1();
  FUNC_2("Config7: 0x%08x\n", FUNC_3());
 }


 if (VAR_13)
  FUNC_2("I-cache flushes single-threaded\n");
 if (VAR_12)
  FUNC_2("D-cache flushes single-threaded\n");
 if (VAR_6 != 1)
  FUNC_2("I-Cache Flushes Repeated %d times\n", VAR_6);
 if (VAR_5 != 1)
  FUNC_2("D-Cache Flushes Repeated %d times\n", VAR_5);

 if (VAR_4 != 0) {







  unsigned long VAR_16;
  unsigned long VAR_17;


  VAR_16 = FUNC_5();
  FUNC_8(VAR_16 | (0x1 << 26));
  FUNC_1();



  FUNC_0(VAR_2, (0x80000008));
  FUNC_1();
  VAR_17 = FUNC_4();
  VAR_17 &= 0xfffe0000;

  VAR_17 |= 0x00000c00;

  FUNC_7(VAR_17);
  FUNC_1();

  FUNC_0(VAR_3, (0x80000008));

  FUNC_7((VAR_4 & 0xfffffc00) | 0x1 );
  FUNC_1();

  FUNC_0(VAR_3, (0x80000000));
  FUNC_8(VAR_16);
  FUNC_1();
  FUNC_2("Mapped %ld ITC cells starting at 0x%08x\n",
   ((VAR_17 & 0x7fe00000) >> 20), VAR_4);
 }
}
