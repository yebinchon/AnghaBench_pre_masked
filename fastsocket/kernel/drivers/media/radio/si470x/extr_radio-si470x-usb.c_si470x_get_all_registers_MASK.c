
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int * registers; } ;
typedef int buf ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct si470x_device*,void*,int) ;

__attribute__((used)) static int FUNC_2(struct si470x_device *VAR_5)
{
 unsigned char VAR_6[VAR_2];
 int VAR_7;
 unsigned char VAR_8;

 VAR_6[0] = VAR_1;

 VAR_7 = FUNC_1(VAR_5, (void *) &VAR_6, sizeof(VAR_6));

 if (VAR_7 >= 0)
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
   VAR_5->registers[VAR_8] = FUNC_0(
    &VAR_6[VAR_8 * VAR_4 + 1]);

 return (VAR_7 < 0) ? -VAR_0 : 0;
}
