
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u32 ;
typedef void* u16 ;
struct mxl5005s_state {void* TF_Type; void* Mod_Type; void* EN_RSSI; void* CAPSELECT; void* DIV_OUT; void* CLOCK_OUT; void* IF_OUT_LOAD; void* TOP; void* AGC_Mode; void* Fxtal; void* IF_OUT; void* Chan_Bandwidth; void* IF_Mode; void* Mode; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static u16 FUNC_2(struct dvb_frontend *VAR_0,
 u8 VAR_1,
 u8 VAR_2,
 u32 VAR_3,
 u32 VAR_4,
 u32 VAR_5,
 u8 VAR_6,
 u16 VAR_7,
 u16 VAR_8,
 u8 VAR_9,
 u8 VAR_10,
 u8 VAR_11,
 u8 VAR_12,



 u8 VAR_13,



 u8 VAR_14
 )
{
 struct mxl5005s_state *VAR_15 = VAR_0->tuner_priv;
 u16 VAR_16 = 0;

 VAR_15->Mode = VAR_1;
 VAR_15->IF_Mode = VAR_2;
 VAR_15->Chan_Bandwidth = VAR_3;
 VAR_15->IF_OUT = VAR_4;
 VAR_15->Fxtal = VAR_5;
 VAR_15->AGC_Mode = VAR_6;
 VAR_15->TOP = VAR_7;
 VAR_15->IF_OUT_LOAD = VAR_8;
 VAR_15->CLOCK_OUT = VAR_9;
 VAR_15->DIV_OUT = VAR_10;
 VAR_15->CAPSELECT = VAR_11;
 VAR_15->EN_RSSI = VAR_12;
 VAR_15->Mod_Type = VAR_13;
 VAR_15->TF_Type = VAR_14;


 FUNC_0(VAR_0);


 FUNC_1(VAR_0);

 return VAR_16;
}
