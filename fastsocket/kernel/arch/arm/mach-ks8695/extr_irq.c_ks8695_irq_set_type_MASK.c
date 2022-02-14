
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;





 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;




 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned long,scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (unsigned int,int *) ;
 int FUNC_7 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_16, unsigned int VAR_17)
{
 unsigned long VAR_18, VAR_19;
 unsigned short VAR_20 = 0;

 VAR_18 = FUNC_4(VAR_10 + VAR_11);

 switch (VAR_17) {
  case 133:
   VAR_19 = VAR_7;
   VAR_20 = 1;
   break;
  case 132:
   VAR_19 = VAR_8;
   VAR_20 = 1;
   break;
  case 134:
   VAR_19 = VAR_9;
   break;
  case 135:
   VAR_19 = VAR_6;
   break;
  case 136:
   VAR_19 = VAR_5;
   break;
  default:
   return -VAR_0;
 }

 switch (VAR_16) {
  case 131:
   VAR_18 &= ~VAR_1;
   VAR_18 |= FUNC_0(VAR_19);
   break;
  case 130:
   VAR_18 &= ~VAR_2;
   VAR_18 |= FUNC_1(VAR_19);
   break;
  case 129:
   VAR_18 &= ~VAR_3;
   VAR_18 |= FUNC_2(VAR_19);
   break;
  case 128:
   VAR_18 &= ~VAR_4;
   VAR_18 |= FUNC_3(VAR_19);
   break;
  default:
   return -VAR_0;
 }

 if (VAR_20) {
  FUNC_6(VAR_16, &VAR_15);
  FUNC_7(VAR_16, VAR_13);
 }
 else {
  FUNC_6(VAR_16, &VAR_14);
  FUNC_7(VAR_16, VAR_12);
 }

 FUNC_5(VAR_18, VAR_10 + VAR_11);
 return 0;
}
