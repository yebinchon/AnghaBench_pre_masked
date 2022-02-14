
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dgate; int ddir; int dexe; int tima; int tactl; int timb; int tbctl; int timc; int tcctl; int mcieb; int mcipd; int scilv2; int scilv1; int scilv0; int scieb; int scipd; int drga; scalar_t__ dmea; int mslc; scalar_t__ rbp; int rbl; int mvol; scalar_t__ mem4mb; } ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(char *VAR_1)
{
   FUNC_0(VAR_1, "Memory: %s\r\n", VAR_0.mem4mb ? "4 Mbit" : "2 Mbit");
   FUNC_0(VAR_1, "Master volume: %d\r\n", VAR_0.mvol);
   FUNC_0(VAR_1, "Ring buffer length: %d\r\n", VAR_0.rbl);
   FUNC_0(VAR_1, "Ring buffer address: %08lX\r\n", (unsigned long)VAR_0.rbp);
   FUNC_0(VAR_1, "\r\n");

   FUNC_0(VAR_1, "Slot Status Registers\r\n");
   FUNC_0(VAR_1, "-----------------\r\n");
   FUNC_0(VAR_1, "Monitor slot: %d\r\n", VAR_0.mslc);
   FUNC_0(VAR_1, "Call address: %d\r\n", (FUNC_1(0x408) >> 7) & 0xF);
   FUNC_0(VAR_1, "\r\n");

   FUNC_0(VAR_1, "DMA Registers\r\n");
   FUNC_0(VAR_1, "-----------------\r\n");
   FUNC_0(VAR_1, "DMA memory address start: %08lX\r\n", (unsigned long)VAR_0.dmea);
   FUNC_0(VAR_1, "DMA register address start: %03X\r\n", VAR_0.drga);
   FUNC_0(VAR_1, "DMA Flags: %02X (%cDGATE %cDDIR %cDEXE)\r\n",
             VAR_0.dgate<<6 | VAR_0.ddir<<5 | VAR_0.dexe<<4,
             VAR_0.dgate ? '+' : '-', VAR_0.ddir ? '+' : '-',
             VAR_0.dexe ? '+' : '-');
   FUNC_0(VAR_1, "\r\n");

   FUNC_0(VAR_1, "Timer Registers\r\n");
   FUNC_0(VAR_1, "-----------------\r\n");
   FUNC_0(VAR_1, "Timer A counter: %02X\r\n", VAR_0.tima >> 8);
   FUNC_0(VAR_1, "Timer A increment: Every %d sample(s)\r\n", 1 << VAR_0.tactl);
   FUNC_0(VAR_1, "Timer B counter: %02X\r\n", VAR_0.timb >> 8);
   FUNC_0(VAR_1, "Timer B increment: Every %d sample(s)\r\n", 1 << VAR_0.tbctl);
   FUNC_0(VAR_1, "Timer C counter: %02X\r\n", VAR_0.timc >> 8);
   FUNC_0(VAR_1, "Timer C increment: Every %d sample(s)\r\n", 1 << VAR_0.tcctl);
   FUNC_0(VAR_1, "\r\n");

   FUNC_0(VAR_1, "Interrupt Registers\r\n");
   FUNC_0(VAR_1, "-----------------\r\n");
   FUNC_0(VAR_1, "Sound cpu interrupt pending: %04X\r\n", VAR_0.scipd);
   FUNC_0(VAR_1, "Sound cpu interrupt enable: %04X\r\n", VAR_0.scieb);
   FUNC_0(VAR_1, "Sound cpu interrupt level 0: %04X\r\n", VAR_0.scilv0);
   FUNC_0(VAR_1, "Sound cpu interrupt level 1: %04X\r\n", VAR_0.scilv1);
   FUNC_0(VAR_1, "Sound cpu interrupt level 2: %04X\r\n", VAR_0.scilv2);
   FUNC_0(VAR_1, "Main cpu interrupt pending: %04X\r\n", VAR_0.mcipd);
   FUNC_0(VAR_1, "Main cpu interrupt enable: %04X\r\n", VAR_0.mcieb);
   FUNC_0(VAR_1, "\r\n");
}
