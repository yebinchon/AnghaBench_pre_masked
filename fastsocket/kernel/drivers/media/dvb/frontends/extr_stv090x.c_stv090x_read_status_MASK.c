
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv090x_state {int dummy; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;
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
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,int,char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_16, enum fe_status *VAR_17)
{
 struct stv090x_state *VAR_18 = VAR_16->demodulator_priv;
 u32 VAR_19;
 u8 VAR_20;

 VAR_19 = FUNC_1(VAR_18, VAR_0);
 VAR_20 = FUNC_0(VAR_19, VAR_8);

 switch (VAR_20) {
 case 0:
 case 1:
 default:
  FUNC_2(VAR_2, 1, "Status: Unlocked (Searching ..)");
  *VAR_17 = 0;
  break;

 case 2:
  FUNC_2(VAR_2, 1, "Delivery system: DVB-S2");
  VAR_19 = FUNC_1(VAR_18, VAR_1);
  if (FUNC_0(VAR_19, VAR_10)) {
   VAR_19 = FUNC_1(VAR_18, VAR_11);
   if (FUNC_0(VAR_19, VAR_12)) {
    VAR_19 = FUNC_1(VAR_18, VAR_14);
    if (FUNC_0(VAR_19, VAR_13)) {
     *VAR_17 = VAR_5 |
        VAR_3 |
        VAR_7 |
        VAR_6 |
        VAR_4;
    }
   }
  }
  break;

 case 3:
  FUNC_2(VAR_2, 1, "Delivery system: DVB-S");
  VAR_19 = FUNC_1(VAR_18, VAR_1);
  if (FUNC_0(VAR_19, VAR_10)) {
   VAR_19 = FUNC_1(VAR_18, VAR_15);
   if (FUNC_0(VAR_19, VAR_9)) {
    VAR_19 = FUNC_1(VAR_18, VAR_14);
    if (FUNC_0(VAR_19, VAR_13)) {
     *VAR_17 = VAR_5 |
        VAR_3 |
        VAR_7 |
        VAR_6 |
        VAR_4;
    }
   }
  }
  break;
 }

 return 0;
}
