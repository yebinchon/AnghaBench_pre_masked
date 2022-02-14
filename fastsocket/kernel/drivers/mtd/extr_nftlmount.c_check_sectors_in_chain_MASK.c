
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nftl_bci {unsigned int Status; unsigned int Status1; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {struct mtd_info* mtd; } ;
struct NFTLrecord {unsigned int EraseSize; unsigned int* ReplUnitTable; unsigned int nb_blocks; TYPE_1__ mbd; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

 void* VAR_2 ;
 int FUNC_0 (struct NFTLrecord*,unsigned int,unsigned int,int ) ;
 int FUNC_1 (struct nftl_bci*,int,int) ;
 scalar_t__ FUNC_2 (struct mtd_info*,unsigned int,int,size_t*,char*) ;
 int FUNC_3 (struct mtd_info*,unsigned int,int,size_t*,char*) ;
 int FUNC_4 (char*,unsigned int,...) ;

__attribute__((used)) static void FUNC_5(struct NFTLrecord *VAR_3, unsigned int VAR_4)
{
 struct mtd_info *VAR_5 = VAR_3->mbd.mtd;
 unsigned int VAR_6, VAR_7, VAR_8;
 struct nftl_bci VAR_9;
 int VAR_10;
 size_t VAR_11;

 VAR_10 = VAR_3->EraseSize / VAR_1;
 VAR_6 = VAR_4;
 for (;;) {
  for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
   if (FUNC_2(VAR_5,
       VAR_6 * VAR_3->EraseSize + VAR_7 * VAR_1,
       8, &VAR_11, (char *)&VAR_9) < 0)
    VAR_8 = VAR_2;
   else
    VAR_8 = VAR_9.Status | VAR_9.Status1;

   switch(VAR_8) {
   case 128:


    if (FUNC_1(&VAR_9, 0xff, 8) != 0 ||
        FUNC_0(VAR_3, VAR_6 * VAR_3->EraseSize + VAR_7 * VAR_1,
             VAR_1, 0) != 0) {
     FUNC_4("Incorrect free sector %d in block %d: "
            "marking it as ignored\n",
            VAR_7, VAR_6);


     VAR_9.Status = VAR_2;
     VAR_9.Status1 = VAR_2;
     FUNC_3(VAR_5, VAR_6 *
             VAR_3->EraseSize +
             VAR_7 * VAR_1, 8,
             &VAR_11, (char *)&VAR_9);
    }
    break;
   default:
    break;
   }
  }


  VAR_6 = VAR_3->ReplUnitTable[VAR_6];
  if (!(VAR_6 == VAR_0 || VAR_6 < VAR_3->nb_blocks))
   FUNC_4("incorrect ReplUnitTable[] : %d\n", VAR_6);
  if (VAR_6 == VAR_0 || VAR_6 >= VAR_3->nb_blocks)
   break;
 }
}
