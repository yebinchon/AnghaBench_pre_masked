
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1550_spi {unsigned int dma_rx_tmpbuf_size; scalar_t__ dma_rx_tmpbuf; int dma_rx_tmpbuf_addr; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,unsigned int,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct au1550_spi *VAR_4, unsigned VAR_5)
{
 VAR_4->dma_rx_tmpbuf = FUNC_3(VAR_5, VAR_3);
 if (!VAR_4->dma_rx_tmpbuf)
  return -VAR_2;
 VAR_4->dma_rx_tmpbuf_size = VAR_5;
 VAR_4->dma_rx_tmpbuf_addr = FUNC_0(VAR_4->dev, VAR_4->dma_rx_tmpbuf,
   VAR_5, VAR_0);
 if (FUNC_1(VAR_4->dev, VAR_4->dma_rx_tmpbuf_addr)) {
  FUNC_2(VAR_4->dma_rx_tmpbuf);
  VAR_4->dma_rx_tmpbuf = 0;
  VAR_4->dma_rx_tmpbuf_size = 0;
  return -VAR_1;
 }
 return 0;
}
