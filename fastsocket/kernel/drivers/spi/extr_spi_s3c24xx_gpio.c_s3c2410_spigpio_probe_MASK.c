
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spi_master {int dummy; } ;
struct s3c2410_spigpio_info {scalar_t__ pin_clk; scalar_t__ pin_mosi; scalar_t__ pin_miso; int num_chipselect; int bus_num; } ;
struct TYPE_7__ {TYPE_1__* master; int * txrx_word; int chipselect; } ;
struct s3c2410_spigpio {TYPE_3__ bitbang; struct s3c2410_spigpio_info* info; } ;
struct TYPE_8__ {struct s3c2410_spigpio_info* platform_data; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_6__ {int num_chipselect; int bus_num; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (struct platform_device*,struct s3c2410_spigpio*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct spi_master* FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_1__* FUNC_6 (struct spi_master*) ;
 struct s3c2410_spigpio* FUNC_7 (struct spi_master*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_14)
{
 struct s3c2410_spigpio_info *VAR_15;
 struct spi_master *VAR_16;
 struct s3c2410_spigpio *VAR_17;
 int VAR_18;

 VAR_16 = FUNC_4(&VAR_14->dev, sizeof(struct s3c2410_spigpio));
 if (VAR_16 == ((void*)0)) {
  FUNC_0(&VAR_14->dev, "failed to allocate spi master\n");
  VAR_18 = -VAR_0;
  goto err;
 }

 VAR_17 = FUNC_7(VAR_16);

 FUNC_1(VAR_14, VAR_17);


 VAR_15 = VAR_17->info = VAR_14->dev.platform_data;


 VAR_17->bitbang.master = FUNC_6(VAR_16);
 VAR_17->bitbang.master->bus_num = VAR_15->bus_num;
 VAR_17->bitbang.master->num_chipselect = VAR_15->num_chipselect;
 VAR_17->bitbang.chipselect = VAR_9;

 VAR_17->bitbang.txrx_word[VAR_5] = VAR_10;
 VAR_17->bitbang.txrx_word[VAR_6] = VAR_11;
 VAR_17->bitbang.txrx_word[VAR_7] = VAR_12;
 VAR_17->bitbang.txrx_word[VAR_8] = VAR_13;



 FUNC_3(VAR_15->pin_clk, 0);
 FUNC_2(VAR_15->pin_clk, VAR_4);

 if (VAR_15->pin_mosi < VAR_2) {
  FUNC_3(VAR_15->pin_mosi, 0);
  FUNC_2(VAR_15->pin_mosi, VAR_4);
 }

 if (VAR_15->pin_miso != VAR_1 && VAR_15->pin_miso < VAR_2)
  FUNC_2(VAR_15->pin_miso, VAR_3);

 VAR_18 = FUNC_5(&VAR_17->bitbang);
 if (VAR_18)
  goto err_no_bitbang;

 return 0;

 err_no_bitbang:
 FUNC_8(VAR_17->bitbang.master);
 err:
 return VAR_18;

}
