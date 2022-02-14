
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_exception_subcode_t ;
typedef int mach_exception_code_t ;
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
 int FUNC_0 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_1(int VAR_11,
             mach_exception_code_t VAR_12,
             mach_exception_subcode_t VAR_13)
{
 int VAR_14 = 0;


 if ((VAR_14 = FUNC_0(VAR_11, VAR_12, VAR_13)) != 0)
  return VAR_14;

 switch(VAR_11) {
  case 136:
   if (VAR_12 == VAR_0)
    return VAR_8;
   else
    return VAR_2;

  case 135:
   return VAR_5;

  case 137:
   return VAR_4;

  case 133:
   return VAR_3;

  case 132:
   switch (VAR_12) {
    case 128:
     return VAR_9;
    case 129:
     return VAR_7;
    case 130:
     return VAR_1;
    case 131:
     return VAR_6;
   }
   break;

  case 134:
   return VAR_10;
 }

 return 0;
}
