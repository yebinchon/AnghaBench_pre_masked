
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_go7007 {void* bottom_dma; void* top_dma; int bottom; int top; struct saa7134_dev* dev; } ;
struct saa7134_dev {TYPE_1__* pci; } ;
struct go7007 {struct saa7134_go7007* hpi_context; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_14 ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int *,int ,int ,int,int ) ;
 int FUNC_6 (int *,void*,int,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct go7007 *VAR_23)
{
 struct saa7134_go7007 *VAR_24 = VAR_23->hpi_context;
 struct saa7134_dev *VAR_25 = VAR_24->dev;

 VAR_24->top_dma = FUNC_5(&VAR_25->pci->dev, FUNC_12(VAR_24->top),
   0, VAR_5, VAR_0);
 if (!VAR_24->top_dma)
  return -VAR_1;
 VAR_24->bottom_dma = FUNC_5(&VAR_25->pci->dev,
   FUNC_12(VAR_24->bottom),
   0, VAR_5, VAR_0);
 if (!VAR_24->bottom_dma) {
  FUNC_6(&VAR_25->pci->dev, VAR_24->top_dma, VAR_5,
    VAR_0);
  return -VAR_1;
 }

 FUNC_11(VAR_21 >> 2, 0xA300B000);
 FUNC_11(VAR_22 >> 2, 0x40000200);


 FUNC_10(VAR_6, 0xff);
 FUNC_10(VAR_7, VAR_4);
 FUNC_10(VAR_8, VAR_2);
 FUNC_10(VAR_6, 0x00);


 FUNC_10(VAR_18, 0xe6);


 FUNC_8(VAR_20, 0x01);
 FUNC_7(VAR_20, 0x01);


 FUNC_10(VAR_19, 128 - 1);
 FUNC_10(VAR_15, (VAR_5 >> 7) - 1);
 FUNC_10(VAR_16, 0);
 FUNC_10(VAR_17, 0);


 FUNC_10(VAR_8, VAR_3);

 FUNC_11(FUNC_0(5), FUNC_4(VAR_24->top_dma));
 FUNC_11(FUNC_1(5), FUNC_4(VAR_24->bottom_dma));
 FUNC_11(FUNC_3(5), 128);
 FUNC_11(FUNC_2(5), VAR_14);


 FUNC_9(VAR_12, VAR_13);


 FUNC_9(VAR_9,
   VAR_11 | VAR_10);

 return 0;
}
