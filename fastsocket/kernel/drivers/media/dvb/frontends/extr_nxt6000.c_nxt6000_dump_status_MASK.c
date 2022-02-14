
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nxt6000_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nxt6000_state*,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct nxt6000_state *VAR_8)
{
 u8 VAR_9;
 FUNC_1("NXT6000 status:");

 VAR_9 = FUNC_0(VAR_8, VAR_6);

 FUNC_1(" DATA DESCR LOCK: %d,", VAR_9 & 0x01);
 FUNC_1(" DATA SYNC LOCK: %d,", (VAR_9 >> 1) & 0x01);

 VAR_9 = FUNC_0(VAR_8, VAR_7);

 FUNC_1(" VITERBI LOCK: %d,", (VAR_9 >> 7) & 0x01);

 switch ((VAR_9 >> 4) & 0x07) {

 case 0x00:
  FUNC_1(" VITERBI CODERATE: 1/2,");
  break;

 case 0x01:
  FUNC_1(" VITERBI CODERATE: 2/3,");
  break;

 case 0x02:
  FUNC_1(" VITERBI CODERATE: 3/4,");
  break;

 case 0x03:
  FUNC_1(" VITERBI CODERATE: 5/6,");
  break;

 case 0x04:
  FUNC_1(" VITERBI CODERATE: 7/8,");
  break;

 default:
  FUNC_1(" VITERBI CODERATE: Reserved,");

 }

 VAR_9 = FUNC_0(VAR_8, VAR_0);

 FUNC_1(" CHCTrack: %d,", (VAR_9 >> 7) & 0x01);
 FUNC_1(" TPSLock: %d,", (VAR_9 >> 6) & 0x01);
 FUNC_1(" SYRLock: %d,", (VAR_9 >> 5) & 0x01);
 FUNC_1(" AGCLock: %d,", (VAR_9 >> 4) & 0x01);

 switch (VAR_9 & 0x0F) {

 case 0x00:
  FUNC_1(" CoreState: IDLE,");
  break;

 case 0x02:
  FUNC_1(" CoreState: WAIT_AGC,");
  break;

 case 0x03:
  FUNC_1(" CoreState: WAIT_SYR,");
  break;

 case 0x04:
  FUNC_1(" CoreState: WAIT_PPM,");
  break;

 case 0x01:
  FUNC_1(" CoreState: WAIT_TRL,");
  break;

 case 0x05:
  FUNC_1(" CoreState: WAIT_TPS,");
  break;

 case 0x06:
  FUNC_1(" CoreState: MONITOR_TPS,");
  break;

 default:
  FUNC_1(" CoreState: Reserved,");

 }

 VAR_9 = FUNC_0(VAR_8, VAR_1);

 FUNC_1(" SYRLock: %d,", (VAR_9 >> 4) & 0x01);
 FUNC_1(" SYRMode: %s,", (VAR_9 >> 2) & 0x01 ? "8K" : "2K");

 switch ((VAR_9 >> 4) & 0x03) {

 case 0x00:
  FUNC_1(" SYRGuard: 1/32,");
  break;

 case 0x01:
  FUNC_1(" SYRGuard: 1/16,");
  break;

 case 0x02:
  FUNC_1(" SYRGuard: 1/8,");
  break;

 case 0x03:
  FUNC_1(" SYRGuard: 1/4,");
  break;
 }

 VAR_9 = FUNC_0(VAR_8, VAR_2);

 switch ((VAR_9 >> 4) & 0x07) {

 case 0x00:
  FUNC_1(" TPSLP: 1/2,");
  break;

 case 0x01:
  FUNC_1(" TPSLP: 2/3,");
  break;

 case 0x02:
  FUNC_1(" TPSLP: 3/4,");
  break;

 case 0x03:
  FUNC_1(" TPSLP: 5/6,");
  break;

 case 0x04:
  FUNC_1(" TPSLP: 7/8,");
  break;

 default:
  FUNC_1(" TPSLP: Reserved,");

 }

 switch (VAR_9 & 0x07) {

 case 0x00:
  FUNC_1(" TPSHP: 1/2,");
  break;

 case 0x01:
  FUNC_1(" TPSHP: 2/3,");
  break;

 case 0x02:
  FUNC_1(" TPSHP: 3/4,");
  break;

 case 0x03:
  FUNC_1(" TPSHP: 5/6,");
  break;

 case 0x04:
  FUNC_1(" TPSHP: 7/8,");
  break;

 default:
  FUNC_1(" TPSHP: Reserved,");

 }

 VAR_9 = FUNC_0(VAR_8, VAR_3);

 FUNC_1(" TPSMode: %s,", VAR_9 & 0x01 ? "8K" : "2K");

 switch ((VAR_9 >> 4) & 0x03) {

 case 0x00:
  FUNC_1(" TPSGuard: 1/32,");
  break;

 case 0x01:
  FUNC_1(" TPSGuard: 1/16,");
  break;

 case 0x02:
  FUNC_1(" TPSGuard: 1/8,");
  break;

 case 0x03:
  FUNC_1(" TPSGuard: 1/4,");
  break;

 }


 FUNC_0(VAR_8, VAR_5);
 VAR_9 = FUNC_0(VAR_8, VAR_4);
 VAR_9 = FUNC_0(VAR_8, VAR_4);

 FUNC_1(" RF AGC LOCK: %d,", (VAR_9 >> 4) & 0x01);
 FUNC_1("\n");
}
