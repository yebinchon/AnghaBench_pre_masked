
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int options; int (* read_word ) (scalar_t__) ;int chipsize; scalar_t__ base; int (* wait ) (struct mtd_info*,int ) ;int (* command ) (struct mtd_info*,int ,int ,int ) ;int (* write_word ) (int ,scalar_t__) ;} ;
struct mtd_info {int size; struct onenand_chip* priv; } ;
typedef int loff_t ;


 int FUNC_0 (struct onenand_chip*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct onenand_chip*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct onenand_chip*) ;
 int FUNC_3 (struct mtd_info*,int,int,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct mtd_info*,int ,int ,int ) ;
 int FUNC_6 (struct mtd_info*,int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct mtd_info *VAR_8)
{
 struct onenand_chip *VAR_9 = VAR_8->priv;
 loff_t VAR_10 = 0;
 loff_t VAR_11 = VAR_8->size;

 if (VAR_9->options & VAR_4) {

  VAR_9->write_word(0, VAR_9->base + VAR_6);

  VAR_9->command(VAR_8, VAR_2, 0, 0);


  VAR_9->wait(VAR_8, VAR_0);


  while (VAR_9->read_word(VAR_9->base + VAR_5)
      & VAR_3)
   continue;


  if (VAR_9->options & VAR_7)
   return;


  if (FUNC_2(VAR_9))
   return;


  if (FUNC_1(VAR_9) && !FUNC_0(VAR_9)) {

   VAR_10 = VAR_9->chipsize >> 1;
   VAR_11 = VAR_9->chipsize >> 1;
  }
 }

 FUNC_3(VAR_8, VAR_10, VAR_11, VAR_1);
}
