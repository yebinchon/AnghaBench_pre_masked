
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stb0899_internal {int direction; long derot_percent; long mclk; long derot_step; int t_data; scalar_t__ status; int derot_freq; int fecrate; scalar_t__ freq; scalar_t__ t_derot; scalar_t__ t_agc2; scalar_t__ t_agc1; scalar_t__ sub_range; int master_clk; } ;
struct stb0899_params {int srate; scalar_t__ freq; } ;
struct stb0899_state {int verbose; int frontend; struct stb0899_config* config; struct stb0899_internal internal; struct stb0899_params params; } ;
struct stb0899_config {int (* tuner_get_bandwidth ) (int *,int*) ;int (* tuner_get_frequency ) (int *,scalar_t__*) ;int (* tuner_set_frequency ) (int *,scalar_t__) ;} ;
typedef size_t s32 ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;






 int FUNC_0 (int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,int,size_t) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int ,int ,int,char*,...) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct stb0899_state*) ;
 scalar_t__ FUNC_5 (long) ;
 scalar_t__ FUNC_6 (struct stb0899_state*) ;
 int FUNC_7 (struct stb0899_state*) ;
 int FUNC_8 (struct stb0899_state*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct stb0899_state*,int ) ;
 int FUNC_11 (struct stb0899_state*,int ,int*,int) ;
 scalar_t__ FUNC_12 (struct stb0899_state*) ;
 scalar_t__ FUNC_13 (struct stb0899_state*) ;
 int FUNC_14 (struct stb0899_state*) ;
 int FUNC_15 (struct stb0899_state*,int ,int) ;
 int FUNC_16 (struct stb0899_state*,int ,int) ;
 int FUNC_17 (struct stb0899_state*,int ,int*,int) ;
 int FUNC_18 (int *,scalar_t__) ;
 int FUNC_19 (int *,scalar_t__*) ;
 int FUNC_20 (int *,int*) ;

enum stb0899_status FUNC_21(struct stb0899_state *VAR_24)
{
 struct stb0899_params *VAR_25 = &VAR_24->params;
 struct stb0899_internal *VAR_26 = &VAR_24->internal;
 struct stb0899_config *VAR_27 = VAR_24->config;

 u8 VAR_28, VAR_29;
 u8 VAR_30[2];
 u8 VAR_31[10];
 s32 VAR_32 = 3;
 u32 VAR_33 = 0;


 s32 VAR_34[5][4] = {

  { 37, 34, 32, 31 },
  { 37, 35, 33, 31 },
  { 37, 35, 33, 31 },
  { 37, 36, 33, 32 },
  { 37, 36, 33, 32 }
 };

 VAR_26->direction = 1;

 FUNC_15(VAR_24, VAR_26->master_clk, VAR_25->srate);

 if (VAR_25->srate <= 5000000) {
  FUNC_16(VAR_24, VAR_10, 0x89);
  VAR_28 = FUNC_10(VAR_24, VAR_11);
  FUNC_1(VAR_1, VAR_28, 0x1c);
  FUNC_16(VAR_24, VAR_11, VAR_28);
  VAR_32 = 0;
 } else if (VAR_25->srate <= 15000000) {
  FUNC_16(VAR_24, VAR_10, 0xc9);
  VAR_28 = FUNC_10(VAR_24, VAR_11);
  FUNC_1(VAR_1, VAR_28, 0x22);
  FUNC_16(VAR_24, VAR_11, VAR_28);
  VAR_32 = 1;
 } else if(VAR_25->srate <= 25000000) {
  FUNC_16(VAR_24, VAR_10, 0x89);
  VAR_28 = FUNC_10(VAR_24, VAR_11);
  FUNC_1(VAR_1, VAR_28, 0x27);
  FUNC_16(VAR_24, VAR_11, VAR_28);
  VAR_32 = 2;
 } else {
  FUNC_16(VAR_24, VAR_10, 0xc8);
  VAR_28 = FUNC_10(VAR_24, VAR_11);
  FUNC_1(VAR_1, VAR_28, 0x29);
  FUNC_16(VAR_24, VAR_11, VAR_28);
  VAR_32 = 3;
 }

 FUNC_2(VAR_24->verbose, VAR_6, 1, "Set the timing loop to acquisition");

 FUNC_16(VAR_24, VAR_18, 0x46);
 FUNC_16(VAR_24, VAR_12, 0xee);







 FUNC_2(VAR_24->verbose, VAR_6, 1, "Derot Percent=%d Srate=%d mclk=%d",
  VAR_26->derot_percent, VAR_25->srate, VAR_26->mclk);


 VAR_26->derot_step = VAR_26->derot_percent * (VAR_25->srate / 1000L) / VAR_26->mclk;
 VAR_26->t_derot = FUNC_5(VAR_25->srate);
 VAR_26->t_data = 500;

 FUNC_2(VAR_24->verbose, VAR_6, 1, "RESET stream merger");

 VAR_29 = FUNC_10(VAR_24, VAR_20);
 FUNC_1(VAR_7, VAR_29, 1);
 FUNC_16(VAR_24, VAR_20, VAR_29);





 VAR_29 = FUNC_10(VAR_24, VAR_14);
 FUNC_1(VAR_5, VAR_29, 60);
 FUNC_16(VAR_24, VAR_14, VAR_29);

 FUNC_16(VAR_24, VAR_15, 0x01);
 FUNC_16(VAR_24, VAR_21, 0x19);

