
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int * registers; } ;
typedef int buf ;


 int VAR_0 ;
 unsigned char FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (struct si470x_device*,void*,int) ;

int FUNC_3(struct si470x_device *VAR_2, int VAR_3)
{
 unsigned char VAR_4[VAR_1];
 int VAR_5;

 VAR_4[0] = FUNC_0(VAR_3);

 VAR_5 = FUNC_2(VAR_2, (void *) &VAR_4, sizeof(VAR_4));

 if (VAR_5 >= 0)
  VAR_2->registers[VAR_3] = FUNC_1(&VAR_4[1]);

 return (VAR_5 < 0) ? -VAR_0 : 0;
}
