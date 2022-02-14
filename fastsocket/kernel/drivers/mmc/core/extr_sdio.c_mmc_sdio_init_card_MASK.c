
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mmc_host {int ocr; struct mmc_card* card; int claimed; } ;
struct TYPE_4__ {int * type; } ;
struct TYPE_3__ {scalar_t__ vendor; scalar_t__ device; } ;
struct mmc_card {scalar_t__ type; int host; TYPE_2__ dev; TYPE_1__ cis; int rca; int raw_cid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mmc_card*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct mmc_card*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 struct mmc_card* FUNC_5 (struct mmc_host*,int *) ;
 int FUNC_6 (struct mmc_card*) ;
 int FUNC_7 (struct mmc_host*) ;
 scalar_t__ FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (struct mmc_card*) ;
 int FUNC_10 (struct mmc_host*,int,int ,int *) ;
 int FUNC_11 (struct mmc_host*,struct mmc_card*) ;
 int FUNC_12 (struct mmc_card*) ;
 int FUNC_13 (struct mmc_host*,struct mmc_card*,int ) ;
 int FUNC_14 (struct mmc_card*) ;
 int FUNC_15 (struct mmc_card*) ;
 int FUNC_16 (struct mmc_host*,int,int*) ;
 int FUNC_17 (struct mmc_host*,int *) ;
 int FUNC_18 (struct mmc_host*,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct mmc_host*,int ) ;
 int FUNC_21 (struct mmc_host*,int ) ;
 int VAR_5 ;
 int FUNC_22 (struct mmc_card*) ;
 int FUNC_23 (struct mmc_card*) ;
 int FUNC_24 (struct mmc_card*) ;
 int FUNC_25 (struct mmc_card*) ;
 int FUNC_26 (struct mmc_card*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_27(struct mmc_host *VAR_7, u32 VAR_8,
         struct mmc_card *VAR_9)
{
 struct mmc_card *VAR_10;
 int VAR_11;

 FUNC_0(!VAR_7);
 FUNC_3(!VAR_7->claimed);




 VAR_11 = FUNC_16(VAR_7, VAR_7->ocr, &VAR_8);
 if (VAR_11)
  goto err;




 if (FUNC_8(VAR_7)) {
  VAR_11 = FUNC_21(VAR_7, VAR_6);
  if (VAR_11)
   goto err;
 }




 VAR_10 = FUNC_5(VAR_7, ((void*)0));
 if (FUNC_1(VAR_10)) {
  VAR_11 = FUNC_2(VAR_10);
  goto err;
 }

 VAR_11 = FUNC_10(VAR_7, VAR_7->ocr & VAR_8, VAR_10->raw_cid, ((void*)0));

 if (!VAR_11) {
  VAR_10->type = VAR_4;

  if (VAR_9 && (VAR_9->type != VAR_4 ||
      FUNC_4(VAR_10->raw_cid, VAR_9->raw_cid, sizeof(VAR_10->raw_cid)) != 0)) {
   FUNC_9(VAR_10);
   return -VAR_0;
  }
 } else {
  VAR_10->type = VAR_3;

  if (VAR_9 && VAR_9->type != VAR_3) {
   FUNC_9(VAR_10);
   return -VAR_0;
  }
 }




 if (!FUNC_8(VAR_7)) {
  VAR_11 = FUNC_17(VAR_7, &VAR_10->rca);
  if (VAR_11)
   goto remove;

  FUNC_18(VAR_7, VAR_1);
 }




 if (!VAR_9 && VAR_10->type == VAR_4) {
  VAR_11 = FUNC_11(VAR_7, VAR_10);
  if (VAR_11)
   return VAR_11;

  FUNC_6(VAR_10);
 }




 if (!FUNC_8(VAR_7)) {
  VAR_11 = FUNC_15(VAR_10);
  if (VAR_11)
   goto remove;
 }




 VAR_11 = FUNC_25(VAR_10);
 if (VAR_11)
  goto remove;




 VAR_11 = FUNC_26(VAR_10);
 if (VAR_11)
  goto remove;

 if (VAR_9) {
  int VAR_12 = (VAR_10->cis.vendor == VAR_9->cis.vendor &&
       VAR_10->cis.device == VAR_9->cis.device);
  FUNC_9(VAR_10);
  if (!VAR_12)
   return -VAR_0;

  VAR_10 = VAR_9;
  return 0;
 }

 if (VAR_10->type == VAR_4) {
  VAR_11 = FUNC_13(VAR_7, VAR_10, VAR_9 != ((void*)0));

  if (VAR_11) {
   FUNC_7(VAR_7);
   if (FUNC_8(VAR_7))

    FUNC_21(VAR_7, VAR_6);
   VAR_10->type = VAR_3;
  } else
   VAR_10->dev.type = &VAR_5;
 }




 VAR_11 = FUNC_22(VAR_10);
 if (VAR_11)
  goto remove;




 VAR_11 = FUNC_24(VAR_10);
 if (VAR_11 > 0)
  FUNC_12(VAR_10);
 else if (VAR_11)
  goto remove;




 FUNC_20(VAR_7, FUNC_14(VAR_10));




 VAR_11 = FUNC_23(VAR_10);
 if (VAR_11 > 0)
  FUNC_19(VAR_10->host, VAR_2);
 else if (VAR_11)
  goto remove;

 if (!VAR_9)
  VAR_7->card = VAR_10;
 return 0;

remove:
 if (!VAR_9)
  FUNC_9(VAR_10);

err:
 return VAR_11;
}
