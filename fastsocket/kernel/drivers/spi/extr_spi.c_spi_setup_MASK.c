
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {unsigned int mode; int bits_per_word; int max_speed_hz; int dev; TYPE_1__* master; } ;
struct TYPE_2__ {unsigned int mode_bits; int (* setup ) (struct spi_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct spi_device*) ;

int FUNC_2(struct spi_device *VAR_7)
{
 unsigned VAR_8;
 int VAR_9;




 VAR_8 = VAR_7->mode & ~VAR_7->master->mode_bits;
 if (VAR_8) {
  FUNC_0(&VAR_7->dev, "setup: unsupported mode bits %x\n",
   VAR_8);
  return -VAR_0;
 }

 if (!VAR_7->bits_per_word)
  VAR_7->bits_per_word = 8;

 VAR_9 = VAR_7->master->setup(VAR_7);

 FUNC_0(&VAR_7->dev, "setup mode %d, %s%s%s%s"
    "%u bits/w, %u Hz max --> %d\n",
   (int) (VAR_7->mode & (VAR_3 | VAR_2)),
   (VAR_7->mode & VAR_4) ? "cs_high, " : "",
   (VAR_7->mode & VAR_6) ? "lsb, " : "",
   (VAR_7->mode & VAR_1) ? "3wire, " : "",
   (VAR_7->mode & VAR_5) ? "loopback, " : "",
   VAR_7->bits_per_word, VAR_7->max_speed_hz,
   VAR_9);

 return VAR_9;
}
