
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int* registers; } ;


 double VAR_0 ;
 size_t VAR_1 ;
 unsigned short VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct si470x_device*,size_t) ;

__attribute__((used)) static int FUNC_1(struct si470x_device *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 unsigned short VAR_10;
 int VAR_11;


 switch ((VAR_6->registers[VAR_3] & VAR_5) >> 4) {

 case 0:
  VAR_8 = 0.200 * VAR_0; break;

 case 1:
  VAR_8 = 0.100 * VAR_0; break;

 default:
  VAR_8 = 0.050 * VAR_0; break;
 };


 switch ((VAR_6->registers[VAR_3] & VAR_4) >> 6) {

 case 0:
  VAR_9 = 87.5 * VAR_0; break;

 default:
  VAR_9 = 76 * VAR_0; break;

 case 2:
  VAR_9 = 76 * VAR_0; break;
 };


 VAR_11 = FUNC_0(VAR_6, VAR_1);
 VAR_10 = VAR_6->registers[VAR_1] & VAR_2;


 *VAR_7 = VAR_10 * VAR_8 + VAR_9;

 return VAR_11;
}
