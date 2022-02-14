
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; scalar_t__ max_speed_hz; int dev; int master; } ;
struct au1550_spi {scalar_t__ freq_max; scalar_t__ freq_min; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 struct au1550_spi* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1)
{
 struct au1550_spi *VAR_2 = FUNC_1(VAR_1->master);

 if (VAR_1->bits_per_word < 4 || VAR_1->bits_per_word > 24) {
  FUNC_0(&VAR_1->dev, "setup: invalid bits_per_word=%d\n",
   VAR_1->bits_per_word);
  return -VAR_0;
 }

 if (VAR_1->max_speed_hz == 0)
  VAR_1->max_speed_hz = VAR_2->freq_max;
 if (VAR_1->max_speed_hz > VAR_2->freq_max
   || VAR_1->max_speed_hz < VAR_2->freq_min)
  return -VAR_0;





 return 0;
}
