
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_qp_statetrans { ____Placeholder_ib_qp_statetrans } ib_qp_statetrans ;


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
__attribute__((used)) static inline enum ib_qp_statetrans FUNC_0(int VAR_11,
        int VAR_12)
{
 int VAR_13 = -VAR_0;
 switch (VAR_12) {
 case 132:
  VAR_13 = VAR_2;
  break;
 case 133:
  switch (VAR_11) {
  case 132:
   VAR_13 = VAR_5;
   break;
  case 133:
   VAR_13 = VAR_3;
   break;
  }
  break;
 case 131:
  if (VAR_11 == 133)
   VAR_13 = VAR_4;
  break;
 case 130:
  switch (VAR_11) {
  case 131:
   VAR_13 = VAR_6;
   break;
  case 130:
   VAR_13 = VAR_7;
   break;
  case 129:
   VAR_13 = VAR_9;
   break;
  case 128:
   VAR_13 = VAR_10;
   break;
  }
  break;
 case 129:
  if (VAR_11 == 130)
   VAR_13 = VAR_8;
  break;
 case 128:
  break;
 case 134:
  VAR_13 = VAR_1;
  break;
 default:
  break;
 }
 return VAR_13;
}
