
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb710_chip {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct cb710_chip*,unsigned int) ;
 int FUNC_1 (struct cb710_chip*,unsigned int) ;
 int FUNC_2 (struct cb710_chip*,unsigned int) ;

void FUNC_3(struct cb710_chip *VAR_6, unsigned VAR_7)
{
 if (!(VAR_7 & VAR_5))
  VAR_7 = VAR_4;
 if (!(VAR_7 & VAR_3))
  VAR_7 |= VAR_2;

 if (VAR_7 & VAR_1)
  FUNC_1(VAR_6, VAR_7);
 if (VAR_7 & VAR_0)
  FUNC_0(VAR_6, VAR_7);
 if (VAR_7 & VAR_2)
  FUNC_2(VAR_6, VAR_7);
}
