
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1) {
 case 128:
  VAR_2 = 0;
  break;
 case 129:
  VAR_2 = VAR_0;
  break;
 default:
  FUNC_0("unknown error %#x", VAR_1);
 }

 return VAR_2;
}
