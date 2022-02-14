
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int* registers; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct si470x_device*,size_t) ;

int FUNC_1(struct si470x_device *VAR_6)
{
 int VAR_7;


 VAR_6->registers[VAR_4] &= ~VAR_5;
 VAR_7 = FUNC_0(VAR_6, VAR_4);
 if (VAR_7 < 0)
  goto done;


 VAR_6->registers[VAR_0] &= ~VAR_2;

 VAR_6->registers[VAR_0] |= VAR_3 | VAR_1;
 VAR_7 = FUNC_0(VAR_6, VAR_0);

done:
 return VAR_7;
}
