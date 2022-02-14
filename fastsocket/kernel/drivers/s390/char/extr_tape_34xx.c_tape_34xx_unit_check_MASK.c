
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tape_request {int op; int retries; } ;
struct TYPE_6__ {int block_position; } ;
struct tape_device {int* modeset_byte; TYPE_2__* cdev; TYPE_3__ blk_data; } ;
struct irb {int* ecw; } ;
typedef int __u8 ;
struct TYPE_4__ {int driver_info; } ;
struct TYPE_5__ {int dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

 int VAR_20 ;


 int VAR_21 ;





 int VAR_22 ;


 int VAR_23 ;
 int FUNC_0 (int *,char*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct tape_device*,int ) ;
 int FUNC_2 (struct tape_request*) ;
 int FUNC_3 (struct tape_device*,struct tape_request*,struct irb*,int) ;
 int FUNC_4 (struct tape_request*,int ) ;
 int FUNC_5 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_6 (struct tape_device*,struct tape_request*) ;
 int FUNC_7 (struct tape_request*) ;
 int FUNC_8 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_9 (struct tape_request*) ;
 int FUNC_10 (struct tape_device*,int ) ;

__attribute__((used)) static int
FUNC_11(struct tape_device *VAR_26, struct tape_request *VAR_27,
       struct irb *VAR_28)
{
 int VAR_29;
 __u8* VAR_30;

 VAR_29 = (*VAR_26->modeset_byte & 0x80) ? 1 : 0;
 VAR_30 = VAR_28->ecw;
 if (
  VAR_30[0] & VAR_9 &&
  VAR_30[1] & VAR_18
 ) {
  if (
   VAR_27->op == VAR_21 ||
   VAR_27->op == 128 ||
   VAR_27->op == VAR_23
  ) {

   return FUNC_4(VAR_27, -VAR_0);
  } else {
   return FUNC_3(VAR_26, VAR_27, VAR_28, -3);
  }
 }
 if ((
  VAR_30[0] == VAR_10 ||
  VAR_30[0] == VAR_13 ||
  VAR_30[0] == VAR_13 + VAR_11
 ) && (
  VAR_30[1] == VAR_12 ||
  VAR_30[1] == VAR_7 + VAR_17
 )) {
  switch (VAR_27->op) {







  case 133:
  case 134:

   return FUNC_4(VAR_27, -VAR_5);
  case 136:
   return FUNC_7(VAR_27);






  case 132:

   FUNC_1(VAR_26, 0);
   return FUNC_4(VAR_27, -VAR_1);

  case 130:

   return FUNC_4(VAR_27, 0);






  case 128:

   return FUNC_4(VAR_27, -VAR_5);
  default:
   return FUNC_4(VAR_27, 0);
  }
 }


 if (VAR_30[0] & VAR_8)
  return FUNC_7(VAR_27);

 if (VAR_30[0] & VAR_10) {




  switch (VAR_30[3]) {
  case 0x23:

   if ((VAR_30[2] & VAR_16) ||
       VAR_29)



    return FUNC_3(VAR_26, VAR_27,
        VAR_28, -4);


   FUNC_0 (&VAR_26->cdev->dev, "A read error occurred "
    "that cannot be recovered\n");
   return FUNC_4(VAR_27, -VAR_1);
  case 0x25:

   if ((VAR_30[2] & VAR_16) ||
       VAR_29)



    return FUNC_3(VAR_26, VAR_27,
        VAR_28, -5);


   FUNC_0 (&VAR_26->cdev->dev, "A write error on the "
    "tape cannot be recovered\n");
   return FUNC_4(VAR_27, -VAR_1);
  case 0x26:

   return FUNC_6(VAR_26, VAR_27);
  case 0x28:

   FUNC_0 (&VAR_26->cdev->dev, "Writing the ID-mark "
    "failed\n");
   return FUNC_4(VAR_27, -VAR_1);
  case 0x31:

   FUNC_0 (&VAR_26->cdev->dev, "Reading the tape beyond"
    " the end of the recorded area failed\n");
   return FUNC_4(VAR_27, -VAR_5);
  case 0x41:

   FUNC_0 (&VAR_26->cdev->dev, "The tape contains an "
    "incorrect block ID sequence\n");
   return FUNC_4(VAR_27, -VAR_1);
  default:



   if (VAR_26->cdev->id.driver_info == VAR_24)
    return FUNC_3(VAR_26, VAR_27,
        VAR_28, -6);
  }
 }

