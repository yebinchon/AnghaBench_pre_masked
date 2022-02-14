
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct spi_master {int dummy; } ;
struct TYPE_9__ {TYPE_2__* master; int * txrx_word; int chipselect; } ;
struct sh_sci_spi {TYPE_4__ bitbang; int membase; int val; TYPE_1__* info; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_10__ {TYPE_1__* platform_data; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_8__ {int num_chipselect; int bus_num; } ;
struct TYPE_7__ {int num_chipselect; int bus_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sh_sci_spi*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct sh_sci_spi*) ;
 int FUNC_7 (struct sh_sci_spi*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct spi_master* FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (TYPE_4__*) ;
 TYPE_2__* FUNC_10 (struct spi_master*) ;
 struct sh_sci_spi* FUNC_11 (struct spi_master*) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_14)
{
 struct resource *VAR_15;
 struct spi_master *VAR_16;
 struct sh_sci_spi *VAR_17;
 int VAR_18;

 VAR_16 = FUNC_8(&VAR_14->dev, sizeof(struct sh_sci_spi));
 if (VAR_16 == ((void*)0)) {
  FUNC_1(&VAR_14->dev, "failed to allocate spi master\n");
  VAR_18 = -VAR_1;
  goto err0;
 }

 VAR_17 = FUNC_11(VAR_16);

 FUNC_6(VAR_14, VAR_17);
 VAR_17->info = VAR_14->dev.platform_data;


 VAR_17->bitbang.master = FUNC_10(VAR_16);
 VAR_17->bitbang.master->bus_num = VAR_17->info->bus_num;
 VAR_17->bitbang.master->num_chipselect = VAR_17->info->num_chipselect;
 VAR_17->bitbang.chipselect = VAR_9;

 VAR_17->bitbang.txrx_word[VAR_5] = VAR_10;
 VAR_17->bitbang.txrx_word[VAR_6] = VAR_11;
 VAR_17->bitbang.txrx_word[VAR_7] = VAR_12;
 VAR_17->bitbang.txrx_word[VAR_8] = VAR_13;

 VAR_15 = FUNC_5(VAR_14, VAR_3, 0);
 if (VAR_15 == ((void*)0)) {
  VAR_18 = -VAR_0;
  goto err1;
 }
 VAR_17->membase = FUNC_3(VAR_15->start, VAR_15->end - VAR_15->start + 1);
 if (!VAR_17->membase) {
  VAR_18 = -VAR_2;
  goto err1;
 }
 VAR_17->val = FUNC_2(FUNC_0(VAR_17));
 FUNC_7(VAR_17, VAR_4, 1);

 VAR_18 = FUNC_9(&VAR_17->bitbang);
 if (!VAR_18)
  return 0;

 FUNC_7(VAR_17, VAR_4, 0);
 FUNC_4(VAR_17->membase);
 err1:
 FUNC_12(VAR_17->bitbang.master);
 err0:
 return VAR_18;
}
