
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mcieb; scalar_t__ mcipd; scalar_t__ scilv2; scalar_t__ scilv1; scalar_t__ scilv0; scalar_t__ scieb; scalar_t__ scipd; scalar_t__ timcsd; scalar_t__ timccnt; scalar_t__ timbsd; scalar_t__ timbcnt; scalar_t__ timasd; scalar_t__ timacnt; scalar_t__ dmlen; scalar_t__ drga; scalar_t__ dmea; scalar_t__ ca; scalar_t__ mslc; scalar_t__ rbp; scalar_t__ rbl; scalar_t__ mvol; scalar_t__ mem4b; } ;


 int FUNC_0 (char*,char*,...) ;
 scalar_t__ FUNC_1 (int,double) ;
 TYPE_1__ VAR_0 ;

void
FUNC_2 (char *VAR_1)
{
   FUNC_0 (VAR_1, "Memory: %s\r\n", VAR_0.mem4b ? "4 Mbit" : "2 Mbit");
   FUNC_0 (VAR_1, "Master volume: %ld\r\n", (unsigned long)VAR_0.mvol);
   FUNC_0 (VAR_1, "Ring buffer length: %ld\r\n", (unsigned long)VAR_0.rbl);
   FUNC_0 (VAR_1, "Ring buffer address: %08lX\r\n", (unsigned long)VAR_0.rbp);
   FUNC_0 (VAR_1, "\r\n");

   FUNC_0 (VAR_1, "Slot Status Registers\r\n");
   FUNC_0 (VAR_1, "-----------------\r\n");
   FUNC_0 (VAR_1, "Monitor slot: %ld\r\n", (unsigned long)VAR_0.mslc);
   FUNC_0 (VAR_1, "Call address: %ld\r\n", (unsigned long)VAR_0.ca);
   FUNC_0 (VAR_1, "\r\n");

   FUNC_0 (VAR_1, "DMA Registers\r\n");
   FUNC_0 (VAR_1, "-----------------\r\n");
   FUNC_0 (VAR_1, "DMA memory address start: %08lX\r\n", (unsigned long)VAR_0.dmea);
   FUNC_0 (VAR_1, "DMA register address start: %08lX\r\n", (unsigned long)VAR_0.drga);
   FUNC_0 (VAR_1, "DMA Flags: %lX\r\n", (unsigned long)VAR_0.dmlen);
   FUNC_0 (VAR_1, "\r\n");

   FUNC_0 (VAR_1, "Timer Registers\r\n");
   FUNC_0 (VAR_1, "-----------------\r\n");
   FUNC_0 (VAR_1, "Timer A counter: %02lX\r\n", (unsigned long)VAR_0.timacnt >> 8);
   FUNC_0 (VAR_1, "Timer A increment: Every %d sample(s)\r\n", (int)FUNC_1(2, (double)VAR_0.timasd));
   FUNC_0 (VAR_1, "Timer B counter: %02lX\r\n", (unsigned long)VAR_0.timbcnt >> 8);
   FUNC_0 (VAR_1, "Timer B increment: Every %d sample(s)\r\n", (int)FUNC_1(2, (double)VAR_0.timbsd));
   FUNC_0 (VAR_1, "Timer C counter: %02lX\r\n", (unsigned long)VAR_0.timccnt >> 8);
   FUNC_0 (VAR_1, "Timer C increment: Every %d sample(s)\r\n", (int)FUNC_1(2, (double)VAR_0.timcsd));
   FUNC_0 (VAR_1, "\r\n");

   FUNC_0 (VAR_1, "Interrupt Registers\r\n");
   FUNC_0 (VAR_1, "-----------------\r\n");
   FUNC_0 (VAR_1, "Sound cpu interrupt pending: %04lX\r\n", (unsigned long)VAR_0.scipd);
   FUNC_0 (VAR_1, "Sound cpu interrupt enable: %04lX\r\n", (unsigned long)VAR_0.scieb);
   FUNC_0 (VAR_1, "Sound cpu interrupt level 0: %04lX\r\n", (unsigned long)VAR_0.scilv0);
   FUNC_0 (VAR_1, "Sound cpu interrupt level 1: %04lX\r\n", (unsigned long)VAR_0.scilv1);
   FUNC_0 (VAR_1, "Sound cpu interrupt level 2: %04lX\r\n", (unsigned long)VAR_0.scilv2);
   FUNC_0 (VAR_1, "Main cpu interrupt pending: %04lX\r\n", (unsigned long)VAR_0.mcipd);
   FUNC_0 (VAR_1, "Main cpu interrupt enable: %04lX\r\n", (unsigned long)VAR_0.mcieb);
   FUNC_0 (VAR_1, "\r\n");
}
