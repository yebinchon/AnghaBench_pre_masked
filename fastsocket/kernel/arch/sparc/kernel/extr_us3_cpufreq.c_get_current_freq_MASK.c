
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;



 unsigned long VAR_0 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned int VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_1) / 1000;
 unsigned long VAR_4;

 switch (VAR_2 & VAR_0) {
 case 130:
  VAR_4 = VAR_3 / 1;
  break;
 case 129:
  VAR_4 = VAR_3 / 2;
  break;
 case 128:
  VAR_4 = VAR_3 / 32;
  break;
 default:
  FUNC_0();
 };

 return VAR_4;
}
