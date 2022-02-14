
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct spi_transfer {int bits_per_word; int speed_hz; } ;
struct spi_ppc4xx_cs {int mode; } ;
struct spi_device {int bits_per_word; int max_speed_hz; int dev; struct spi_ppc4xx_cs* controller_state; int master; } ;
struct TYPE_4__ {int lock; int (* chipselect ) (struct spi_device*,int ) ;int busy; } ;
struct ppc4xx_spi {int opb_freq; TYPE_2__ bitbang; TYPE_1__* regs; } ;
struct TYPE_3__ {int cdm; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int) ;
 struct ppc4xx_spi* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct spi_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_2, struct spi_transfer *VAR_3)
{
 struct ppc4xx_spi *VAR_4 = FUNC_5(VAR_2->master);
 struct spi_ppc4xx_cs *VAR_5 = VAR_2->controller_state;
 int VAR_6;
 u8 VAR_7 = 0;
 u32 VAR_8;
 u8 VAR_9;


 VAR_9 = VAR_2->bits_per_word;
 VAR_8 = VAR_2->max_speed_hz;





 if (VAR_3) {
  if (VAR_3->bits_per_word)
   VAR_9 = VAR_3->bits_per_word;

  if (VAR_3->speed_hz)
   VAR_8 = FUNC_3(VAR_3->speed_hz, VAR_2->max_speed_hz);
 }

 if (VAR_9 != 8) {
  FUNC_1(&VAR_2->dev, "invalid bits-per-word (%d)\n",
    VAR_9);
  return -VAR_1;
 }

 if (!VAR_8 || (VAR_8 > VAR_2->max_speed_hz)) {
  FUNC_1(&VAR_2->dev, "invalid speed_hz (%d)\n", VAR_8);
  return -VAR_1;
 }


 FUNC_4(&VAR_4->regs->mode, VAR_5->mode);



 VAR_6 = (VAR_4->opb_freq / VAR_8) - 1;
 if (VAR_6 > 0)
  VAR_7 = FUNC_3(VAR_6, 0xff);

 FUNC_0(&VAR_2->dev, "setting pre-scaler to %d (hz %d)\n", VAR_7, VAR_8);

 if (FUNC_2(&VAR_4->regs->cdm) != VAR_7)
  FUNC_4(&VAR_4->regs->cdm, VAR_7);

 FUNC_6(&VAR_4->bitbang.lock);
 if (!VAR_4->bitbang.busy) {
  VAR_4->bitbang.chipselect(VAR_2, VAR_0);

 }
 FUNC_7(&VAR_4->bitbang.lock);

 return 0;
}
