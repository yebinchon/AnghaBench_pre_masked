
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u64 ;
typedef int u32 ;
struct cx88_core {int tvnorm; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct cx88_core*,struct cx88_core*,int ,int) ;
 int FUNC_1 (struct cx88_core*,int,int,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,char*,int,int,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_27 ;
 int FUNC_10 (struct cx88_core*,int,int) ;
 int FUNC_11 (struct cx88_core*) ;
 int FUNC_12 (int) ;
 int VAR_28 ;

int FUNC_13(struct cx88_core *VAR_29, v4l2_std_id VAR_30)
{
 u32 VAR_31;
 u32 VAR_32;
 u32 VAR_33;
 u32 VAR_34,VAR_35;
 u64 VAR_36;
 u32 VAR_37,VAR_38,VAR_39;
 u32 VAR_40, VAR_41;

 VAR_29->tvnorm = VAR_30;
 VAR_31 = FUNC_7(VAR_30);
 VAR_32 = VAR_28;
 VAR_33 = VAR_31;
 VAR_34 = VAR_31;
 VAR_35 = VAR_31;

 if (VAR_30 & VAR_12) {
  VAR_40 = VAR_20;
  VAR_41 = 0x181f0008;
 } else if (VAR_30 & VAR_11) {
  VAR_40 = VAR_19;
  VAR_41 = 0x181f0008;
 } else if (VAR_30 & VAR_14) {
  VAR_40 = VAR_23;
  VAR_41 = 0x1c1f0008;
 } else if (VAR_30 & VAR_15) {
  VAR_40 = VAR_24;
  VAR_41 = 0x1c1f0008;
 } else if (VAR_30 & VAR_16) {
  VAR_40 = VAR_25;
  VAR_41 = 0x1c1f0008;
 } else if (VAR_30 & VAR_13) {
  VAR_40 = VAR_22;
  VAR_41 = 0x181f0008;
 } else if (VAR_30 & VAR_10) {
  VAR_40 = VAR_18;
  VAR_41 = 0x181f0008;
 } else if (VAR_30 & VAR_17) {
  VAR_34 = 4250000 * 8;
  VAR_35 = 4406250 * 8;

  VAR_40 = VAR_26;
  VAR_41 = 0x181f0008;
 } else {
  VAR_40 = VAR_21;
  VAR_41 = 0x181f0008;
 }

 FUNC_6(1,"set_tvnorm: \"%s\" fsc8=%d adc=%d vdec=%d db/dr=%d/%d\n",
  FUNC_12(VAR_29->tvnorm), VAR_31, VAR_32, VAR_33,
  VAR_34, VAR_35);
 FUNC_10(VAR_29,2,VAR_33);

 FUNC_6(1,"set_tvnorm: MO_INPUT_FORMAT  0x%08x [old=0x%08x]\n",
  VAR_40, FUNC_3(VAR_3) & 0x0f);


 FUNC_2(VAR_3, 0x40f,
   VAR_30 & VAR_17 ? VAR_40 : VAR_40 | 0x400);


 FUNC_6(1,"set_tvnorm: MO_OUTPUT_FORMAT 0x%08x [old=0x%08x]\n",
  VAR_41, FUNC_3(VAR_4));
 FUNC_4(VAR_4, VAR_41);


 VAR_36 = VAR_32 * (u64)(1 << 17);
 FUNC_5(VAR_36, VAR_33);
 FUNC_6(1,"set_tvnorm: MO_SCONV_REG     0x%08x [old=0x%08x]\n",
  (u32)VAR_36, FUNC_3(VAR_5));
 FUNC_4(VAR_5, (u32)VAR_36);


 VAR_36 = VAR_34 * (u64)(1 << 22);
 FUNC_5(VAR_36, VAR_33);
 FUNC_6(1,"set_tvnorm: MO_SUB_STEP      0x%08x [old=0x%08x]\n",
  (u32)VAR_36, FUNC_3(VAR_6));
 FUNC_4(VAR_6, (u32)VAR_36);


 VAR_36 = VAR_35 * (u64)(1 << 22);
 FUNC_5(VAR_36, VAR_33);
 FUNC_6(1,"set_tvnorm: MO_SUB_STEP_DR   0x%08x [old=0x%08x]\n",
  (u32)VAR_36, FUNC_3(VAR_7));
 FUNC_4(VAR_7, (u32)VAR_36);


 VAR_37 = VAR_33 * 65 / 20000000 + 21;
 VAR_38 = VAR_33 * 68 / 20000000 + 15;
 FUNC_6(1,"set_tvnorm: MO_AGC_BURST     0x%08x [old=0x%08x,bdelay=%d,agcdelay=%d]\n",
  (VAR_37 << 8) | VAR_38, FUNC_3(VAR_1), VAR_37, VAR_38);
 FUNC_4(VAR_1, (VAR_37 << 8) | VAR_38);


 VAR_36 = FUNC_8(VAR_30) * (u64)VAR_33;
 FUNC_5(VAR_36, VAR_31);
 VAR_39 = (u32)VAR_36 | (VAR_0 << 11);
 FUNC_6(1,"set_tvnorm: MO_HTOTAL        0x%08x [old=0x%08x,htotal=%d]\n",
  VAR_39, FUNC_3(VAR_2), (u32)VAR_36);
 FUNC_4(VAR_2, VAR_39);



 FUNC_4(VAR_8, (10<<11) | FUNC_9(VAR_30));


 FUNC_1(VAR_29, 320, 240, VAR_9);


 FUNC_11(VAR_29);


 FUNC_0(VAR_29, VAR_29, VAR_27, VAR_30);


 return 0;
}
