
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_internal {int lock; } ;
struct stb0899_state {int delsys; int verbose; struct stb0899_internal internal; } ;
struct dvb_frontend {struct stb0899_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;



 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 (struct stb0899_state*,int ,int) ;
 int FUNC_4 (struct stb0899_state*,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_19, enum fe_status *VAR_20)
{
 struct stb0899_state *VAR_21 = VAR_19->demodulator_priv;
 struct stb0899_internal *VAR_22 = &VAR_21->internal;
 u8 VAR_23;
 *VAR_20 = 0;

 switch (VAR_21->delsys) {
 case 129:
 case 130:
  FUNC_2(VAR_21->verbose, VAR_6, 1, "Delivery system DVB-S/DSS");
  if (VAR_22->lock) {
   VAR_23 = FUNC_4(VAR_21, VAR_15);
   if (FUNC_0(VAR_18, VAR_23)) {
    FUNC_2(VAR_21->verbose, VAR_6, 1, "--------> FE_HAS_CARRIER | FE_HAS_LOCK");
    *VAR_20 |= VAR_7 | VAR_8;

    VAR_23 = FUNC_4(VAR_21, VAR_12);
    if (FUNC_0(VAR_17, VAR_23)) {
     FUNC_2(VAR_21->verbose, VAR_6, 1, "--------> FE_HAS_VITERBI | FE_HAS_SYNC");
     *VAR_20 |= VAR_10 | VAR_9;

     FUNC_3(VAR_21, VAR_13, 1);
    }
   }
  }
  break;
 case 128:
  FUNC_2(VAR_21->verbose, VAR_6, 1, "Delivery system DVB-S2");
  if (VAR_22->lock) {
   VAR_23 = FUNC_1(VAR_14, VAR_4);
   if (FUNC_0(VAR_16, VAR_23) && FUNC_0(VAR_3, VAR_23)) {
    *VAR_20 |= VAR_7;
    FUNC_2(VAR_21->verbose, VAR_6, 1,
     "UWP & CSM Lock ! ---> DVB-S2 FE_HAS_CARRIER");

    VAR_23 = FUNC_4(VAR_21, VAR_11);
    if (FUNC_0(VAR_1, VAR_23)) {
     *VAR_20 |= VAR_8;
     FUNC_2(VAR_21->verbose, VAR_6, 1,
      "Packet Delineator Locked ! -----> DVB-S2 FE_HAS_LOCK");

    }
    if (FUNC_0(VAR_2, VAR_23)) {
     *VAR_20 |= VAR_10;
     FUNC_2(VAR_21->verbose, VAR_6, 1,
      "Packet Delineator found VITERBI ! -----> DVB-S2 FE_HAS_VITERBI");
    }
    if (FUNC_0(VAR_0, VAR_23)) {
     *VAR_20 |= VAR_9;
     FUNC_2(VAR_21->verbose, VAR_6, 1,
      "Packet Delineator found SYNC ! -----> DVB-S2 FE_HAS_SYNC");

     FUNC_3(VAR_21, VAR_13, 1);
    }
   }
  }
  break;
 default:
  FUNC_2(VAR_21->verbose, VAR_6, 1, "Unsupported delivery system");
  return -VAR_5;
 }
 return 0;
}
