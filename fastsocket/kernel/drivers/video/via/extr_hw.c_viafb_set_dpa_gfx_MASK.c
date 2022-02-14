
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GFX_DPA_SETTING {int DFPLow; int DFPHigh; int DVP1Driving; int DVP1; int DVP0DataDri_S1; int DVP0DataDri_S; int DVP0ClockDri_S1; int DVP0ClockDri_S; int DVP0; } ;


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
 int FUNC_0 (int ,int ,int ,int) ;

void FUNC_1(int VAR_14, struct GFX_DPA_SETTING *VAR_15)

{
 switch (VAR_14) {
 case 129:
  {

   FUNC_0(VAR_4, VAR_12,
           VAR_15->DVP0, 0x0F);


   FUNC_0(VAR_9, VAR_13,
           VAR_15->DVP0ClockDri_S, VAR_1);
   FUNC_0(VAR_10, VAR_13,
           VAR_15->DVP0ClockDri_S1,
           VAR_2);
   FUNC_0(VAR_8, VAR_13,
           VAR_15->DVP0DataDri_S, VAR_0);
   FUNC_0(VAR_10, VAR_13,
           VAR_15->DVP0DataDri_S1, VAR_3);
   break;
  }

 case 128:
  {

   FUNC_0(VAR_7, VAR_12,
           VAR_15->DVP1, 0x0F);


   FUNC_0(VAR_11, VAR_13,
           VAR_15->DVP1Driving, 0x0F);
   break;
  }

 case 131:
  {
   FUNC_0(VAR_5, VAR_12,
           VAR_15->DFPHigh, 0x0F);
   break;
  }

 case 130:
  {
   FUNC_0(VAR_6, VAR_12,
           VAR_15->DFPLow, 0x0F);
   break;
  }

 case 132:
  {
   FUNC_0(VAR_5, VAR_12,
           VAR_15->DFPHigh, 0x0F);
   FUNC_0(VAR_6, VAR_12,
           VAR_15->DFPLow, 0x0F);
   break;
  }
 }
}
