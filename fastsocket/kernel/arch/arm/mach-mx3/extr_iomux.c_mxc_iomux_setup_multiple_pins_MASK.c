
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int,char const*) ;
 int FUNC_1 (unsigned int*,int) ;

int FUNC_2(unsigned int *VAR_1, unsigned VAR_2,
  const char *VAR_3)
{
 unsigned int *VAR_4 = VAR_1;
 int VAR_5;
 int VAR_6 = -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = FUNC_0(*VAR_4, VAR_3);
  if (VAR_6)
   goto setup_error;
  VAR_4++;
 }
 return 0;

setup_error:
 FUNC_1(VAR_1, VAR_5);
 return VAR_6;
}
