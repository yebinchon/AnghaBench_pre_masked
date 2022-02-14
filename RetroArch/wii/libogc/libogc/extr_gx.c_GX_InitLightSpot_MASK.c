
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct __gx_litobj {float a0; float a1; float a2; } ;
typedef float f32 ;
typedef int GXLightObj ;
 float VAR_0 ;
 float FUNC_0 (float) ;

void FUNC_1(GXLightObj *VAR_1,f32 VAR_2,u8 VAR_3)
{
 f32 VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,VAR_9;
 struct __gx_litobj *VAR_10 = (struct __gx_litobj*)VAR_1;

 if(VAR_2<0.0f || VAR_2>90.0f) VAR_3 = 131;

 VAR_4 = (VAR_2*VAR_0)/180.0f;
 VAR_6 = FUNC_0(VAR_4);

 switch(VAR_3) {
  case 132:
   VAR_7 = -1000.0f*VAR_6;
   VAR_8 = 1000.0f;
   VAR_9 = 0.0f;
   break;
  case 134:
   VAR_7 = -VAR_6/(1.0f-VAR_6);
   VAR_8 = 1.0f/(1.0f-VAR_6);
   VAR_9 = 0.0f;
   break;
  case 133:
   VAR_7 = 0.0f;
   VAR_8 = -VAR_6/(1.0f-VAR_6);
   VAR_9 = 1.0f/(1.0f-VAR_6);
   break;
  case 128:
   VAR_5 = (1.0f-VAR_6)*(1.0f-VAR_6);
   VAR_7 = VAR_6*(VAR_6-2.0f);
   VAR_8 = 2.0f/VAR_5;
   VAR_9 = -1.0/VAR_5;
   break;
  case 130:
   VAR_5 = (1.0f-VAR_6)*(1.0f-VAR_6);
   VAR_7 = -4.0f*VAR_6/VAR_5;
   VAR_8 = 4.0f*(1.0f+VAR_6)/VAR_5;
   VAR_9 = -4.0f/VAR_5;
   break;
  case 129:
   VAR_5 = (1.0f-VAR_6)*(1.0f-VAR_6);
   VAR_7 = 1.0f-2.0f*VAR_6*VAR_6/VAR_5;
   VAR_8 = 4.0f*VAR_6/VAR_5;
   VAR_9 = -2.0f/VAR_5;
   break;
  case 131:
  default:
   VAR_7 = 1.0f;
   VAR_8 = 0.0f;
   VAR_9 = 0.0f;
   break;
 }

 VAR_10->a0 = VAR_7;
 VAR_10->a1 = VAR_8;
 VAR_10->a2 = VAR_9;
}
