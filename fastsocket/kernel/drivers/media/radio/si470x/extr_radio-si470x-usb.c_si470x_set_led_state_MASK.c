
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct si470x_device*,void*,int) ;

__attribute__((used)) static int FUNC_1(struct si470x_device *VAR_4,
  unsigned char VAR_5)
{
 unsigned char VAR_6[VAR_3];
 int VAR_7;

 VAR_6[0] = VAR_2;
 VAR_6[1] = VAR_1;
 VAR_6[2] = VAR_5;

 VAR_7 = FUNC_0(VAR_4, (void *) &VAR_6, sizeof(VAR_6));

 return (VAR_7 < 0) ? -VAR_0 : 0;
}
