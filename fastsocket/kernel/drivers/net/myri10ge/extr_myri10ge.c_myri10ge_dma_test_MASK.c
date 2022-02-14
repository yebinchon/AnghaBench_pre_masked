
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct myri10ge_priv {int tx_boundary; int read_dma; int write_dma; int read_write_dma; TYPE_1__* pdev; } ;
struct myri10ge_cmd {int data0; int data2; void* data1; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_4 ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,char*,int) ;
 int FUNC_4 (struct myri10ge_priv*,int,struct myri10ge_cmd*,int ) ;
 int FUNC_5 (TYPE_1__*,struct page*,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct myri10ge_priv *VAR_5, int VAR_6)
{
 struct myri10ge_cmd VAR_7;
 int VAR_8;
 u32 VAR_9;
 struct page *VAR_10;
 dma_addr_t VAR_11;
 char *VAR_12 = " ";

 VAR_10 = FUNC_2(VAR_2);
 if (!VAR_10)
  return -VAR_1;
 VAR_11 = FUNC_5(VAR_5->pdev, VAR_10, 0, VAR_4,
       VAR_0);
 VAR_9 = VAR_5->tx_boundary;

 VAR_7.data0 = FUNC_1(VAR_11);
 VAR_7.data1 = FUNC_0(VAR_11);
 VAR_7.data2 = VAR_9 * 0x10000;
 VAR_8 = FUNC_4(VAR_5, VAR_6, &VAR_7, 0);
 if (VAR_8 != 0) {
  VAR_12 = "read";
  goto abort;
 }
 VAR_5->read_dma = ((VAR_7.data0 >> 16) * VAR_9 * 2) / (VAR_7.data0 & 0xffff);
 VAR_7.data0 = FUNC_1(VAR_11);
 VAR_7.data1 = FUNC_0(VAR_11);
 VAR_7.data2 = VAR_9 * 0x1;
 VAR_8 = FUNC_4(VAR_5, VAR_6, &VAR_7, 0);
 if (VAR_8 != 0) {
  VAR_12 = "write";
  goto abort;
 }
 VAR_5->write_dma = ((VAR_7.data0 >> 16) * VAR_9 * 2) / (VAR_7.data0 & 0xffff);

 VAR_7.data0 = FUNC_1(VAR_11);
 VAR_7.data1 = FUNC_0(VAR_11);
 VAR_7.data2 = VAR_9 * 0x10001;
 VAR_8 = FUNC_4(VAR_5, VAR_6, &VAR_7, 0);
 if (VAR_8 != 0) {
  VAR_12 = "read/write";
  goto abort;
 }
 VAR_5->read_write_dma = ((VAR_7.data0 >> 16) * VAR_9 * 2 * 2) /
     (VAR_7.data0 & 0xffff);

abort:
 FUNC_6(VAR_5->pdev, VAR_11, VAR_4, VAR_0);
 FUNC_7(VAR_10);

 if (VAR_8 != 0 && VAR_6 != VAR_3)
  FUNC_3(&VAR_5->pdev->dev, "DMA %s benchmark failed: %d\n",
    VAR_12, VAR_8);

 return VAR_8;
}
