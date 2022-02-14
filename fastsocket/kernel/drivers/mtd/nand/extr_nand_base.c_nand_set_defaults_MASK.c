
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wq; int lock; } ;
struct nand_chip {int chip_delay; TYPE_1__* controller; TYPE_1__ hwcontrol; scalar_t__ scan_bbt; scalar_t__ verify_buf; scalar_t__ read_buf; scalar_t__ write_buf; scalar_t__ block_markbad; scalar_t__ block_bad; scalar_t__ read_word; scalar_t__ read_byte; scalar_t__ select_chip; int * waitfunc; int * cmdfunc; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_15, int VAR_16)
{

 if (!VAR_15->chip_delay)
  VAR_15->chip_delay = 20;


 if (VAR_15->cmdfunc == ((void*)0))
  VAR_15->cmdfunc = VAR_1;


 if (VAR_15->waitfunc == ((void*)0))
  VAR_15->waitfunc = VAR_12;

 if (!VAR_15->select_chip)
  VAR_15->select_chip = VAR_9;
 if (!VAR_15->read_byte)
  VAR_15->read_byte = VAR_16 ? VAR_7 : VAR_6;
 if (!VAR_15->read_word)
  VAR_15->read_word = VAR_8;
 if (!VAR_15->block_bad)
  VAR_15->block_bad = VAR_0;
 if (!VAR_15->block_markbad)
  VAR_15->block_markbad = VAR_3;
 if (!VAR_15->write_buf)
  VAR_15->write_buf = VAR_16 ? VAR_14 : VAR_13;
 if (!VAR_15->read_buf)
  VAR_15->read_buf = VAR_16 ? VAR_5 : VAR_4;
 if (!VAR_15->verify_buf)
  VAR_15->verify_buf = VAR_16 ? VAR_11 : VAR_10;
 if (!VAR_15->scan_bbt)
  VAR_15->scan_bbt = VAR_2;

 if (!VAR_15->controller) {
  VAR_15->controller = &VAR_15->hwcontrol;
  FUNC_1(&VAR_15->controller->lock);
  FUNC_0(&VAR_15->controller->wq);
 }

}
