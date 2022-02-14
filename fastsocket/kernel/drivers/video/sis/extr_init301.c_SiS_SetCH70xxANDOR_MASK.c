
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int dummy; } ;


 unsigned short FUNC_0 (struct SiS_Private*,unsigned short) ;
 int FUNC_1 (struct SiS_Private*,unsigned short,unsigned short) ;

void
FUNC_2(struct SiS_Private *VAR_0, unsigned short VAR_1,
  unsigned char VAR_2, unsigned short VAR_3)
{
  unsigned short VAR_4;

  VAR_4 = (FUNC_0(VAR_0, (VAR_1 & 0xFF)) & VAR_3) | VAR_2;
  FUNC_1(VAR_0, VAR_1, VAR_4);
}