 if (VAR_30[0] & VAR_14)
  return FUNC_5(VAR_26, VAR_27, VAR_28);

 if (VAR_30[1] & VAR_15)
  return FUNC_8(VAR_26, VAR_27, VAR_28);


 switch (VAR_30[3]) {
 case 0x00:

  return VAR_19;
 case 0x21:




  return FUNC_7(VAR_27);
 case 0x22:





  FUNC_0 (&VAR_26->cdev->dev, "A path equipment check occurred"
   " for the tape device\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x24:





  return FUNC_9(VAR_27);
 case 0x27:






  return FUNC_7(VAR_27);
 case 0x29:





  return FUNC_4(VAR_27, -VAR_1);
 case 0x2a:




  return FUNC_7(VAR_27);
 case 0x2b:




  if (VAR_27->op == VAR_22) {

   FUNC_10(VAR_26, VAR_6);
   return FUNC_9(VAR_27);
  }

  return FUNC_3(VAR_26, VAR_27, VAR_28, VAR_30[3]);
 case 0x2c:




  return FUNC_4(VAR_27, -VAR_1);
 case 0x2d:

  if (VAR_27->op == VAR_21)
   return FUNC_4(VAR_27, -VAR_1);

  return FUNC_3(VAR_26, VAR_27, VAR_28, VAR_30[3]);
 case 0x2e:





  FUNC_0 (&VAR_26->cdev->dev, "The tape unit cannot process "
   "the tape format\n");
  return FUNC_4(VAR_27, -VAR_2);
 case 0x30:

  FUNC_0 (&VAR_26->cdev->dev, "The tape medium is write-"
   "protected\n");
  return FUNC_4(VAR_27, -VAR_0);
 case 0x32:

  FUNC_0 (&VAR_26->cdev->dev, "The tape does not have the "
   "required tape tension\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x33:




  FUNC_0 (&VAR_26->cdev->dev, "The tape unit failed to load"
   " the cartridge\n");
  FUNC_1(VAR_26, 0);
  return FUNC_4(VAR_27, -VAR_1);
 case 0x34:




  FUNC_0 (&VAR_26->cdev->dev, "Automatic unloading of the tape"
   " cartridge failed\n");
  if (VAR_27->op == VAR_22)
   return FUNC_4(VAR_27, -VAR_1);
  return FUNC_3(VAR_26, VAR_27, VAR_28, VAR_30[3]);
 case 0x35:







  FUNC_0 (&VAR_26->cdev->dev, "An equipment check has occurred"
   " on the tape unit\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x36:
  if (VAR_26->cdev->id.driver_info == VAR_25)

   return FUNC_4(VAR_27, -VAR_1);

  return FUNC_3(VAR_26, VAR_27, VAR_28, VAR_30[3]);
 case 0x37:




  FUNC_0 (&VAR_26->cdev->dev, "The tape information states an"
   " incorrect length\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x38:




  if (VAR_27->op==128 ||
      VAR_27->op==VAR_21 ||
      VAR_27->op==VAR_23)
   return FUNC_4(VAR_27, -VAR_5);
  return FUNC_4(VAR_27, -VAR_1);
 case 0x39:

  return FUNC_4(VAR_27, -VAR_1);
 case 0x3a:

  FUNC_0 (&VAR_26->cdev->dev, "The tape unit is not ready\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x3b:

  FUNC_0 (&VAR_26->cdev->dev, "The tape medium has been "
   "rewound or unloaded manually\n");
  FUNC_1(VAR_26, 0);
  return FUNC_4(VAR_27, -VAR_1);
 case 0x42:




  FUNC_0 (&VAR_26->cdev->dev, "The tape subsystem is running "
   "in degraded mode\n");
  return FUNC_7(VAR_27);
 case 0x43:

  FUNC_1(VAR_26, 0);
  FUNC_10(VAR_26, VAR_6);

  if (VAR_30[1] & VAR_12) {
   switch(VAR_27->op) {
    case 137:
    case 129:
    case 135:
    case 131:
     return FUNC_2(VAR_27);
     break;
    default:
     break;
   }
  }
  return FUNC_4(VAR_27, -VAR_4);
 case 0x44:

  if (VAR_27->op != VAR_20 && VAR_27->op != 132)

   return FUNC_3(VAR_26, VAR_27,
       VAR_28, VAR_30[3]);
  return FUNC_4(VAR_27, -VAR_1);
 case 0x45:

  FUNC_0 (&VAR_26->cdev->dev, "The tape unit is already "
   "assigned\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x46:





  FUNC_0 (&VAR_26->cdev->dev, "The tape unit is not online\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x47:

  FUNC_0 (&VAR_26->cdev->dev, "The control unit has fenced "
   "access to the tape volume\n");
  FUNC_1(VAR_26, 0);
  return FUNC_4(VAR_27, -VAR_1);
 case 0x48:

  return FUNC_7(VAR_27);
 case 0x49:

  FUNC_0 (&VAR_26->cdev->dev, "A parity error occurred on the "
   "tape bus\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x4a:

  FUNC_0 (&VAR_26->cdev->dev, "I/O error recovery failed on "
   "the tape control unit\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x4b:




  FUNC_0 (&VAR_26->cdev->dev, "The tape unit requires a "
   "firmware update\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x4c:




  return FUNC_7(VAR_27);
 case 0x4d:
  if (VAR_26->cdev->id.driver_info == VAR_25)





   return FUNC_7(VAR_27);

  return FUNC_3(VAR_26, VAR_27, VAR_28, VAR_30[3]);
 case 0x4e:
  if (VAR_26->cdev->id.driver_info == VAR_25) {





   FUNC_0 (&VAR_26->cdev->dev, "The maximum block size"
    " for buffered mode is exceeded\n");
   return FUNC_4(VAR_27, -VAR_3);
  }

  return FUNC_3(VAR_26, VAR_27, VAR_28, VAR_30[3]);
 case 0x50:






  return FUNC_7(VAR_27);
 case 0x51:






  return FUNC_7(VAR_27);
 case 0x52:

  if (VAR_27->op == VAR_22) {
   FUNC_10(VAR_26, VAR_6);
   FUNC_1(VAR_26, 0);
   return FUNC_9(VAR_27);
  }
  return FUNC_3(VAR_26, VAR_27, VAR_28, VAR_30[3]);
 case 0x53:

  return FUNC_7(VAR_27);
 case 0x54:

  return FUNC_7(VAR_27);
 case 0x55:

  FUNC_0 (&VAR_26->cdev->dev, "A channel interface error cannot be"
   " recovered\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x56:

  FUNC_0 (&VAR_26->cdev->dev, "A channel protocol error "
   "occurred\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x57:
  if (VAR_26->cdev->id.driver_info == VAR_24) {

   return FUNC_7(VAR_27);
  } else {

   return FUNC_7(VAR_27);
  }
 case 0x5a:




  FUNC_0 (&VAR_26->cdev->dev, "The tape unit does not support "
   "the tape length\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x5b:

  if (VAR_30[1] & VAR_7)

   return FUNC_7(VAR_27);
  FUNC_0 (&VAR_26->cdev->dev, "The tape unit does not support"
   " format 3480 XF\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x5c:

  FUNC_0 (&VAR_26->cdev->dev, "The tape unit does not support tape "
   "format 3480-2 XF\n");
  return FUNC_4(VAR_27, -VAR_1);
 case 0x5d:

  FUNC_0 (&VAR_26->cdev->dev, "The tape unit does not support"
   " the current tape length\n");
  return FUNC_4(VAR_27, -VAR_2);
 case 0x5e:

  FUNC_0 (&VAR_26->cdev->dev, "The tape unit does not support"
   " the compaction algorithm\n");
  return FUNC_4(VAR_27, -VAR_2);


 case 0x23:
 case 0x25:
 case 0x26:
 case 0x28:
 case 0x31:
 case 0x40:
 case 0x41:

 default:
  return FUNC_3(VAR_26, VAR_27, VAR_28, VAR_30[3]);
 }
}
