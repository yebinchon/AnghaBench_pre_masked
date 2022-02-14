
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;




 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int*,int ) ;

__attribute__((used)) static bool
FUNC_2(u_int8_t *VAR_4, u_int32_t VAR_5)
{
 bool VAR_6 = VAR_0;
 u_int8_t VAR_7 = FUNC_1(VAR_4, VAR_5);
 switch (VAR_7) {
  case 131: {
   VAR_6 = VAR_2;
   break;
  }
  case 130: {
   VAR_6 = VAR_2;
   break;
  }
  case 128: {
   VAR_6 = VAR_2;
   break;
  }
  case 129: {
   VAR_6 = VAR_2;
   break;
  }
  default: {
   VAR_6 = VAR_0;
   break;
  }
 }

 if (VAR_3) {
  FUNC_0(VAR_1, "Policy route rule type %d, valid %d", VAR_7, VAR_6);
 }

 return (VAR_6);
}
