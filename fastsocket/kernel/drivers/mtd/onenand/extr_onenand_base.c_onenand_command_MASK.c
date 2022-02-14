
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int density_mask; int page_shift; int writesize; int page_mask; scalar_t__ base; int (* write_word ) (int,scalar_t__) ;} ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef int loff_t ;





 int VAR_0 ;





 int VAR_1 ;




 int FUNC_0 (struct onenand_chip*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct onenand_chip*) ;
 scalar_t__ FUNC_2 (struct onenand_chip*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct onenand_chip*) ;
 int FUNC_4 (struct onenand_chip*) ;
 int FUNC_5 (struct onenand_chip*,int) ;
 int FUNC_6 (struct onenand_chip*,int) ;
 int FUNC_7 (struct onenand_chip*,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (struct onenand_chip*,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (int,scalar_t__) ;
 int FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int,scalar_t__) ;
 int FUNC_16 (int,scalar_t__) ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct mtd_info *VAR_9, int VAR_10, loff_t VAR_11, size_t VAR_12)
{
 struct onenand_chip *VAR_13 = VAR_9->priv;
 int VAR_14, VAR_15, VAR_16;


 switch (VAR_10) {
 case 129:
 case 134:
 case 133:
 case 128:
  VAR_15 = -1;
  VAR_16 = -1;
  break;

 case 139:

  VAR_15 = VAR_11 * VAR_13->density_mask;
  VAR_16 = -1;
  break;

 case 135:
 case 136:
 case 132:
  VAR_15 = FUNC_6(VAR_13, VAR_11);
  VAR_16 = -1;
  break;

 case 138:
  VAR_10 = 131;
  VAR_15 = VAR_11 * VAR_13->density_mask;
  VAR_16 = 0;
  break;

 default:
  VAR_15 = FUNC_6(VAR_13, VAR_11);
  VAR_16 = (int) (VAR_11 - FUNC_5(VAR_13, VAR_15)) >> VAR_13->page_shift;

  if (FUNC_1(VAR_13)) {

   VAR_15 &= ~1;

   if (VAR_11 & VAR_13->writesize)
    VAR_15++;
   VAR_16 >>= 1;
  }
  VAR_16 &= VAR_13->page_mask;
  break;
 }


 if (VAR_10 == 136) {

  VAR_14 = FUNC_9(VAR_13, VAR_15);
  VAR_13->write_word(VAR_14, VAR_13->base + VAR_6);

  if (FUNC_2(VAR_13) || FUNC_1(VAR_13))

   FUNC_3(VAR_13);
  else

   FUNC_4(VAR_13);

  return 0;
 }

 if (VAR_15 != -1) {

  VAR_14 = FUNC_7(VAR_13, VAR_15);
  VAR_13->write_word(VAR_14, VAR_13->base + VAR_5);


  VAR_14 = FUNC_9(VAR_13, VAR_15);
  VAR_13->write_word(VAR_14, VAR_13->base + VAR_6);
 }

 if (VAR_16 != -1) {

  int VAR_17 = 0, VAR_18 = 0;
  int VAR_19;

  switch (VAR_10) {
  case 137:
  case 131:
  case 130:
   if (FUNC_2(VAR_13))

    VAR_19 = FUNC_3(VAR_13);
   else
    VAR_19 = FUNC_4(VAR_13);
   break;

  default:
   if (FUNC_1(VAR_13) && VAR_10 == VAR_1)
    VAR_10 = VAR_0;
   VAR_19 = FUNC_0(VAR_13);
   break;
  }


  VAR_14 = FUNC_10(VAR_16, VAR_17);
  VAR_13->write_word(VAR_14, VAR_13->base + VAR_7);


  VAR_14 = FUNC_8(VAR_19, VAR_17, VAR_18);
  VAR_13->write_word(VAR_14, VAR_13->base + VAR_8);
 }


 VAR_13->write_word(VAR_2, VAR_13->base + VAR_4);


 VAR_13->write_word(VAR_10, VAR_13->base + VAR_3);

 return 0;
}
