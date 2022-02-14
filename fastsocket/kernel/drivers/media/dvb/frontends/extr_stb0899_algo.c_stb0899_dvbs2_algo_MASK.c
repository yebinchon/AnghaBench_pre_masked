
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct stb0899_internal {int srate; int inversion; scalar_t__ status; int master_clk; int modcod; int pilots; int frame_length; scalar_t__ freq; } ;
struct stb0899_state {int verbose; int frontend; TYPE_1__* config; struct stb0899_internal internal; } ;
typedef int s32 ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;
typedef enum stb0899_modcod { ____Placeholder_stb0899_modcod } stb0899_modcod ;
struct TYPE_2__ {int (* tuner_get_frequency ) (int *,scalar_t__*) ;int (* tuner_set_frequency ) (int *,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;



 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ,void*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 void* FUNC_2 (int ,int ) ;
 int VAR_34 ;
 int FUNC_3 (int ,void*,int) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_4 (int ,int ,int,char*) ;
 void* FUNC_5 (struct stb0899_state*,int) ;
 void* FUNC_6 (struct stb0899_state*,int) ;
 int FUNC_7 (struct stb0899_state*) ;
 int FUNC_8 (struct stb0899_state*) ;
 int FUNC_9 (struct stb0899_state*,int,int) ;
 int FUNC_10 (struct stb0899_state*) ;
 int FUNC_11 (int *,int) ;
 void* FUNC_12 (struct stb0899_state*,int ) ;
 int FUNC_13 (struct stb0899_state*,int ,void*) ;
 int FUNC_14 (struct stb0899_state*,int ,int ,int ,void*) ;
 int FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (int *,scalar_t__*) ;

enum stb0899_status FUNC_17(struct stb0899_state *VAR_38)
{
 struct stb0899_internal *VAR_39 = &VAR_38->internal;
 enum stb0899_modcod VAR_40;

 s32 VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;
 int VAR_46 = 0;
 u32 VAR_47, VAR_48;

 if (VAR_39->srate <= 2000000) {
  VAR_42 = 5000;
  VAR_43 = 350;
 } else if (VAR_39->srate <= 5000000) {
  VAR_42 = 2500;
  VAR_43 = 170;
 } else if (VAR_39->srate <= 10000000) {
  VAR_42 = 1500;
  VAR_43 = 80;
 } else if (VAR_39->srate <= 15000000) {
  VAR_42 = 500;
  VAR_43 = 50;
 } else if (VAR_39->srate <= 20000000) {
  VAR_42 = 300;
  VAR_43 = 30;
 } else if (VAR_39->srate <= 25000000) {
  VAR_42 = 250;
  VAR_43 = 25;
 } else {
  VAR_42 = 150;
  VAR_43 = 20;
 }


 VAR_47 = FUNC_12(VAR_38, VAR_35);
 FUNC_3(VAR_11, VAR_47, 1);
 FUNC_13(VAR_38, VAR_35, VAR_47);


 FUNC_11(&VAR_38->frontend, 1);


 if (VAR_38->config->tuner_set_frequency)
  VAR_38->config->tuner_set_frequency(&VAR_38->frontend, VAR_39->freq);
 if (VAR_38->config->tuner_get_frequency)
  VAR_38->config->tuner_get_frequency(&VAR_38->frontend, &VAR_39->freq);


 FUNC_11(&VAR_38->frontend, 0);


 VAR_47 = FUNC_2(VAR_34, VAR_12);
 FUNC_3(VAR_16, VAR_47, 4);
 FUNC_3(VAR_15, VAR_47, 32);
 FUNC_14(VAR_38, VAR_34, VAR_22, VAR_28, VAR_47);

 VAR_47 = FUNC_2(VAR_34, VAR_13);
 FUNC_3(VAR_14, VAR_47, 0);
 FUNC_14(VAR_38, VAR_34, VAR_23, VAR_29, VAR_47);


 FUNC_8(VAR_38);

 VAR_47 = FUNC_2(VAR_34, VAR_4);
 switch (VAR_39->inversion) {
 case 129:
  FUNC_3(VAR_17, VAR_47, 0);
  break;
 case 128:
  FUNC_3(VAR_17, VAR_47, 1);
  break;
 case 130:
  FUNC_3(VAR_17, VAR_47, 1);
  break;
 }
 FUNC_14(VAR_38, VAR_34, VAR_20, VAR_26, VAR_47);
 FUNC_10(VAR_38);


 VAR_39->status = FUNC_5(VAR_38, VAR_42);

 if (VAR_39->status == VAR_5) {
  FUNC_4(VAR_38->verbose, VAR_10, 1, "------------> DVB-S2 DEMOD LOCK !");
  VAR_46 = 0;

  VAR_39->status = FUNC_6(VAR_38, VAR_43);


  while ((VAR_39->status != VAR_6) && (VAR_46 < 3)) {

   VAR_41 = FUNC_2(VAR_34, VAR_0);


   VAR_47 = FUNC_2(VAR_34, VAR_1);
   FUNC_3(VAR_1, VAR_47, VAR_41);
   FUNC_14(VAR_38, VAR_34, VAR_18, VAR_24, VAR_47);
   FUNC_10(VAR_38);
   VAR_39->status = FUNC_6(VAR_38, VAR_42);
   VAR_46++;
  }
 }

 if (VAR_39->status != VAR_6) {
  if (VAR_39->inversion == 130) {
   VAR_47 = FUNC_2(VAR_34, VAR_4);
   VAR_45 = FUNC_1(VAR_17, VAR_47);

   FUNC_3(VAR_17, VAR_47, !VAR_45);
   FUNC_14(VAR_38, VAR_34, VAR_20, VAR_26, VAR_47);

   FUNC_10(VAR_38);


   VAR_39->status = FUNC_5(VAR_38, VAR_42);
   if (VAR_39->status == VAR_5) {
    VAR_46 = 0;

    VAR_39->status = FUNC_6(VAR_38, VAR_43);

    while ((VAR_39->status != VAR_6) && (VAR_46 < 3)) {

     VAR_41 = FUNC_2(VAR_34, VAR_0);


     VAR_47 = FUNC_2(VAR_34, VAR_1);
     FUNC_3(VAR_1, VAR_47, VAR_41);
     FUNC_14(VAR_38, VAR_34, VAR_18, VAR_24, VAR_47);

     FUNC_10(VAR_38);
     VAR_39->status = FUNC_6(VAR_38, VAR_42);
     VAR_46++;
    }
   }




  }
 }
 if (VAR_39->status == VAR_6) {
  FUNC_4(VAR_38->verbose, VAR_10, 1, "----------------> DVB-S2 FEC Lock !");
  VAR_47 = FUNC_2(VAR_34, VAR_37);
  VAR_40 = FUNC_1(VAR_36, VAR_47) >> 2;
  VAR_44 = FUNC_1(VAR_36, VAR_47) & 0x01;

  if ((((10 * VAR_39->master_clk) / (VAR_39->srate / 10)) <= 410) &&
        (FUNC_0(VAR_31, VAR_40, VAR_33)) &&
        (VAR_44 == 1)) {

   FUNC_9(VAR_38, VAR_44, VAR_40);

   VAR_39->status = FUNC_6(VAR_38, VAR_43);

   VAR_46 = 0;
   while ((VAR_39->status != VAR_6) && (VAR_46 < 3)) {
    VAR_48 = FUNC_2(VAR_34, VAR_2);
    FUNC_3(VAR_3, VAR_48, 1);
    FUNC_14(VAR_38, VAR_34, VAR_19, VAR_25, VAR_48);
    VAR_48 = FUNC_2(VAR_34, VAR_2);
    FUNC_3(VAR_3, VAR_48, 0);
    FUNC_14(VAR_38, VAR_34, VAR_19, VAR_25, VAR_48);

    VAR_39->status = FUNC_6(VAR_38, VAR_43);
    VAR_46++;
   }
  }

  if ((((10 * VAR_39->master_clk) / (VAR_39->srate / 10)) <= 410) &&
        (FUNC_0(VAR_30, VAR_40, VAR_32)) &&
        (VAR_44 == 1)) {


   VAR_47 = FUNC_2(VAR_34, VAR_7);
   FUNC_3(VAR_8, VAR_47, 1);
   FUNC_14(VAR_38, VAR_34, VAR_21, VAR_27, VAR_47);
  }


  VAR_47 = FUNC_2(VAR_34, VAR_7);
  FUNC_3(VAR_9, VAR_47, 0x02);
  FUNC_14(VAR_38, VAR_34, VAR_21, VAR_27, VAR_47);


  VAR_41 = FUNC_2(VAR_34, VAR_0);

  VAR_41 = VAR_41 / ((1 << 30) / 1000);
  VAR_41 *= (VAR_39->master_clk / 1000000);
  VAR_47 = FUNC_2(VAR_34, VAR_4);
  if (FUNC_1(VAR_17, VAR_47))
   VAR_41 *= -1;

  VAR_39->freq = VAR_39->freq - VAR_41;
  VAR_39->srate = FUNC_7(VAR_38);

  VAR_47 = FUNC_2(VAR_34, VAR_37);
  VAR_39->modcod = FUNC_1(VAR_36, VAR_47) >> 2;
  VAR_39->pilots = FUNC_1(VAR_36, VAR_47) & 0x01;
  VAR_39->frame_length = (FUNC_1(VAR_36, VAR_47) >> 1) & 0x01;


  VAR_47 = FUNC_2(VAR_34, VAR_12);
  FUNC_3(VAR_16, VAR_47, 3);


  if (FUNC_0(VAR_30, VAR_39->modcod, VAR_31))
   FUNC_3(VAR_15, VAR_47, 16);

  FUNC_14(VAR_38, VAR_34, VAR_22, VAR_28, VAR_47);

  VAR_47 = FUNC_2(VAR_34, VAR_13);
  FUNC_3(VAR_14, VAR_47, 7);
  FUNC_14(VAR_38, VAR_34, VAR_23, VAR_29, VAR_47);
 }


 VAR_47 = FUNC_12(VAR_38, VAR_35);
 FUNC_3(VAR_11, VAR_47, 0);
 FUNC_13(VAR_38, VAR_35, VAR_47);

 return VAR_39->status;
}
