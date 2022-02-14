
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int flags; struct dasd_block* block; } ;
struct dasd_block {scalar_t__ bdev; int open_count; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct dasd_device*) ;
 struct dasd_device* FUNC_6 (struct ccw_device*) ;
 int FUNC_7 (struct dasd_block*) ;
 int FUNC_8 (struct dasd_device*) ;
 int FUNC_9 (struct dasd_device*) ;
 int FUNC_10 (struct dasd_device*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*,int ,...) ;
 int FUNC_14 (int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int ) ;

int FUNC_19(struct ccw_device *VAR_6)
{
 struct dasd_device *VAR_7;
 struct dasd_block *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_11 = 0;
 VAR_7 = FUNC_6(VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);







 if (VAR_7->block) {
  VAR_9 = VAR_7->block->bdev ? 0 : -1;
  VAR_10 = FUNC_3(&VAR_7->block->open_count);
  if (VAR_10 > VAR_9) {
   if (VAR_10 > 0)
    FUNC_13("%s: The DASD cannot be set offline "
        "with open count %i\n",
        FUNC_11(&VAR_6->dev), VAR_10);
   else
    FUNC_13("%s: The DASD cannot be set offline "
        "while it is in use\n",
        FUNC_11(&VAR_6->dev));
   FUNC_4(VAR_0, &VAR_7->flags);
   FUNC_8(VAR_7);
   return -VAR_4;
  }
 }

 if (FUNC_17(VAR_2, &VAR_7->flags)) {





  if (FUNC_16(VAR_0, &VAR_7->flags)) {

   FUNC_8(VAR_7);
   return -VAR_4;
  } else
   FUNC_4(VAR_1, &VAR_7->flags);

 } else
  if (FUNC_17(VAR_0, &VAR_7->flags)) {

   FUNC_8(VAR_7);
   return -VAR_4;
  }






 if (FUNC_15(VAR_1, &VAR_7->flags) &&
     !FUNC_16(VAR_2, &VAR_7->flags)) {







  VAR_11 = FUNC_12(VAR_7->block->bdev);
  if (VAR_11 != 0)
   goto interrupted;


  FUNC_9(VAR_7);
  VAR_11 = FUNC_18(VAR_5,
           FUNC_2(VAR_7));
  if (VAR_11 != 0)
   goto interrupted;
 }

 FUNC_14(VAR_0, &VAR_7->flags);
 FUNC_10(VAR_7, VAR_3);

 VAR_8 = VAR_7->block;
 FUNC_5(VAR_7);




 if (VAR_8)
  FUNC_7(VAR_8);
 return 0;

interrupted:

 FUNC_4(VAR_1, &VAR_7->flags);
 FUNC_4(VAR_2, &VAR_7->flags);
 FUNC_4(VAR_0, &VAR_7->flags);
 FUNC_8(VAR_7);
 return VAR_11;
}
