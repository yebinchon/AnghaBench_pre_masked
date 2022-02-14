
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_discipline {int (* check_device ) (struct dasd_device*) ;int owner; int name; } ;
struct dasd_device {int features; scalar_t__ state; scalar_t__ block; struct dasd_discipline* discipline; struct dasd_discipline* base_discipline; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 struct dasd_device* FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 struct dasd_discipline* VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_6 (struct dasd_device*) ;
 int FUNC_7 (struct ccw_device*,int ,int ) ;
 int FUNC_8 (struct dasd_device*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int ,...) ;
 int FUNC_13 (struct dasd_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;

int FUNC_16(struct ccw_device *VAR_9,
       struct dasd_discipline *VAR_10)
{
 struct dasd_discipline *VAR_11;
 struct dasd_device *VAR_12;
 int VAR_13;


 FUNC_7(VAR_9, VAR_0, 0);
 VAR_12 = FUNC_3(VAR_9);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_11 = VAR_10;
 if (VAR_12->features & VAR_1) {
    if (!VAR_7) {
   FUNC_12("%s Setting the DASD online failed because "
       "of missing DIAG discipline\n",
       FUNC_9(&VAR_9->dev));
   FUNC_4(VAR_12);
   return -VAR_6;
  }
  VAR_11 = VAR_7;
 }
 if (!FUNC_14(VAR_10->owner)) {
  FUNC_4(VAR_12);
  return -VAR_5;
 }
 if (!FUNC_14(VAR_11->owner)) {
  FUNC_10(VAR_10->owner);
  FUNC_4(VAR_12);
  return -VAR_5;
 }
 VAR_12->base_discipline = VAR_10;
 VAR_12->discipline = VAR_11;


 VAR_13 = VAR_11->check_device(VAR_12);
 if (VAR_13) {
  FUNC_12("%s Setting the DASD online with discipline %s "
      "failed with rc=%i\n",
      FUNC_9(&VAR_9->dev), VAR_11->name, VAR_13);
  FUNC_10(VAR_11->owner);
  FUNC_10(VAR_10->owner);
  FUNC_4(VAR_12);
  return VAR_13;
 }

 FUNC_8(VAR_12, VAR_4);
 if (VAR_12->state <= VAR_2) {
  FUNC_12("%s Setting the DASD online failed because of a "
      "missing discipline\n", FUNC_9(&VAR_9->dev));
  VAR_13 = -VAR_6;
  FUNC_8(VAR_12, VAR_3);
  if (VAR_12->block)
   FUNC_5(VAR_12->block);
  FUNC_4(VAR_12);
 } else
  FUNC_11("dasd_generic device %s found\n",
    FUNC_9(&VAR_9->dev));

 FUNC_15(VAR_8, FUNC_2(VAR_12));

 FUNC_6(VAR_12);
 return VAR_13;
}
