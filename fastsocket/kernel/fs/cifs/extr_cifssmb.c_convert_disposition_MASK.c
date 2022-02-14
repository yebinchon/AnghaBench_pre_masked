
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static __u16 FUNC_1(int VAR_3)
{
 __u16 VAR_4 = 0;

 switch (VAR_3) {
  case 128:
   VAR_4 = VAR_1 | VAR_2;
   break;
  case 132:
   VAR_4 = VAR_0;
   break;
  case 133:
   VAR_4 = VAR_1;
   break;
  case 131:
   VAR_4 = VAR_1 | VAR_0;
   break;
  case 130:
   VAR_4 = VAR_2;
   break;
  case 129:
   VAR_4 = VAR_1 | VAR_2;
   break;
  default:
   FUNC_0(1, "unknown disposition %d", VAR_3);
   VAR_4 = VAR_0;
 }
 return VAR_4;
}
