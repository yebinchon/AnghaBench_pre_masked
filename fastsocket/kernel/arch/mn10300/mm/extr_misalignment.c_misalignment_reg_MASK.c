
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t* VAR_0 ;
 int FUNC_0 () ;



 size_t* VAR_1 ;


 int VAR_2 ;





 size_t* VAR_3 ;


__attribute__((used)) static int FUNC_1(unsigned long *VAR_4, unsigned VAR_5,
       unsigned VAR_6, unsigned long VAR_7,
       unsigned long **VAR_8)
{
 VAR_5 &= 0x7fffffff;

 if (VAR_5 & 0xffffff00)
  return 0;

 switch (VAR_5 & 0xff) {
 case 138:
  *VAR_8 = &VAR_4[VAR_1[VAR_6 & 0x03]];
  break;
 case 137:
  *VAR_8 = &VAR_4[VAR_1[VAR_6 >> 2 & 0x03]];
  break;
 case 136:
  *VAR_8 = &VAR_4[VAR_1[VAR_6 >> 4 & 0x03]];
  break;
 case 141:
  *VAR_8 = &VAR_4[VAR_0[VAR_6 & 0x03]];
  break;
 case 140:
  *VAR_8 = &VAR_4[VAR_0[VAR_6 >> 2 & 0x03]];
  break;
 case 139:
  *VAR_8 = &VAR_4[VAR_0[VAR_6 >> 4 & 0x03]];
  break;
 case 133:
  *VAR_8 = &VAR_4[VAR_3[VAR_6 & 0x0f]];
  break;
 case 132:
  *VAR_8 = &VAR_4[VAR_3[VAR_6 >> 2 & 0x0f]];
  break;
 case 131:
  *VAR_8 = &VAR_4[VAR_3[VAR_6 >> 4 & 0x0f]];
  break;
 case 130:
  *VAR_8 = &VAR_4[VAR_3[VAR_6 >> 8 & 0x0f]];
  break;
 case 129:
  *VAR_8 = &VAR_4[VAR_3[VAR_6 >> 12 & 0x0f]];
  break;
 case 135:
  *VAR_8 = &VAR_4[VAR_3[VAR_7 & 0x0f]];
  break;
 case 134:
  *VAR_8 = &VAR_4[VAR_3[VAR_7 >> 4 & 0x0f]];
  break;
 case 128:
  *VAR_8 = &VAR_4[VAR_2 >> 2];
  break;

 default:
  FUNC_0();
  return 0;
 }

 return 1;
}
