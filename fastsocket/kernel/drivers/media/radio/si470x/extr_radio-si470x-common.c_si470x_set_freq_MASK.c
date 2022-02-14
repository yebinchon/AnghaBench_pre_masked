
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int* registers; } ;


 double VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct si470x_device*,unsigned short) ;

int FUNC_1(struct si470x_device *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 unsigned short VAR_8;


 switch ((VAR_4->registers[VAR_1] & VAR_3) >> 4) {

 case 0:
  VAR_6 = 0.200 * VAR_0; break;

 case 1:
  VAR_6 = 0.100 * VAR_0; break;

 default:
  VAR_6 = 0.050 * VAR_0; break;
 };


 switch ((VAR_4->registers[VAR_1] & VAR_2) >> 6) {

 case 0:
  VAR_7 = 87.5 * VAR_0; break;

 default:
  VAR_7 = 76 * VAR_0; break;

 case 2:
  VAR_7 = 76 * VAR_0; break;
 };


 VAR_8 = (VAR_5 - VAR_7) / VAR_6;

 return FUNC_0(VAR_4, VAR_8);
}
