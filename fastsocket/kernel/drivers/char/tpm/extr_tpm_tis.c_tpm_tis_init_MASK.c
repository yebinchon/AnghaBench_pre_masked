
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {unsigned int irq; scalar_t__ iobase; int list; int locality; TYPE_1__ miscdev; int int_queue; int read_queue; void* timeout_d; void* timeout_c; void* timeout_b; void* timeout_a; } ;
struct tpm_chip {int dev; TYPE_2__ vendor; } ;
struct device {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int,struct tpm_chip*) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_15 ;
 int FUNC_11 (scalar_t__) ;
 unsigned int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int,scalar_t__) ;
 int FUNC_16 (int,scalar_t__) ;
 scalar_t__ VAR_16 ;
 int FUNC_17 (int *,int *) ;
 void* FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int,int ,int ,int ,struct tpm_chip*) ;
 scalar_t__ FUNC_20 (struct tpm_chip*,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_23 (struct tpm_chip*) ;
 int FUNC_24 (struct tpm_chip*) ;
 int FUNC_25 (struct tpm_chip*) ;
 struct tpm_chip* FUNC_26 (struct device*,int *) ;
 int FUNC_27 (int ) ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_28(struct device *VAR_22, resource_size_t VAR_23,
   resource_size_t VAR_24, unsigned int VAR_25)
{
 u32 VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30;
 struct tpm_chip *VAR_31;

 if (!(VAR_31 = FUNC_26(VAR_22, &VAR_21)))
  return -VAR_1;

 VAR_31->vendor.iobase = FUNC_13(VAR_23, VAR_24);
 if (!VAR_31->vendor.iobase) {
  VAR_29 = -VAR_0;
  goto out_err;
 }


 VAR_31->vendor.timeout_a = FUNC_18(VAR_4);
 VAR_31->vendor.timeout_b = FUNC_18(VAR_3);
 VAR_31->vendor.timeout_c = FUNC_18(VAR_4);
 VAR_31->vendor.timeout_d = FUNC_18(VAR_4);

 if (FUNC_20(VAR_31, 0) != 0) {
  VAR_29 = -VAR_1;
  goto out_err;
 }

 VAR_26 = FUNC_11(VAR_31->vendor.iobase + FUNC_1(0));

 FUNC_8(VAR_22,
   "1.2 TPM (device-id 0x%X, rev-id %d)\n",
   VAR_26 >> 16, FUNC_12(VAR_31->vendor.iobase + FUNC_6(0)));

 if (VAR_16)
  FUNC_8(VAR_22, "Intel iTPM workaround enabled\n");



 VAR_27 =
     FUNC_11(VAR_31->vendor.iobase +
       FUNC_2(VAR_31->vendor.locality));
 FUNC_7(VAR_22, "TPM interface capabilities (0x%x):\n",
  VAR_27);
 if (VAR_27 & VAR_6)
  FUNC_7(VAR_22, "\tBurst Count Static\n");
 if (VAR_27 & VAR_7)
  FUNC_7(VAR_22, "\tCommand Ready Int Support\n");
 if (VAR_27 & VAR_9)
  FUNC_7(VAR_22, "\tInterrupt Edge Falling\n");
 if (VAR_27 & VAR_10)
  FUNC_7(VAR_22, "\tInterrupt Edge Rising\n");
 if (VAR_27 & VAR_12)
  FUNC_7(VAR_22, "\tInterrupt Level Low\n");
 if (VAR_27 & VAR_11)
  FUNC_7(VAR_22, "\tInterrupt Level High\n");
 if (VAR_27 & VAR_13)
  FUNC_7(VAR_22, "\tLocality Change Int Support\n");
 if (VAR_27 & VAR_14)
  FUNC_7(VAR_22, "\tSts Valid Int Support\n");
 if (VAR_27 & VAR_8)
  FUNC_7(VAR_22, "\tData Avail Int Support\n");


 FUNC_10(&VAR_31->vendor.read_queue);
 FUNC_10(&VAR_31->vendor.int_queue);

 VAR_28 =
     FUNC_11(VAR_31->vendor.iobase +
       FUNC_3(VAR_31->vendor.locality));

 VAR_28 |= VAR_7
     | VAR_13 | VAR_8
     | VAR_14;

 FUNC_15(VAR_28,
    VAR_31->vendor.iobase +
    FUNC_3(VAR_31->vendor.locality));
 if (VAR_15)
  VAR_31->vendor.irq = VAR_25;
 if (VAR_15 && !VAR_31->vendor.irq) {
  VAR_31->vendor.irq =
      FUNC_12(VAR_31->vendor.iobase +
       FUNC_5(VAR_31->vendor.locality));

  for (VAR_30 = 3; VAR_30 < 16 && VAR_31->vendor.irq == 0; VAR_30++) {
   FUNC_16(VAR_30, VAR_31->vendor.iobase +
        FUNC_5(VAR_31->vendor.locality));
   if (FUNC_19
       (VAR_30, VAR_19, VAR_2,
        VAR_31->vendor.miscdev.name, VAR_31) != 0) {
    FUNC_8(VAR_31->dev,
      "Unable to request irq: %d for probe\n",
      VAR_30);
    continue;
   }


   FUNC_15(FUNC_11
      (VAR_31->vendor.iobase +
       FUNC_4(VAR_31->vendor.locality)),
      VAR_31->vendor.iobase +
      FUNC_4(VAR_31->vendor.locality));


   FUNC_15(VAR_28 | VAR_5,
      VAR_31->vendor.iobase +
      FUNC_3(VAR_31->vendor.locality));


   FUNC_24(VAR_31);


   FUNC_15(VAR_28,
      VAR_31->vendor.iobase +
      FUNC_3(VAR_31->vendor.locality));
   FUNC_9(VAR_30, VAR_31);
  }
 }
 if (VAR_31->vendor.irq) {
  FUNC_16(VAR_31->vendor.irq,
    VAR_31->vendor.iobase +
    FUNC_5(VAR_31->vendor.locality));
  if (FUNC_19
      (VAR_31->vendor.irq, VAR_18, VAR_2,
       VAR_31->vendor.miscdev.name, VAR_31) != 0) {
   FUNC_8(VAR_31->dev,
     "Unable to request irq: %d for use\n",
     VAR_31->vendor.irq);
   VAR_31->vendor.irq = 0;
  } else {

   FUNC_15(FUNC_11
      (VAR_31->vendor.iobase +
       FUNC_4(VAR_31->vendor.locality)),
      VAR_31->vendor.iobase +
      FUNC_4(VAR_31->vendor.locality));


   FUNC_15(VAR_28 | VAR_5,
      VAR_31->vendor.iobase +
      FUNC_3(VAR_31->vendor.locality));
  }
 }

 FUNC_0(&VAR_31->vendor.list);
 FUNC_21(&VAR_20);
 FUNC_17(&VAR_31->vendor.list, &VAR_17);
 FUNC_22(&VAR_20);

 FUNC_25(VAR_31);
 FUNC_23(VAR_31);

 return 0;
out_err:
 if (VAR_31->vendor.iobase)
  FUNC_14(VAR_31->vendor.iobase);
 FUNC_27(VAR_31->dev);
 return VAR_29;
}
