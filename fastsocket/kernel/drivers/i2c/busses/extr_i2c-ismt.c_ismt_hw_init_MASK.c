
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ismt_priv {scalar_t__ smba; int io_rng_dma; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;




 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ismt_priv *VAR_10)
{
 u32 VAR_11;
 struct device *VAR_12 = &VAR_10->pci_dev->dev;


 FUNC_4(VAR_10->io_rng_dma, VAR_10->smba + VAR_4);


 FUNC_3(VAR_1, VAR_10->smba + VAR_3);


 FUNC_3(0, VAR_10->smba + VAR_6);


 VAR_11 = FUNC_2(VAR_10->smba + VAR_5);
 FUNC_3((VAR_11 & ~VAR_2) | (VAR_0 - 1),
  VAR_10->smba + VAR_5);





 VAR_11 = FUNC_2(VAR_10->smba + VAR_7);

 switch (VAR_9) {
 case 0:
  break;

 case 80:
  FUNC_0(VAR_12, "Setting SMBus clock to 80 kHz\n");
  FUNC_3(((VAR_11 & ~VAR_8) | 128),
   VAR_10->smba + VAR_7);
  break;

 case 100:
  FUNC_0(VAR_12, "Setting SMBus clock to 100 kHz\n");
  FUNC_3(((VAR_11 & ~VAR_8) | 131),
   VAR_10->smba + VAR_7);
  break;

 case 400:
  FUNC_0(VAR_12, "Setting SMBus clock to 400 kHz\n");
  FUNC_3(((VAR_11 & ~VAR_8) | 129),
   VAR_10->smba + VAR_7);
  break;

 case 1000:
  FUNC_0(VAR_12, "Setting SMBus clock to 1000 kHz\n");
  FUNC_3(((VAR_11 & ~VAR_8) | 130),
   VAR_10->smba + VAR_7);
  break;

 default:
  FUNC_1(VAR_12, "Invalid SMBus clock speed, only 0, 80, 100, 400, and 1000 are valid\n");
  break;
 }

 VAR_11 = FUNC_2(VAR_10->smba + VAR_7);

 switch (VAR_11 & VAR_8) {
 case 128:
  VAR_9 = 80;
  break;
 case 131:
  VAR_9 = 100;
  break;
 case 129:
  VAR_9 = 400;
  break;
 case 130:
  VAR_9 = 1000;
  break;
 }
 FUNC_0(VAR_12, "SMBus clock is running at %d kHz\n", VAR_9);
}
