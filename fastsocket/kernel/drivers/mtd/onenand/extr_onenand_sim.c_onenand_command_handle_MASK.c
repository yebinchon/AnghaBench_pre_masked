
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int chipsize; int page_shift; scalar_t__ base; int erase_shift; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long FUNC_0 (struct onenand_chip*,int) ;
 int FUNC_1 (struct onenand_chip*,int,int,unsigned long) ;
 int FUNC_2 (struct onenand_chip*,int) ;
 int FUNC_3 (struct onenand_chip*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct onenand_chip *VAR_8, int VAR_9)
{
 unsigned long VAR_10 = 0;
 int VAR_11 = -1, VAR_12 = -1, VAR_13 = -1;
 int VAR_14 = 0;

 switch (VAR_9) {
 case 129:
 case 131:
 case 130:
 case 128:
  FUNC_2(VAR_8, VAR_9);
  break;

 case 132:

  return;

 default:
  VAR_11 = (int) FUNC_4(VAR_8->base + VAR_5);
  if (VAR_11 & (1 << VAR_3)) {
   VAR_11 &= ~(1 << VAR_3);

   VAR_11 += VAR_8->chipsize >> (VAR_8->erase_shift + 1);
  }
  if (VAR_9 == VAR_2)
   break;

  VAR_12 = (int) FUNC_4(VAR_8->base + VAR_6);
  VAR_12 = (VAR_12 >> VAR_4);
  VAR_13 = (int) FUNC_4(VAR_8->base + VAR_7);
  VAR_13 >>= VAR_1;
  VAR_13 &= VAR_0;
  VAR_14 = (VAR_13 == VAR_0) ? 1 : 0;
  break;
 }

 if (VAR_11 != -1)
  VAR_10 = FUNC_0(VAR_8, VAR_11);

 if (VAR_12 != -1)
  VAR_10 += VAR_12 << VAR_8->page_shift;

 FUNC_1(VAR_8, VAR_9, VAR_14, VAR_10);

 FUNC_3(VAR_8, VAR_9);
}
