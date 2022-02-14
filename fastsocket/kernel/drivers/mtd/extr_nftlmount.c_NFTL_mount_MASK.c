
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nftl_uci1 {int EraseMark; int EraseMark1; int WearInfo; } ;
struct nftl_uci0 {int VirtUnitNum; int SpareVirtUnitNum; int ReplUnitNum; int SpareReplUnitNum; } ;
struct mtd_info {int dummy; } ;
struct TYPE_3__ {int FirstPhysicalEUN; } ;
struct TYPE_4__ {struct mtd_info* mtd; } ;
struct NFTLrecord {int nb_blocks; unsigned int* EUNtable; unsigned int* ReplUnitTable; unsigned int EraseSize; unsigned int LastFreeEUN; scalar_t__ numfreeEUNs; TYPE_1__ MediaHdr; TYPE_2__ mbd; } ;


 void* VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct NFTLrecord*,unsigned int) ;
 unsigned int VAR_6 ;
 unsigned int FUNC_1 (struct NFTLrecord*,unsigned int) ;
 scalar_t__ FUNC_2 (struct NFTLrecord*,unsigned int) ;
 int FUNC_3 (struct NFTLrecord*,unsigned int) ;
 scalar_t__ FUNC_4 (struct NFTLrecord*) ;
 int FUNC_5 (struct NFTLrecord*,unsigned int) ;
 int FUNC_6 (struct NFTLrecord*,unsigned int) ;
 void* FUNC_7 (int) ;
 unsigned int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct mtd_info*,unsigned int,int,size_t*,char*) ;
 int FUNC_10 (char*,...) ;

