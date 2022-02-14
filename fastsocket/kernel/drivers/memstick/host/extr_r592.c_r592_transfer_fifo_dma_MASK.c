
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct r592_device {int dma_error; TYPE_2__* req; TYPE_1__* pci_dev; int dma_done; int dma_capable; } ;
struct TYPE_8__ {int length; } ;
struct TYPE_7__ {scalar_t__ data_dir; TYPE_3__ sg; int long_data; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_3__*,int,int ) ;
 int FUNC_3 (int *,TYPE_3__*,int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct r592_device*,int) ;
 int FUNC_7 (struct r592_device*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct r592_device *VAR_7)
{
 int VAR_8, VAR_9;
 bool VAR_10;

 if (!VAR_7->dma_capable || !VAR_7->req->long_data)
  return -VAR_0;

 VAR_8 = VAR_7->req->sg.length;
 VAR_10 = VAR_7->req->data_dir == VAR_6;

 if (VAR_8 != VAR_5)
  return -VAR_0;

 FUNC_1("doing dma transfer");

 VAR_7->dma_error = 0;
 FUNC_0(VAR_7->dma_done);


 VAR_9 = FUNC_2(&VAR_7->pci_dev->dev, &VAR_7->req->sg, 1, VAR_10 ?
  VAR_4 : VAR_3);

 if (VAR_9 != 1 ||
   (FUNC_8(&VAR_7->req->sg) < VAR_7->req->sg.length)) {
  FUNC_4("problem in dma_map_sg");
  return -VAR_1;
 }

 FUNC_6(VAR_7, VAR_10);


 if (!FUNC_9(
   &VAR_7->dma_done, FUNC_5(1000))) {
  FUNC_4("DMA timeout");
  FUNC_7(VAR_7, -VAR_2);
 }

 FUNC_3(&VAR_7->pci_dev->dev, &VAR_7->req->sg, 1, VAR_10 ?
  VAR_4 : VAR_3);


 return VAR_7->dma_error;
}
