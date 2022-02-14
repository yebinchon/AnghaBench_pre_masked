
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

 unsigned int VAR_1 ;



__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 switch (VAR_3 & VAR_1) {
 case 128:
  VAR_4 = (VAR_2 + VAR_0 - 1) / VAR_0;
  break;
 case 130:
  VAR_4 = VAR_2 / VAR_0;
  break;
 case 129:
 default:
  VAR_4 = (VAR_2 + VAR_0 / 2) / VAR_0;
  break;
 }
 return VAR_4;
}
