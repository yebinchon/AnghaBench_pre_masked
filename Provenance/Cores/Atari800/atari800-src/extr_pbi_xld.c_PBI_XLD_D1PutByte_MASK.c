
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 () ;
 int VAR_13 ;
 int FUNC_7 (char*,...) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;

void FUNC_8(UWORD VAR_16, UBYTE VAR_17)
{
 if ((VAR_16 & ~3) == 0xd104) {

  FUNC_1(FUNC_7("votrax write:%4x\n",VAR_16));
  if (VAR_12) {
   FUNC_2(VAR_9);
  }
  FUNC_5(VAR_14 & 0x3f);

 }
 else if ((VAR_16 & ~3) == 0xd100 ) {

  if ( !(VAR_14 & 0x80) && (VAR_17 & 0x80) && (!FUNC_6())) {

   FUNC_1(FUNC_7("votrax IRQ generated: IRQ enable changed and idle\n"));
   FUNC_0();
   VAR_3 |= VAR_11;
  } else if ((VAR_14 & 0x80) && !(VAR_17 & 0x80) ){

   VAR_3 &= ~VAR_11;

   FUNC_4(VAR_8, VAR_7);
  }
  VAR_14 = VAR_17;
 }
 else if (VAR_16 == 0xd108) {

  FUNC_1(FUNC_7("XLD 8040 T1:%d loop-back:%d modem+phone:%d offhook(modem relay):%d phaudio:%d DTMF:%d O/!A(originate/answer):%d SQT(squelch transmitter):%d\n",!!(VAR_17&0x80),!!(VAR_17&0x40),!!(VAR_17&0x20),!!(VAR_17&0x10),!!(VAR_17&0x08),!!(VAR_17&0x04),!!(VAR_17&0x02),!!(VAR_17&0x01)));
  VAR_13 = VAR_17;
 }
 else if (VAR_15 && VAR_16 == 0xd110) {

  FUNC_1(FUNC_7("d110: disk output byte:%2x\n",VAR_17));
  if (VAR_13 & 0x80){

   VAR_0 = 0;
   VAR_1 = 0;
   VAR_10 = VAR_4;
   VAR_2 = 5;
   FUNC_1(FUNC_7("command frame expected\n"));
  }
  else if (VAR_10 == VAR_6 || VAR_10 == VAR_5) {
   FUNC_1(FUNC_7("read ack strobe\n"));
  }
  else {
   FUNC_3(VAR_17);
  }
 }
}
