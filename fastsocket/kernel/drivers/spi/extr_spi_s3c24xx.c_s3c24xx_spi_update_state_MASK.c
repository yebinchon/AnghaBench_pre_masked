
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {unsigned int bits_per_word; unsigned int speed_hz; } ;
struct spi_device {unsigned int bits_per_word; unsigned int max_speed_hz; int mode; int dev; struct s3c24xx_spi_devstate* controller_state; } ;
struct s3c24xx_spi_devstate {int mode; unsigned int hz; unsigned int sppre; int spcon; } ;
struct s3c24xx_spi {int clk; } ;


 int FUNC_0 (unsigned long,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,unsigned int,unsigned int,unsigned long) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 struct s3c24xx_spi* FUNC_4 (struct spi_device*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_6,
        struct spi_transfer *VAR_7)
{
 struct s3c24xx_spi *VAR_8 = FUNC_4(VAR_6);
 struct s3c24xx_spi_devstate *VAR_9 = VAR_6->controller_state;
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned long VAR_13;

 VAR_10 = VAR_7 ? VAR_7->bits_per_word : VAR_6->bits_per_word;
 VAR_11 = VAR_7 ? VAR_7->speed_hz : VAR_6->max_speed_hz;

 if (!VAR_10)
  VAR_10 = 8;

 if (!VAR_11)
  VAR_11 = VAR_6->max_speed_hz;

 if (VAR_10 != 8) {
  FUNC_3(&VAR_6->dev, "invalid bits-per-word (%d)\n", VAR_10);
  return -VAR_0;
 }

 if (VAR_6->mode != VAR_9->mode) {
  u8 VAR_14 = VAR_3;

  if (VAR_6->mode & VAR_4)
   VAR_14 |= VAR_1;

  if (VAR_6->mode & VAR_5)
   VAR_14 |= VAR_2;

  VAR_9->mode = VAR_6->mode;
  VAR_9->spcon = VAR_14;
 }

 if (VAR_9->hz != VAR_11) {
  VAR_13 = FUNC_1(VAR_8->clk);
  VAR_12 = FUNC_0(VAR_13, VAR_11 * 2) - 1;

  if (VAR_12 > 255)
   VAR_12 = 255;

  FUNC_2(&VAR_6->dev, "pre-scaler=%d (wanted %d, got %ld)\n",
   VAR_12, VAR_11, VAR_13 / (2 * (VAR_12 + 1)));

  VAR_9->hz = VAR_11;
  VAR_9->sppre = VAR_12;
 }

 return 0;
}
