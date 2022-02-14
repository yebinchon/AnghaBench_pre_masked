
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nftl_uci1 {int EraseMark; int EraseMark1; unsigned int WearInfo; } ;
struct mtd_info {int (* block_markbad ) (struct mtd_info*,int) ;int (* erase ) (struct mtd_info*,struct erase_info*) ;} ;
struct erase_info {int addr; int len; scalar_t__ state; struct mtd_info* mtd; } ;
struct TYPE_2__ {struct mtd_info* mtd; } ;
struct NFTLrecord {int EraseSize; TYPE_1__ mbd; struct erase_info instr; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct NFTLrecord*,int,int,int) ;
 void* FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct erase_info*,int ,int) ;
 scalar_t__ FUNC_6 (struct mtd_info*,scalar_t__,int,size_t*,char*) ;
 scalar_t__ FUNC_7 (struct mtd_info*,scalar_t__,int,size_t*,char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct mtd_info*,struct erase_info*) ;
 int FUNC_10 (struct mtd_info*,int) ;

int FUNC_11(struct NFTLrecord *VAR_3, int VAR_4)
{
 size_t VAR_5;
 unsigned int VAR_6, VAR_7;
 struct nftl_uci1 VAR_8;
 struct erase_info *VAR_9 = &VAR_3->instr;
 struct mtd_info *VAR_10 = VAR_3->mbd.mtd;


 if (FUNC_6(VAR_10, VAR_4 * VAR_3->EraseSize + VAR_2 + 8,
     8, &VAR_5, (char *)&VAR_8) < 0)
  goto default_uci1;

 VAR_7 = FUNC_3 ((VAR_8.EraseMark | VAR_8.EraseMark1));
 if (VAR_7 != VAR_0) {
 default_uci1:
  VAR_8.EraseMark = FUNC_1(VAR_0);
  VAR_8.EraseMark1 = FUNC_1(VAR_0);
  VAR_8.WearInfo = FUNC_2(0);
 }

 FUNC_5(VAR_9, 0, sizeof(struct erase_info));


 VAR_9->mtd = VAR_3->mbd.mtd;
 VAR_9->addr = VAR_4 * VAR_3->EraseSize;
 VAR_9->len = VAR_3->EraseSize;
 VAR_10->erase(VAR_10, VAR_9);

 if (VAR_9->state == VAR_1) {
  FUNC_8("Error while formatting block %d\n", VAR_4);
  goto fail;
 }


  VAR_6 = FUNC_4(VAR_8.WearInfo);
  VAR_6++;


  if (VAR_6 == 0)
   VAR_6 = 1;




  if (FUNC_0(VAR_3, VAR_9->addr, VAR_3->EraseSize, 1) != 0)
   goto fail;

  VAR_8.WearInfo = FUNC_4(VAR_6);
  if (FUNC_7(VAR_10, VAR_4 * VAR_3->EraseSize + VAR_2 +
       8, 8, &VAR_5, (char *)&VAR_8) < 0)
   goto fail;
  return 0;
fail:


 VAR_3->mbd.mtd->block_markbad(VAR_3->mbd.mtd, VAR_9->addr);
 return -1;
}