int FUNC_11(struct NFTLrecord *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;
 struct nftl_uci0 VAR_19;
 struct nftl_uci1 VAR_20;
 struct mtd_info *VAR_21 = VAR_7->mbd.mtd;
 size_t VAR_22;


 if (FUNC_4(VAR_7) < 0) {
  FUNC_10("Could not find valid boot record\n");
  return -1;
 }


 for (VAR_8 = 0; VAR_8 < VAR_7->nb_blocks; VAR_8++) {
  VAR_7->EUNtable[VAR_8] = VAR_1;
 }


 VAR_9 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_7->nb_blocks; VAR_15++) {

  if (VAR_7->ReplUnitTable[VAR_15] == VAR_2) {
   VAR_14 = VAR_15;
   VAR_17 = 0;
   VAR_18 = 0;

   for (;;) {

    if (FUNC_9(VAR_21,
        VAR_14 * VAR_7->EraseSize + 8, 8,
        &VAR_22, (char *)&VAR_19) < 0 ||
        FUNC_9(VAR_21,
        VAR_14 * VAR_7->EraseSize +
        VAR_6 + 8, 8,
        &VAR_22, (char *)&VAR_20) < 0) {
     VAR_7->ReplUnitTable[VAR_14] = VAR_1;
     VAR_18 = 1;
     break;
    }

    VAR_10 = FUNC_7 ((VAR_19 | VAR_19));
    VAR_11 = FUNC_7 ((VAR_19 | VAR_19));
    VAR_12 = FUNC_8 (VAR_20);
    VAR_13 = FUNC_7 ((VAR_20 | VAR_20));

    VAR_16 = !(VAR_10 >> 15);
    VAR_10 = VAR_10 & 0x7fff;


    if (VAR_13 != VAR_4 || VAR_10 >= VAR_7->nb_blocks) {
     if (VAR_17 == 0) {

      if (FUNC_2(VAR_7, VAR_14) < 0) {

       FUNC_10("Formatting block %d\n", VAR_14);
       if (FUNC_0(VAR_7, VAR_14) < 0) {

        VAR_7->ReplUnitTable[VAR_14] = VAR_3;
       } else {
        VAR_7->ReplUnitTable[VAR_14] = VAR_0;
       }
      } else {

       VAR_7->ReplUnitTable[VAR_14] = VAR_0;
      }

      goto examine_ReplUnitTable;
     } else {


      FUNC_10("Block %d: free but referenced in chain %d\n",
             VAR_14, VAR_15);
      VAR_7->ReplUnitTable[VAR_14] = VAR_1;
      VAR_18 = 1;
      break;
     }
    }


    if (VAR_17 == 0) {



     if (!VAR_16)
      goto examine_ReplUnitTable;
     VAR_9 = VAR_10;
    } else {
     if (VAR_10 != VAR_9) {
      FUNC_10("Block %d: incorrect logical block: %d expected: %d\n",
             VAR_14, VAR_10, VAR_9);


      VAR_18 = 1;
     }
     if (VAR_16) {



      if (FUNC_6(VAR_7, VAR_14) != VAR_5 ||
          VAR_11 != 0xffff) {
       FUNC_10("Block %d: incorrectly marked as first block in chain\n",
              VAR_14);


       VAR_18 = 1;
      } else {
       FUNC_10("Block %d: folding in progress - ignoring first block flag\n",
              VAR_14);
      }
     }
    }
    VAR_17++;
    if (VAR_11 == 0xffff) {

     VAR_7->ReplUnitTable[VAR_14] = VAR_1;
     break;
    } else if (VAR_11 >= VAR_7->nb_blocks) {
     FUNC_10("Block %d: referencing invalid block %d\n",
            VAR_14, VAR_11);
     VAR_18 = 1;
     VAR_7->ReplUnitTable[VAR_14] = VAR_1;
     break;
    } else if (VAR_7->ReplUnitTable[VAR_11] != VAR_2) {





     if (VAR_7->ReplUnitTable[VAR_11] == VAR_1 &&
         VAR_7->EUNtable[VAR_9] == VAR_11 &&
         FUNC_6(VAR_7, VAR_15) == VAR_5) {

      FUNC_10("Block %d: folding in progress - ignoring first block flag\n",
             VAR_11);
      VAR_7->ReplUnitTable[VAR_14] = VAR_11;
      VAR_7->EUNtable[VAR_9] = VAR_1;
     } else {
      FUNC_10("Block %d: referencing block %d already in another chain\n",
             VAR_14, VAR_11);

      VAR_18 = 1;
      VAR_7->ReplUnitTable[VAR_14] = VAR_1;
     }
     break;
    } else {

     VAR_7->ReplUnitTable[VAR_14] = VAR_11;
     VAR_14 = VAR_11;
    }
   }



   if (VAR_18) {

    FUNC_5(VAR_7, VAR_15);
   } else {
    unsigned int VAR_23, VAR_24, VAR_25;
    int VAR_26;


    VAR_26 = FUNC_6(VAR_7, VAR_15);
    if (VAR_26 == 0) {

     FUNC_10("Could read foldmark at block %d\n", VAR_15);
     FUNC_5(VAR_7, VAR_15);
    } else {
     if (VAR_26 == VAR_5)
      FUNC_3(VAR_7, VAR_15);





     VAR_23 = VAR_7->EUNtable[VAR_9];
     if (VAR_23 != VAR_1) {

      VAR_25 = FUNC_1(VAR_7, VAR_23);
      FUNC_10("Two chains at blocks %d (len=%d) and %d (len=%d)\n",
             VAR_23, VAR_25, VAR_15, VAR_17);

      if (VAR_17 >= VAR_25) {
       VAR_24 = VAR_23;
       VAR_7->EUNtable[VAR_9] = VAR_15;
      } else {
       VAR_24 = VAR_15;
      }
      FUNC_5(VAR_7, VAR_24);
     } else {
      VAR_7->EUNtable[VAR_9] = VAR_15;
     }
    }
   }
  }
 examine_ReplUnitTable:;
 }


 VAR_7->numfreeEUNs = 0;
 VAR_7->LastFreeEUN = FUNC_7(VAR_7->MediaHdr.FirstPhysicalEUN);

 for (VAR_14 = 0; VAR_14 < VAR_7->nb_blocks; VAR_14++) {
  if (VAR_7->ReplUnitTable[VAR_14] == VAR_2) {
   FUNC_10("Unreferenced block %d, formatting it\n", VAR_14);
   if (FUNC_0(VAR_7, VAR_14) < 0)
    VAR_7->ReplUnitTable[VAR_14] = VAR_3;
   else
    VAR_7->ReplUnitTable[VAR_14] = VAR_0;
  }
  if (VAR_7->ReplUnitTable[VAR_14] == VAR_0) {
   VAR_7->numfreeEUNs++;
   VAR_7->LastFreeEUN = VAR_14;
  }
 }

 return 0;
}
