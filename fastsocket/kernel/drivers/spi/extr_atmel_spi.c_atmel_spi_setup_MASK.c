
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_device {unsigned int bits_per_word; int chip_select; int mode; int dev; struct atmel_spi_device* controller_state; scalar_t__ controller_data; int max_speed_hz; TYPE_1__* master; } ;
struct atmel_spi_device {unsigned int npcs_pin; int csr; } ;
struct atmel_spi {int lock; struct spi_device* stay; int clk; scalar_t__ stopping; } ;
struct TYPE_2__ {int num_chipselect; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (struct atmel_spi*,struct spi_device*) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned int,int) ;
 int FUNC_9 (unsigned int,int ) ;
 int FUNC_10 (struct atmel_spi_device*) ;
 struct atmel_spi_device* FUNC_11 (int,int ) ;
 struct atmel_spi* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct atmel_spi*,scalar_t__,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_15)
{
 struct atmel_spi *VAR_16;
 struct atmel_spi_device *VAR_17;
 u32 VAR_18, VAR_19;
 unsigned int VAR_20 = VAR_15->bits_per_word;
 unsigned long VAR_21;
 unsigned int VAR_22;
 int VAR_23;

 VAR_16 = FUNC_12(VAR_15->master);

 if (VAR_16->stopping)
  return -VAR_7;

 if (VAR_15->chip_select > VAR_15->master->num_chipselect) {
  FUNC_6(&VAR_15->dev,
    "setup: invalid chipselect %u (%u defined)\n",
    VAR_15->chip_select, VAR_15->master->num_chipselect);
  return -VAR_5;
 }

 if (VAR_20 < 8 || VAR_20 > 16) {
  FUNC_6(&VAR_15->dev,
    "setup: invalid bits_per_word %u (8 to 16)\n",
    VAR_20);
  return -VAR_5;
 }


 if (!FUNC_3()
   && VAR_15->chip_select == 0
   && (VAR_15->mode & VAR_13)) {
  FUNC_6(&VAR_15->dev, "setup: can't be active-high\n");
  return -VAR_5;
 }


 VAR_21 = FUNC_4(VAR_16->clk);
 if (!FUNC_3())
  VAR_21 /= 2;

 if (VAR_15->max_speed_hz) {




  VAR_18 = FUNC_0(VAR_21, VAR_15->max_speed_hz);





  if (VAR_18 >= (1 << VAR_14)) {
   FUNC_6(&VAR_15->dev,
    "setup: %d Hz too slow, scbr %u; min %ld Hz\n",
    VAR_15->max_speed_hz, VAR_18, VAR_21/255);
   return -VAR_5;
  }
 } else

  VAR_18 = 0xff;

 VAR_19 = FUNC_1(VAR_10, VAR_18) | FUNC_1(VAR_0, VAR_20 - 8);
 if (VAR_15->mode & VAR_12)
  VAR_19 |= FUNC_2(VAR_1);
 if (!(VAR_15->mode & VAR_11))
  VAR_19 |= FUNC_2(VAR_9);







 VAR_19 |= FUNC_1(VAR_4, 0);
 VAR_19 |= FUNC_1(VAR_3, 0);


 VAR_22 = (unsigned int)VAR_15->controller_data;
 VAR_17 = VAR_15->controller_state;
 if (!VAR_17) {
  VAR_17 = FUNC_11(sizeof(struct atmel_spi_device), VAR_8);
  if (!VAR_17)
   return -VAR_6;

  VAR_23 = FUNC_9(VAR_22, FUNC_7(&VAR_15->dev));
  if (VAR_23) {
   FUNC_10(VAR_17);
   return VAR_23;
  }

  VAR_17->npcs_pin = VAR_22;
  VAR_15->controller_state = VAR_17;
  FUNC_8(VAR_22, !(VAR_15->mode & VAR_13));
 } else {
  unsigned long VAR_24;

  FUNC_14(&VAR_16->lock, VAR_24);
  if (VAR_16->stay == VAR_15)
   VAR_16->stay = ((void*)0);
  FUNC_5(VAR_16, VAR_15);
  FUNC_15(&VAR_16->lock, VAR_24);
 }

 VAR_17->csr = VAR_19;

 FUNC_6(&VAR_15->dev,
  "setup: %lu Hz bpw %u mode 0x%x -> csr%d %08x\n",
  VAR_21 / VAR_18, VAR_20, VAR_15->mode, VAR_15->chip_select, VAR_19);

 if (!FUNC_3())
  FUNC_13(VAR_16, VAR_2 + 4 * VAR_15->chip_select, VAR_19);

 return 0;
}
