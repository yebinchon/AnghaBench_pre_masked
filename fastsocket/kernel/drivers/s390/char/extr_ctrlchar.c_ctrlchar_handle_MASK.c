
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct tty_struct*) ;
 unsigned int FUNC_1 (struct tty_struct*) ;
 unsigned int FUNC_2 (struct tty_struct*) ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 struct tty_struct* VAR_5 ;
 int FUNC_4 (unsigned char const) ;

unsigned int
FUNC_5(const unsigned char *VAR_6, int VAR_7, struct tty_struct *VAR_8)
{
 if ((VAR_7 < 2) || (VAR_7 > 3))
  return VAR_1;



 if ((VAR_6[0] != '^') && (VAR_6[0] != '\252'))
  return VAR_1;
 if (VAR_7 != 2)
  return VAR_1;

 switch (FUNC_4(VAR_6[1])) {
 case 'c':
  return FUNC_1(VAR_8) | VAR_0;
 case 'd':
  return FUNC_0(VAR_8) | VAR_0;
 case 'z':
  return FUNC_2(VAR_8) | VAR_0;
 }
 return VAR_1;
}
