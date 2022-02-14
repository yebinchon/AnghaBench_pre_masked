
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct max1111_data {int* tx_buf; int* rx_buf; int msg; int spi; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct max1111_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_7, int VAR_8)
{
 struct max1111_data *VAR_9 = FUNC_1(VAR_7);
 uint8_t VAR_10, VAR_11;
 int VAR_12;

 VAR_9->tx_buf[0] = (VAR_8 << VAR_3) |
  VAR_1 | VAR_2 |
  VAR_4 | VAR_6 | VAR_5;

 VAR_12 = FUNC_2(VAR_9->spi, &VAR_9->msg);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7, "spi_sync failed with %d\n", VAR_12);
  return VAR_12;
 }

 VAR_10 = VAR_9->rx_buf[0];
 VAR_11 = VAR_9->rx_buf[1];

 if ((VAR_10 & 0xc0) || (VAR_11 & 0x3f))
  return -VAR_0;

 return (VAR_10 << 2) | (VAR_11 >> 6);
}
