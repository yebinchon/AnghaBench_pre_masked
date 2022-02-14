
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p54s_priv {TYPE_1__* spi; } ;
typedef int __le32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct p54s_priv*,int ,void const*,size_t) ;
 int FUNC_3 (struct p54s_priv*,int ,int ) ;
 int FUNC_4 (struct p54s_priv*,int ,int ) ;
 int FUNC_5 (struct p54s_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct p54s_priv *VAR_7, __le32 VAR_8,
    const void *VAR_9, size_t VAR_10)
{
 if (!FUNC_3(VAR_7, VAR_4, VAR_1)) {
  FUNC_1(&VAR_7->spi->dev, "spi_write_dma not allowed "
   "to DMA write.\n");
  return -VAR_0;
 }

 FUNC_4(VAR_7, VAR_4,
         FUNC_0(VAR_6));

 FUNC_4(VAR_7, VAR_5, FUNC_0(VAR_10));
 FUNC_5(VAR_7, VAR_3, VAR_8);
 FUNC_2(VAR_7, VAR_2, VAR_9, VAR_10);
 return 0;
}
