
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xilinx_spi {scalar_t__ regs; } ;
struct spi_device {int mode; int chip_select; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 struct xilinx_spi* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_9, int VAR_10)
{
 struct xilinx_spi *VAR_11 = FUNC_3(VAR_9->master);

 if (VAR_10 == VAR_1) {

  FUNC_2(VAR_11->regs + VAR_8, 0xffff);
 } else if (VAR_10 == VAR_0) {

  u16 VAR_12 = FUNC_0(VAR_11->regs + VAR_7)
    & ~VAR_6;
  if (VAR_9->mode & VAR_2)
   VAR_12 |= VAR_4;
  if (VAR_9->mode & VAR_3)
   VAR_12 |= VAR_5;
  FUNC_1(VAR_11->regs + VAR_7, VAR_12);







  FUNC_2(VAR_11->regs + VAR_8,
    ~(0x0001 << VAR_9->chip_select));
 }
}
