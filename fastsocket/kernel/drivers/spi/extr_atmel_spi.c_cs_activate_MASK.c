
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_device {unsigned int mode; int chip_select; int dev; TYPE_1__* master; struct atmel_spi_device* controller_state; } ;
struct atmel_spi_device {int csr; int npcs_pin; } ;
struct atmel_spi {int dummy; } ;
struct TYPE_2__ {int num_chipselect; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,char*,int ,char*,int) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct atmel_spi*,scalar_t__) ;
 int FUNC_7 (struct atmel_spi*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_8(struct atmel_spi *VAR_8, struct spi_device *VAR_9)
{
 struct atmel_spi_device *VAR_10 = VAR_9->controller_state;
 unsigned VAR_11 = VAR_9->mode & VAR_7;
 u32 VAR_12;

 if (FUNC_3()) {





  FUNC_7(VAR_8, VAR_1, VAR_10->csr);
  FUNC_7(VAR_8, VAR_3, FUNC_0(VAR_5, 0x0e) | FUNC_2(VAR_2)
    | FUNC_2(VAR_4));
  VAR_12 = FUNC_6(VAR_8, VAR_3);
  FUNC_5(VAR_10->npcs_pin, VAR_11);
 } else {
  u32 VAR_13 = (VAR_9->mode & VAR_6) ? FUNC_2(VAR_0) : 0;
  int VAR_14;
  u32 VAR_15;


  for (VAR_14 = 0; VAR_14 < VAR_9->master->num_chipselect; VAR_14++) {
   VAR_15 = FUNC_6(VAR_8, VAR_1 + 4 * VAR_14);
   if ((VAR_15 ^ VAR_13) & FUNC_2(VAR_0))
    FUNC_7(VAR_8, VAR_1 + 4 * VAR_14,
      VAR_15 ^ FUNC_2(VAR_0));
  }

  VAR_12 = FUNC_6(VAR_8, VAR_3);
  VAR_12 = FUNC_1(VAR_5, ~(1 << VAR_9->chip_select), VAR_12);
  if (VAR_9->chip_select != 0)
   FUNC_5(VAR_10->npcs_pin, VAR_11);
  FUNC_7(VAR_8, VAR_3, VAR_12);
 }

 FUNC_4(&VAR_9->dev, "activate %u%s, mr %08x\n",
   VAR_10->npcs_pin, VAR_11 ? " (high)" : "",
   VAR_12);
}
