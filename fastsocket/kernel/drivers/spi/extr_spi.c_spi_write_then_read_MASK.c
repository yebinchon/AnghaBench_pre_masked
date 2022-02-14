
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct spi_transfer {unsigned int len; int const* tx_buf; int const* rx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
typedef int DEFINE_MUTEX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int const* VAR_4 ;
 int FUNC_0 (int const*) ;
 int const* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int const*,int const*,unsigned int) ;
 int FUNC_3 (struct spi_transfer*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_7 (struct spi_message*) ;
 int FUNC_8 (struct spi_device*,struct spi_message*) ;

int FUNC_9(struct spi_device *VAR_5,
  const u8 *VAR_6, unsigned VAR_7,
  u8 *VAR_8, unsigned VAR_9)
{
 static DEFINE_MUTEX(VAR_10);

 int VAR_11;
 struct spi_message VAR_12;
 struct spi_transfer VAR_13[2];
 u8 *VAR_14;





 if ((VAR_7 + VAR_9) > VAR_3)
  return -VAR_0;

 FUNC_7(&VAR_12);
 FUNC_3(VAR_13, 0, sizeof VAR_13);
 if (VAR_7) {
  VAR_13[0].len = VAR_7;
  FUNC_6(&VAR_13[0], &VAR_12);
 }
 if (VAR_9) {
  VAR_13[1].len = VAR_9;
  FUNC_6(&VAR_13[1], &VAR_12);
 }


 if (!FUNC_4(&VAR_10)) {
  VAR_14 = FUNC_1(VAR_3, VAR_2);
  if (!VAR_14)
   return -VAR_1;
 } else
  VAR_14 = VAR_4;

 FUNC_2(VAR_14, VAR_6, VAR_7);
 VAR_13[0].tx_buf = VAR_14;
 VAR_13[1].rx_buf = VAR_14 + VAR_7;


 VAR_11 = FUNC_8(VAR_5, &VAR_12);
 if (VAR_11 == 0)
  FUNC_2(VAR_8, VAR_13[1].rx_buf, VAR_9);

 if (VAR_13[0].tx_buf == VAR_4)
  FUNC_5(&VAR_10);
 else
  FUNC_0(VAR_14);

 return VAR_11;
}
