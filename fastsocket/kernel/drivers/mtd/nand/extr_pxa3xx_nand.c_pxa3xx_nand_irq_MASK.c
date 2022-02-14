
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_nand_info {int cmd_complete; int state; int retcode; scalar_t__ use_dma; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pxa3xx_nand_info*,unsigned int) ;
 unsigned int FUNC_2 (struct pxa3xx_nand_info*,int ) ;
 int FUNC_3 (struct pxa3xx_nand_info*,int ,unsigned int) ;
 int FUNC_4 (struct pxa3xx_nand_info*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_16, void *VAR_17)
{
 struct pxa3xx_nand_info *VAR_18 = VAR_17;
 unsigned int VAR_19;

 VAR_19 = FUNC_2(VAR_18, VAR_4);

 if (VAR_19 & (VAR_8 | VAR_7 | VAR_9)) {
  if (VAR_19 & VAR_7)
   VAR_18->retcode = VAR_1;
  else if (VAR_19 & VAR_9)
   VAR_18->retcode = VAR_2;

  FUNC_1(VAR_18, VAR_8 | VAR_7 | VAR_9);

  if (VAR_18->use_dma) {
   VAR_18->state = VAR_11;
   FUNC_4(VAR_18, 0);
  } else {
   VAR_18->state = VAR_13;
   FUNC_0(&VAR_18->cmd_complete);
  }
 } else if (VAR_19 & VAR_10) {
  FUNC_1(VAR_18, VAR_10);
  if (VAR_18->use_dma) {
   VAR_18->state = VAR_12;
   FUNC_4(VAR_18, 1);
  } else {
   VAR_18->state = VAR_14;
   FUNC_0(&VAR_18->cmd_complete);
  }
 } else if (VAR_19 & (VAR_5 | VAR_6)) {
  if (VAR_19 & VAR_5)
   VAR_18->retcode = VAR_0;

  FUNC_1(VAR_18, VAR_5 | VAR_6);
  VAR_18->state = VAR_15;
  FUNC_0(&VAR_18->cmd_complete);
 }
 FUNC_3(VAR_18, VAR_4, VAR_19);
 return VAR_3;
}
