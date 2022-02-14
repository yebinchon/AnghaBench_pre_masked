
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_internal {int* symbol_rate; int* srch_range; int chip_id; int* freq; int* bw; int* tuner_type; int mclk; int rolloff; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
typedef int s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct stv0900_internal*,int) ;
 int FUNC_4 (struct stv0900_internal*,int,int) ;
 int FUNC_5 (struct dvb_frontend*,int,int) ;
 int FUNC_6 (struct stv0900_internal*,int,int,int) ;
 int FUNC_7 (struct stv0900_internal*,int ,int ) ;
 int FUNC_8 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_7,
     s32 VAR_8)
{
 struct stv0900_state *VAR_9 = VAR_7->demodulator_priv;
 struct stv0900_internal *VAR_10 = VAR_9->internal;
 enum fe_stv0900_demod_num VAR_11 = VAR_9->demod;
 int VAR_12 = VAR_5,
  VAR_13 = VAR_11;
 s32 VAR_14,
  VAR_15,
  VAR_16,
  VAR_17,
  VAR_18,
  VAR_19,
  VAR_20,
  VAR_21,
  VAR_22,
  VAR_23;

 VAR_14 = VAR_10->symbol_rate[VAR_13];
 VAR_15 = VAR_10->srch_range[VAR_13];

 if (VAR_14 >= 10000000)
  VAR_16 = VAR_8 / 3;
 else
  VAR_16 = VAR_8 / 2;

 VAR_12 = FUNC_4(VAR_10, VAR_13, VAR_16);

 if (VAR_12 != VAR_5)
  return VAR_12;

 if (VAR_14 >= 10000000) {
  if (FUNC_3(VAR_10, VAR_13) == VAR_6) {
   FUNC_8(VAR_10, VAR_4, 0x1f);
   FUNC_8(VAR_10, VAR_4, 0x15);
   VAR_12 = FUNC_4(VAR_10, VAR_13, VAR_8);
  } else
   VAR_12 = VAR_5;

  return VAR_12;
 }

 if (VAR_10->chip_id <= 0x20) {
  if (VAR_14 <= 1000000)
   VAR_17 = 500;
  else if (VAR_14 <= 4000000)
   VAR_17 = 1000;
  else if (VAR_14 <= 7000000)
   VAR_17 = 2000;
  else if (VAR_14 <= 10000000)
   VAR_17 = 3000;
  else
   VAR_17 = 5000;

  if (VAR_14 >= 2000000) {
   VAR_22 = (VAR_8 / 3);
   if (VAR_22 > 1000)
    VAR_22 = 1000;
  } else
   VAR_22 = (VAR_8 / 2);
 } else {

  VAR_17 = VAR_14 / 4000;
  VAR_22 = (VAR_8 * 3) / 4;
 }

 VAR_18 = ((VAR_15 / 1000) / VAR_17);

 if ((VAR_18 % 2) != 0)
  VAR_18 += 1;

 if (VAR_18 <= 0)
  VAR_18 = 2;
 else if (VAR_18 > 12)
  VAR_18 = 12;

 VAR_19 = 1;
 VAR_20 = 1;

 if (VAR_10->chip_id <= 0x20) {
  VAR_21 = VAR_10->freq[VAR_13];
  VAR_10->bw[VAR_13] = FUNC_2(VAR_10->symbol_rate[VAR_13],
    VAR_10->rolloff) + VAR_10->symbol_rate[VAR_13];
 } else
  VAR_21 = 0;

 while ((VAR_19 <= VAR_18) && (VAR_12 == VAR_5)) {
  if (VAR_20 > 0)
   VAR_21 += (VAR_19 * VAR_17);
  else
   VAR_21 -= (VAR_19 * VAR_17);

  if (VAR_10->chip_id <= 0x20) {
   if (VAR_10->tuner_type[VAR_13] == 3)
    FUNC_6(VAR_10, VAR_21,
      VAR_10->bw[VAR_13], VAR_11);
   else
    FUNC_5(VAR_7, VAR_21, VAR_10->bw[VAR_13]);

   FUNC_8(VAR_10, VAR_4, 0x1c);
   FUNC_8(VAR_10, VAR_1, 0);
   FUNC_8(VAR_10, VAR_0, 0);
   FUNC_8(VAR_10, VAR_4, 0x1f);
   FUNC_8(VAR_10, VAR_4, 0x15);
  } else {
   FUNC_8(VAR_10, VAR_4, 0x1c);
   VAR_23 = (VAR_21 * 65536) / (VAR_10->mclk / 1000);
   FUNC_7(VAR_10, VAR_3, FUNC_1(VAR_23));
   FUNC_7(VAR_10, VAR_2, FUNC_0(VAR_23));
   FUNC_8(VAR_10, VAR_4, 0x1f);
   FUNC_8(VAR_10, VAR_4, 0x05);
  }

  VAR_12 = FUNC_4(VAR_10, VAR_13, VAR_22);
  VAR_20 *= -1;
  VAR_19++;
 }

 return VAR_12;
}
