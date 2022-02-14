
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct __gx_litobj {float k0; float k1; float k2; } ;
typedef float f32 ;
typedef int GXLightObj ;







void FUNC_0(GXLightObj *VAR_0,f32 VAR_1,f32 VAR_2,u8 VAR_3)
{
 f32 VAR_4,VAR_5,VAR_6;
 struct __gx_litobj *VAR_7 = (struct __gx_litobj*)VAR_0;

 if(VAR_1<0.0f ||
  VAR_2<0.0f || VAR_2>=1.0f) VAR_3 = 129;

 switch(VAR_3) {
  case 131:
   VAR_4 = 1.0f;
   VAR_5 = (1.0f-VAR_2)/(VAR_2*VAR_1);
   VAR_6 = 0.0f;
   break;
  case 130:
   VAR_4 = 1.0f;
   VAR_5 = 0.5f*(1.0f-VAR_2)/(VAR_2*VAR_1);
   VAR_6 = 0.5f*(1.0f-VAR_2)/(VAR_2*VAR_1*VAR_1);
   break;
  case 128:
   VAR_4 = 1.0f;
   VAR_5 = 0.0f;
   VAR_6 = (1.0f-VAR_2)/(VAR_2*VAR_1*VAR_1);
   break;
  case 129:
  default:
   VAR_4 = 1.0f;
   VAR_5 = 0.0f;
   VAR_6 = 0.0f;
   break;
 }

 VAR_7->k0 = VAR_4;
 VAR_7->k1 = VAR_5;
 VAR_7->k2 = VAR_6;
}
