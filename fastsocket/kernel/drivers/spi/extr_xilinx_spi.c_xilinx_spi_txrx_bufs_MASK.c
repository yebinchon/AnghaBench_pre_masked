
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct xilinx_spi {int remaining_bytes; scalar_t__ regs; int done; int rx_ptr; int tx_ptr; } ;
struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct spi_device {int master; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;
 struct xilinx_spi* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xilinx_spi*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_4, struct spi_transfer *VAR_5)
{
 struct xilinx_spi *VAR_6 = FUNC_5(VAR_4->master);
 u32 VAR_7;
 u16 VAR_8;



 VAR_6->tx_ptr = VAR_5->tx_buf;
 VAR_6->rx_ptr = VAR_5->rx_buf;
 VAR_6->remaining_bytes = VAR_5->len;
 FUNC_0(VAR_6->done);

 FUNC_7(VAR_6);




 VAR_7 = FUNC_2(VAR_6->regs + VAR_0);
 FUNC_4(VAR_6->regs + VAR_0,
   VAR_7 | VAR_3);


 VAR_8 = FUNC_1(VAR_6->regs + VAR_1) & ~VAR_2;
 FUNC_3(VAR_6->regs + VAR_1, VAR_8);

 FUNC_6(&VAR_6->done);


 FUNC_4(VAR_6->regs + VAR_0, VAR_7);

 return VAR_5->len - VAR_6->remaining_bytes;
}
