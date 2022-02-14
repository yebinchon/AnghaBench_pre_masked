
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {char* name; int writebufsize; int writesize; int flags; int _read; int size; int type; int owner; struct bcm47xxsflash* priv; } ;
struct bcm47xxsflash {int size; struct mtd_info mtd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct bcm47xxsflash *VAR_4)
{
 struct mtd_info *VAR_5 = &VAR_4->mtd;

 VAR_5->priv = VAR_4;
 VAR_5->name = "bcm47xxsflash";
 VAR_5->owner = VAR_2;
 VAR_5->type = VAR_1;
 VAR_5->size = VAR_4->size;
 VAR_5->_read = VAR_3;


 VAR_5->flags = VAR_0;
 VAR_5->writebufsize = VAR_5->writesize = 1;
}