 FUNC_8(VAR_24);
 do {

  VAR_30[0] = VAR_30[1] = 0;
  FUNC_17(VAR_24, VAR_13, VAR_30, 2);

  FUNC_16(VAR_24, VAR_19, 0);
  VAR_29 = FUNC_10(VAR_24, VAR_12);
  FUNC_1(VAR_3, VAR_29, 1);
  FUNC_16(VAR_24, VAR_12, VAR_29);

  VAR_26->derot_freq = 0;
  VAR_26->status = VAR_8;


  FUNC_9(&VAR_24->frontend, 1);


  FUNC_2(VAR_24->verbose, VAR_6, 1, "Tuner set frequency");
  if (VAR_24->config->tuner_set_frequency)
   VAR_24->config->tuner_set_frequency(&VAR_24->frontend, VAR_26->freq);

  if (VAR_24->config->tuner_get_frequency)
   VAR_24->config->tuner_get_frequency(&VAR_24->frontend, &VAR_26->freq);

  FUNC_3(VAR_26->t_agc1 + VAR_26->t_agc2 + VAR_26->t_derot);
  FUNC_2(VAR_24->verbose, VAR_6, 1, "current derot freq=%d", VAR_26->derot_freq);
  VAR_26->status = VAR_0;


  if (VAR_27->tuner_get_bandwidth)
   VAR_27->tuner_get_bandwidth(&VAR_24->frontend, &VAR_33);


  FUNC_9(&VAR_24->frontend, 0);

  if (VAR_25->srate <= VAR_33 / 2)
   FUNC_14(VAR_24);
  else
   FUNC_7(VAR_24);

  if (VAR_26->status == VAR_22) {
   FUNC_2(VAR_24->verbose, VAR_6, 1,
    "TIMING OK ! Derot freq=%d, mclk=%d",
    VAR_26->derot_freq, VAR_26->mclk);

   if (FUNC_12(VAR_24) == VAR_2) {
    FUNC_2(VAR_24->verbose, VAR_6, 1,
     "CARRIER OK ! Derot freq=%d, mclk=%d",
     VAR_26->derot_freq, VAR_26->mclk);

    if (FUNC_13(VAR_24) == VAR_4) {
     FUNC_2(VAR_24->verbose, VAR_6, 1,
      "DATA OK ! Derot freq=%d, mclk=%d",
      VAR_26->derot_freq, VAR_26->mclk);

     if (FUNC_6(VAR_24) == VAR_9) {
      FUNC_2(VAR_24->verbose, VAR_6, 1,
       "RANGE OK ! derot freq=%d, mclk=%d",
       VAR_26->derot_freq, VAR_26->mclk);

      VAR_26->freq = VAR_25->freq + ((VAR_26->derot_freq * VAR_26->mclk) / 1000);
      VAR_29 = FUNC_10(VAR_24, VAR_17);
      VAR_26->fecrate = FUNC_0(VAR_23, VAR_29);
      FUNC_2(VAR_24->verbose, VAR_6, 1,
       "freq=%d, internal resultant freq=%d",
       VAR_25->freq, VAR_26->freq);

      FUNC_2(VAR_24->verbose, VAR_6, 1,
       "internal puncture rate=%d",
       VAR_26->fecrate);
     }
    }
   }
  }
  if (VAR_26->status != VAR_9)
   FUNC_4(VAR_24);

 } while (VAR_26->sub_range && VAR_26->status != VAR_9);


 FUNC_16(VAR_24, VAR_18, 0x33);
 FUNC_16(VAR_24, VAR_12, 0xf7);

 if (VAR_26->status == VAR_9) {
  FUNC_2(VAR_24->verbose, VAR_6, 1, "Locked & Range OK !");
  FUNC_16(VAR_24, VAR_15, 0x41);
  FUNC_16(VAR_24, VAR_21, 0x39);





  VAR_29 = FUNC_10(VAR_24, VAR_11);
  switch (VAR_26->fecrate) {
  case 133:
   FUNC_16(VAR_24, VAR_14, 0x1a);
   FUNC_1(VAR_1, VAR_29, VAR_34[0][VAR_32]);
   FUNC_16(VAR_24, VAR_11, VAR_29);
   break;
  case 132:
   FUNC_16(VAR_24, VAR_14, 44);
   FUNC_1(VAR_1, VAR_29, VAR_34[1][VAR_32]);
   FUNC_16(VAR_24, VAR_11, VAR_29);
   break;
  case 131:
   FUNC_16(VAR_24, VAR_14, 60);
   FUNC_1(VAR_1, VAR_29, VAR_34[2][VAR_32]);
   FUNC_16(VAR_24, VAR_11, VAR_29);
   break;
  case 130:
   FUNC_16(VAR_24, VAR_14, 75);
   FUNC_1(VAR_1, VAR_29, VAR_34[3][VAR_32]);
   FUNC_16(VAR_24, VAR_11, VAR_29);
   break;
  case 129:
   FUNC_16(VAR_24, VAR_14, 88);
   FUNC_16(VAR_24, VAR_10, 0x88);
   FUNC_16(VAR_24, VAR_11, 0x9a);
   break;
  case 128:
   FUNC_16(VAR_24, VAR_14, 94);
   FUNC_1(VAR_1, VAR_29, VAR_34[4][VAR_32]);
   FUNC_16(VAR_24, VAR_11, VAR_29);
   break;
  default:
   FUNC_2(VAR_24->verbose, VAR_6, 1, "Unsupported Puncture Rate");
   break;
  }

  VAR_29 = FUNC_10(VAR_24, VAR_20);
  FUNC_1(VAR_7, VAR_29, 0);
  FUNC_16(VAR_24, VAR_20, VAR_29);


  VAR_29 = FUNC_10(VAR_24, VAR_12);
  FUNC_1(VAR_3, VAR_29, 0);
  FUNC_16(VAR_24, VAR_12, VAR_29);

  FUNC_11(VAR_24, VAR_16, VAR_31, 10);
 }

 return VAR_26->status;
}
