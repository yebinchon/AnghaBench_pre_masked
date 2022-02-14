
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_device {scalar_t__ controller_data; } ;
struct pxa2xx_spi_chip {int dma_burst_size; } ;
struct chip_data {int dma_burst_size; } ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct chip_data *VAR_2,
    struct spi_device *VAR_3,
    u8 VAR_4, u32 *VAR_5,
    u32 *VAR_6)
{
 struct pxa2xx_spi_chip *VAR_7 =
   (struct pxa2xx_spi_chip *)VAR_3->controller_data;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 if (VAR_4 <= 8)
  VAR_8 = 1;
 else if (VAR_4 <= 16)
  VAR_8 = 2;
 else
  VAR_8 = 4;


 if (VAR_7)
  VAR_11 = VAR_7->dma_burst_size;
 else {
  switch (VAR_2->dma_burst_size) {
  default:


   VAR_2->dma_burst_size = 128;
  case 128:
   VAR_11 = 8;
   break;
  case 130:
   VAR_11 = 16;
   break;
  case 129:
   VAR_11 = 32;
   break;
  }
 }
 if (VAR_11 <= 8) {
  *VAR_5 = 128;
  VAR_9 = 8;
 } else if (VAR_11 <= 16) {
  if (VAR_8 == 1) {

   *VAR_5 = 128;
   VAR_9 = 8;
   VAR_12 = 1;
  } else {
   *VAR_5 = 130;
   VAR_9 = 16;
  }
 } else {
  if (VAR_8 == 1) {

   *VAR_5 = 128;
   VAR_9 = 8;
   VAR_12 = 1;
  } else if (VAR_8 == 2) {

   *VAR_5 = 130;
   VAR_9 = 16;
   VAR_12 = 1;
  } else {
   *VAR_5 = 129;
   VAR_9 = 32;
  }
 }

 VAR_10 = VAR_9 / VAR_8;


 *VAR_6 = (FUNC_0(VAR_10) & VAR_0)
   | (FUNC_1(16-VAR_10) & VAR_1);

 return VAR_12;
}
