
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int bits_per_word; } ;
struct spi_master {int dummy; } ;
struct spi_device {int bits_per_word; int max_speed_hz; int mode; int dev; int master; struct omap2_mcspi_cs* controller_state; } ;
struct omap2_mcspi_cs {int word_len; } ;
struct omap2_mcspi {struct spi_master* master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,int,char*,char*) ;
 int FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,int) ;
 struct omap2_mcspi* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_12,
  struct spi_transfer *VAR_13)
{
 struct omap2_mcspi_cs *VAR_14 = VAR_12->controller_state;
 struct omap2_mcspi *VAR_15;
 struct spi_master *VAR_16;
 u32 VAR_17 = 0, VAR_18 = 0;
 u8 VAR_19 = VAR_12->bits_per_word;

 VAR_15 = FUNC_3(VAR_12->master);
 VAR_16 = VAR_15->master;

 if (VAR_13 != ((void*)0) && VAR_13->bits_per_word)
  VAR_19 = VAR_13->bits_per_word;

 VAR_14->word_len = VAR_19;

 if (VAR_12->max_speed_hz) {
  while (VAR_18 <= 15 && (VAR_8 / (1 << VAR_18))
     > VAR_12->max_speed_hz)
   VAR_18++;
 } else
  VAR_18 = 15;

 VAR_17 = FUNC_1(VAR_12);




 VAR_17 &= ~(VAR_4|VAR_2);
 VAR_17 |= VAR_1;


 VAR_17 &= ~VAR_7;
 VAR_17 |= (VAR_19 - 1) << 7;


 if (!(VAR_12->mode & VAR_11))
  VAR_17 |= VAR_3;
 else
  VAR_17 &= ~VAR_3;


 VAR_17 &= ~VAR_0;
 VAR_17 |= VAR_18 << 2;


 if (VAR_12->mode & VAR_10)
  VAR_17 |= VAR_6;
 else
  VAR_17 &= ~VAR_6;
 if (VAR_12->mode & VAR_9)
  VAR_17 |= VAR_5;
 else
  VAR_17 &= ~VAR_5;

 FUNC_2(VAR_12, VAR_17);

 FUNC_0(&VAR_12->dev, "setup: speed %d, sample %s edge, clk %s\n",
   VAR_8 / (1 << VAR_18),
   (VAR_12->mode & VAR_9) ? "trailing" : "leading",
   (VAR_12->mode & VAR_10) ? "inverted" : "normal");

 return 0;
}
