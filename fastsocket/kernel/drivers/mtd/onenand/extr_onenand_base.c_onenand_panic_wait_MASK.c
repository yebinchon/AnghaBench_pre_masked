
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {unsigned int (* read_word ) (scalar_t__) ;scalar_t__ base; } ;
struct mtd_info {struct onenand_chip* priv; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_2->priv;
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 2000; VAR_5++) {
  VAR_4 = VAR_3->read_word(VAR_3->base + VAR_1);
  if (VAR_4 & VAR_0)
   break;
  FUNC_1(10);
 }
}
