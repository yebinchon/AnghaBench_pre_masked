
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vme_address_t ;


 int VAR_0 ;
 int VAR_1 ;

 unsigned long long VAR_2 ;

 unsigned long long VAR_3 ;

 unsigned long long VAR_4 ;


 unsigned long long VAR_5 ;




 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(vme_address_t VAR_6, unsigned long long VAR_7,
 unsigned long long VAR_8)
{
 int VAR_9 = 0;

 switch (VAR_6) {
 case 136:
  if (((VAR_7 + VAR_8) > VAR_2) ||
    (VAR_7 > VAR_2))
   VAR_9 = -VAR_0;
  break;
 case 135:
  if (((VAR_7 + VAR_8) > VAR_3) ||
    (VAR_7 > VAR_3))
   VAR_9 = -VAR_0;
  break;
 case 134:
  if (((VAR_7 + VAR_8) > VAR_4) ||
    (VAR_7 > VAR_4))
   VAR_9 = -VAR_0;
  break;
 case 133:




  break;
 case 132:
  if (((VAR_7 + VAR_8) > VAR_5) ||
    (VAR_7 > VAR_5))
   VAR_9 = -VAR_0;
  break;
 case 131:
 case 130:
 case 129:
 case 128:

  break;
 default:
  FUNC_0("Invalid address space\n");
  VAR_9 = -VAR_1;
  break;
 }

 return VAR_9;
}
