
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int byte; int word; int * block; } ;
typedef int u8 ;
struct ismt_priv {int* dma_buffer; TYPE_1__* pci_dev; } ;
struct ismt_desc {int status; int rxbytes; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,struct ismt_desc const*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int*,int ) ;

__attribute__((used)) static int FUNC_4(const struct ismt_desc *VAR_14,
        union i2c_smbus_data *VAR_15,
        struct ismt_priv *VAR_16, int VAR_17,
        char VAR_18)
{
 u8 *VAR_19 = VAR_16->dma_buffer;

 FUNC_1(&VAR_16->pci_dev->dev, "Processing completed descriptor\n");
 FUNC_0(&VAR_16->pci_dev->dev, VAR_14);

 if (VAR_14->status & VAR_13) {
  if (VAR_18 == VAR_6 &&
      VAR_17 != 129)
   return 0;

  switch (VAR_17) {
  case 131:
  case 130:
   VAR_15->byte = VAR_19[0];
   break;
  case 128:
  case 129:
   VAR_15->word = VAR_19[0] | (VAR_19[1] << 8);
   break;
  case 132:
   FUNC_3(&VAR_15->block[1], VAR_19, VAR_14->rxbytes);
   VAR_15->block[0] = VAR_14->rxbytes;
   break;
  }
  return 0;
 }

 if (FUNC_2(VAR_14->status & VAR_12))
  return -VAR_3;

 if (VAR_14->status & VAR_9)
  return -VAR_1;

 if (VAR_14->status & VAR_8)
  return -VAR_0;

 if (VAR_14->status & VAR_11)
  return -VAR_4;

 if (VAR_14->status & (VAR_10 | VAR_7))
  return -VAR_5;

 return -VAR_2;
}
