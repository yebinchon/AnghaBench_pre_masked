
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef size_t s32 ;
struct TYPE_5__ {int prio; int iram_len; int iram_addr; int init_vec; int done_cb; int init_cb; int * req_cb; int * res_cb; int * iram_maddr; } ;
struct TYPE_4__ {int* workarea; int cipher; TYPE_3__ dsp_task; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (size_t,int,scalar_t__,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static s32 FUNC_10(s32 VAR_7,u32 *VAR_8)
{
 u32 VAR_9,VAR_10,VAR_11;
 u32 VAR_12,VAR_13,VAR_14,VAR_15,VAR_16;
 card_block *VAR_17 = &VAR_5[VAR_7];
 u32 *VAR_18 = VAR_17->workarea;
 u32 *VAR_19 = (u32*)(((u32)VAR_17->workarea+47)&~31);
 u32 *VAR_20 = &VAR_19[8];
 VAR_9 = FUNC_5();
 VAR_10 = FUNC_4();

 if(FUNC_6(VAR_7,VAR_9,VAR_6,VAR_10,0)<0) return VAR_0;

 VAR_11 = FUNC_9(VAR_9,(VAR_10<<3)+1);
 {
  u32 VAR_21,VAR_22,VAR_23,VAR_24,VAR_25,VAR_26;
  VAR_21 = (VAR_11>>23);
  VAR_22 = (VAR_11>>15);
  VAR_23 = (VAR_11>>7);
  VAR_24 = (VAR_11^VAR_23);
  VAR_25 = (VAR_22^VAR_24);
  VAR_26 = ~(VAR_21^VAR_25);
  VAR_24 = (VAR_11|(VAR_26<<31));
  VAR_17->cipher = VAR_24;
 }
 VAR_17->cipher = FUNC_7(VAR_17->cipher);

 VAR_9 = 0;
 VAR_10 = FUNC_4();
 if(FUNC_6(VAR_7,VAR_9,VAR_6,VAR_10+20,1)<0) return VAR_0;

 VAR_12 = ((u32*)VAR_6)[0];
 VAR_13 = ((u32*)VAR_6)[1];
 VAR_14 = ((u32*)VAR_6)[2];
 VAR_15 = ((u32*)VAR_6)[3];
 VAR_16 = ((u32*)VAR_6)[4];

 VAR_12 = VAR_12^VAR_17->cipher;
 VAR_11 = FUNC_8(VAR_17->cipher,32);
 {
  u32 VAR_27,VAR_28,VAR_29,VAR_30,VAR_31,VAR_32;
  VAR_27 = (VAR_11<<23);
  VAR_28 = (VAR_11<<15);
  VAR_29 = (VAR_11<<7);
  VAR_30 = (VAR_11^VAR_29);
  VAR_31 = (VAR_28^VAR_30);
  VAR_32 = ~(VAR_27^VAR_31);
  VAR_30 = (VAR_11|(VAR_32>>31));
  VAR_17->cipher = VAR_30;
 }

 VAR_13 = VAR_13^VAR_17->cipher;
 VAR_11 = FUNC_8(VAR_17->cipher,32);
 {
  u32 VAR_33,VAR_34,VAR_35,VAR_36,VAR_37,VAR_38;
  VAR_33 = (VAR_11<<23);
  VAR_34 = (VAR_11<<15);
  VAR_35 = (VAR_11<<7);
  VAR_36 = (VAR_11^VAR_35);
  VAR_37 = (VAR_34^VAR_36);
  VAR_38 = ~(VAR_33^VAR_37);
  VAR_36 = (VAR_11|(VAR_38>>31));
  VAR_17->cipher = VAR_36;
 }

 VAR_14 = VAR_14^VAR_17->cipher;
 VAR_11 = FUNC_8(VAR_17->cipher,32);
 {
  u32 VAR_39,VAR_40,VAR_41,VAR_42,VAR_43,VAR_44;
  VAR_39 = (VAR_11<<23);
  VAR_40 = (VAR_11<<15);
  VAR_41 = (VAR_11<<7);
  VAR_42 = (VAR_11^VAR_41);
  VAR_43 = (VAR_40^VAR_42);
  VAR_44 = ~(VAR_39^VAR_43);
  VAR_42 = (VAR_11|(VAR_44>>31));
  VAR_17->cipher = VAR_42;
 }

 VAR_15 = VAR_15^VAR_17->cipher;
 VAR_11 = FUNC_8(VAR_17->cipher,32);
 {
  u32 VAR_45,VAR_46,VAR_47,VAR_48,VAR_49,VAR_50;
  VAR_45 = (VAR_11<<23);
  VAR_46 = (VAR_11<<15);
  VAR_47 = (VAR_11<<7);
  VAR_48 = (VAR_11^VAR_47);
  VAR_49 = (VAR_46^VAR_48);
  VAR_50 = ~(VAR_45^VAR_49);
  VAR_48 = (VAR_11|(VAR_50>>31));
  VAR_17->cipher = VAR_48;
 }

 VAR_16 = VAR_16^VAR_17->cipher;
 VAR_11 = FUNC_8(VAR_17->cipher,(VAR_10<<3));
 {
  u32 VAR_51,VAR_52,VAR_53,VAR_54,VAR_55,VAR_56;
  VAR_51 = (VAR_11<<23);
  VAR_52 = (VAR_11<<15);
  VAR_53 = (VAR_11<<7);
  VAR_54 = (VAR_11^VAR_53);
  VAR_55 = (VAR_52^VAR_54);
  VAR_56 = ~(VAR_51^VAR_55);
  VAR_54 = (VAR_11|(VAR_56>>31));
  VAR_17->cipher = VAR_54;
 }

 VAR_11 = FUNC_8(VAR_17->cipher,33);
 {
  u32 VAR_57,VAR_58,VAR_59,VAR_60,VAR_61,VAR_62;
  VAR_57 = (VAR_11<<23);
  VAR_58 = (VAR_11<<15);
  VAR_59 = (VAR_11<<7);
  VAR_60 = (VAR_11^VAR_59);
  VAR_61 = (VAR_58^VAR_60);
  VAR_62 = ~(VAR_57^VAR_61);
  VAR_60 = (VAR_11|(VAR_62>>31));
  VAR_17->cipher = VAR_60;
 }

 VAR_19[0] = VAR_15;
 VAR_19[1] = VAR_16;
 VAR_18[0] = (u32)VAR_19;
 VAR_18[1] = 8;



 VAR_18[2] = 0;

 VAR_18[3] = (u32)VAR_20;
 FUNC_0(VAR_19,8);
 FUNC_1(VAR_20,4);
 FUNC_0(VAR_18,16);

 VAR_17->dsp_task.prio = 255;
 VAR_17->dsp_task.iram_maddr = (u16*)FUNC_3(VAR_4);
 VAR_17->dsp_task.iram_len = 352;
 VAR_17->dsp_task.iram_addr = 0x0000;
 VAR_17->dsp_task.init_vec = 16;
 VAR_17->dsp_task.res_cb = ((void*)0);
 VAR_17->dsp_task.req_cb = ((void*)0);
 VAR_17->dsp_task.init_cb = VAR_3;
 VAR_17->dsp_task.done_cb = VAR_2;
 FUNC_2(&VAR_17->dsp_task);

 VAR_8[0] = VAR_12;
 VAR_8[1] = VAR_13;
 VAR_8[2] = VAR_14;

 return VAR_1;
}
