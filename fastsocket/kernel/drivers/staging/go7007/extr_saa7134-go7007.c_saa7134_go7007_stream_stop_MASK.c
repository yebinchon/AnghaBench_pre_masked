
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_go7007 {int bottom_dma; int top_dma; struct saa7134_dev* dev; } ;
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
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct go7007 *VAR_9)
{
 struct saa7134_go7007 *VAR_10 = VAR_9->hpi_context;
 struct saa7134_dev *VAR_11;

 if (!VAR_10)
  return -VAR_1;
 VAR_11 = VAR_10->dev;
 if (!VAR_11)
  return -VAR_1;


 FUNC_2(VAR_6, VAR_7);


 FUNC_2(VAR_3,
   VAR_5 | VAR_4);


 FUNC_1(VAR_8, 0x80);

 FUNC_0(&VAR_11->pci->dev, VAR_10->top_dma, VAR_2,
   VAR_0);
 FUNC_0(&VAR_11->pci->dev, VAR_10->bottom_dma, VAR_2,
   VAR_0);

 return 0;
}
