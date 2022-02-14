
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;


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
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (int ) ;
 int VAR_26 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;

int FUNC_5(void)
{
 UWORD VAR_34;
 int VAR_35;
 int VAR_36 = VAR_26;

 switch (VAR_0) {
 case 140:
 case 139:
 case 130:
 case 143:
  VAR_34 = 0xf0e3;
  break;
 case 142:
  VAR_34 = 0xc4fa;
  break;
 case 141:
  VAR_34 = 0xc479;
  break;
 case 138:
  VAR_34 = 0xc43c;
  break;
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 128:
  VAR_34 = 0xc42e;
  break;
 case 132:
  VAR_34 = 0xc42c;
  break;
 case 131:
  VAR_34 = 0xc43b;
  break;
 case 129:
  VAR_34 = 0xc3eb;
  break;
 default:
  return VAR_26;
 }

 for (VAR_35 = 0; VAR_35 < 5; VAR_35++) {
  UWORD VAR_37 = FUNC_4(VAR_34 + 1);
  switch (FUNC_3(VAR_34)) {
  case 'E':
   if (VAR_1) {
    VAR_29 = FUNC_4(VAR_37 + VAR_13) + 1;
    VAR_28 = FUNC_4(VAR_37 + VAR_11) + 1;
    VAR_30 = FUNC_4(VAR_37 + VAR_14) + 1;
    VAR_31 = FUNC_4(VAR_37 + VAR_16) + 1;
    VAR_33 = VAR_32;
    FUNC_0(VAR_31, VAR_19, VAR_4);
    VAR_36 = VAR_27;
   }
  default:
   break;
  }
  VAR_34 += 3;
 }
 return VAR_36;
}
