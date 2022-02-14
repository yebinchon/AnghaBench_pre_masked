
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int name; int number; int min; int hour; int day; int month; } ;
struct TYPE_20__ {scalar_t__ cidcw_ack; scalar_t__ cidplay; } ;
struct TYPE_19__ {int low; } ;
struct TYPE_23__ {int fskz; int fskphase; int fskcnt; int fskdcnt; int board; TYPE_3__ cid_send; TYPE_2__ flags; int write_q; scalar_t__ cid_play_flag; scalar_t__ cidcw_wait; int busyflags; scalar_t__ tone_state; scalar_t__ cidcnt; scalar_t__ cidsize; TYPE_1__ dsp; } ;
struct TYPE_22__ {int tone_index; int gain0; scalar_t__ freq1; scalar_t__ gain1; int freq0; } ;
typedef TYPE_4__ IXJ_TONE ;
typedef TYPE_5__ IXJ ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int,TYPE_5__*) ;
 int FUNC_8 (int,TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,char) ;
 int FUNC_10 (TYPE_5__*,char*,int) ;
 int FUNC_11 (TYPE_5__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (char*,int ,scalar_t__) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (char*,int ) ;
 char FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int ,void*) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void FUNC_20(IXJ *VAR_6)
{
 IXJ_TONE VAR_7;

 char VAR_8[50];
 char VAR_9[50];
 char VAR_10[80];
 char VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 int VAR_16 = 0;

 if (VAR_6->dsp.low == 0x20 || VAR_6->flags.cidplay)
  return;

 VAR_6->fskz = VAR_6->fskphase = VAR_6->fskcnt = VAR_6->fskdcnt = 0;
 VAR_6->cidsize = VAR_6->cidcnt = 0;

 FUNC_1(VAR_6);

 VAR_6->flags.cidcw_ack = 0;

 VAR_7.tone_index = 23;
 VAR_7.gain0 = 1;
 VAR_7.freq0 = VAR_3;
 VAR_7.gain1 = 0;
 VAR_7.freq1 = 0;
 FUNC_2(VAR_6, &VAR_7);

 FUNC_8(1500, VAR_6);
 FUNC_7(32, VAR_6);
 if(VAR_4 & 0x0200) {
  FUNC_12("IXJ cidcw phone%d first tone start at %ld\n", VAR_6->board, VAR_5);
 }
 FUNC_4(VAR_6, 23);

 FUNC_0(VAR_6->board, &VAR_6->busyflags);
 while(VAR_6->tone_state)
  FUNC_13(1);
 while(FUNC_17(VAR_6->board, (void *)&VAR_6->busyflags) != 0)
  FUNC_13(1);
 if(VAR_4 & 0x0200) {
  FUNC_12("IXJ cidcw phone%d first tone end at %ld\n", VAR_6->board, VAR_5);
 }

 VAR_7.tone_index = 24;
 VAR_7.gain0 = 1;
 VAR_7.freq0 = VAR_1;
 VAR_7.gain1 = 0;
 VAR_7.freq1 = VAR_2;
 FUNC_2(VAR_6, &VAR_7);

 FUNC_7(10, VAR_6);
 FUNC_8(600, VAR_6);
 if(VAR_4 & 0x0200) {
  FUNC_12("IXJ cidcw phone%d second tone start at %ld\n", VAR_6->board, VAR_5);
 }
 FUNC_4(VAR_6, 24);

 FUNC_0(VAR_6->board, &VAR_6->busyflags);
 while(VAR_6->tone_state)
  FUNC_13(1);
 while(FUNC_17(VAR_6->board, (void *)&VAR_6->busyflags) != 0)
  FUNC_13(1);
 if(VAR_4 & 0x0200) {
  FUNC_12("IXJ cidcw phone%d sent second tone at %ld\n", VAR_6->board, VAR_5);
 }

 VAR_6->cidcw_wait = VAR_5 + ((50 * VAR_0) / 100);

 FUNC_0(VAR_6->board, &VAR_6->busyflags);
 while(!VAR_6->flags.cidcw_ack && FUNC_18(VAR_5, VAR_6->cidcw_wait))
  FUNC_13(1);
 while(FUNC_17(VAR_6->board, (void *)&VAR_6->busyflags) != 0)
  FUNC_13(1);
 VAR_6->cidcw_wait = 0;
 if(!VAR_6->flags.cidcw_ack) {
  if(VAR_4 & 0x0200) {
   FUNC_12("IXJ cidcw phone%d did not receive ACK from display %ld\n", VAR_6->board, VAR_5);
  }
  FUNC_5(VAR_6);
  if(VAR_6->cid_play_flag) {
   FUNC_19(&VAR_6->write_q);
  }
  return;
 } else {
  FUNC_6(VAR_6);
 }
 VAR_6->flags.cidcw_ack = 0;
 FUNC_15(VAR_8, VAR_6->cid_send.month);
 FUNC_14(VAR_8, VAR_6->cid_send.day);
 FUNC_14(VAR_8, VAR_6->cid_send.hour);
 FUNC_14(VAR_8, VAR_6->cid_send.min);
 FUNC_15(VAR_9, VAR_6->cid_send.number);
 FUNC_15(VAR_10, VAR_6->cid_send.name);

 VAR_12 = FUNC_16(VAR_8);
 VAR_13 = FUNC_16(VAR_9);
 VAR_14 = FUNC_16(VAR_10);
 VAR_11 = VAR_12 + VAR_13 + VAR_14 + 6;

 FUNC_11(VAR_6);

 FUNC_9(VAR_6, 0x80);
 VAR_16 = 0x80;
 FUNC_9(VAR_6, VAR_11);
 VAR_16 = VAR_16 + VAR_11;

 FUNC_9(VAR_6, 0x01);
 VAR_16 = VAR_16 + 0x01;
 FUNC_9(VAR_6, VAR_12);
 VAR_16 = VAR_16 + VAR_12;
 VAR_16 = FUNC_10(VAR_6, VAR_8, VAR_16);

 FUNC_9(VAR_6, 0x02);
 VAR_16 = VAR_16 + 0x02;
 FUNC_9(VAR_6, VAR_13);
 VAR_16 = VAR_16 + VAR_13;
 VAR_16 = FUNC_10(VAR_6, VAR_9, VAR_16);

 FUNC_9(VAR_6, 0x07);
 VAR_16 = VAR_16 + 0x07;
 FUNC_9(VAR_6, VAR_14);
 VAR_16 = VAR_16 + VAR_14;
 VAR_16 = FUNC_10(VAR_6, VAR_10, VAR_16);

 VAR_16 %= 256;
 VAR_16 ^= 0xFF;
 VAR_16 += 1;

 FUNC_9(VAR_6, (char) VAR_16);

 VAR_15 = VAR_6->fskdcnt % 240;
 if (VAR_15) {
  VAR_15 = 240 - VAR_15;
 }
 FUNC_3(VAR_6, VAR_15);
 if(VAR_4 & 0x0200) {
  FUNC_12("IXJ cidcw phone%d sent FSK data at %ld\n", VAR_6->board, VAR_5);
 }
}
