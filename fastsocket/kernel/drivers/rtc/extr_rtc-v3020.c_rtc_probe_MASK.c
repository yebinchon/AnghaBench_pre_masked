
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v3020_platform_data {scalar_t__ use_gpio; } ;
struct v3020 {TYPE_3__* ops; struct rtc_device* rtc; int leftshift; TYPE_1__* gpio; } ;
struct rtc_device {int dummy; } ;
struct TYPE_10__ {struct v3020_platform_data* platform_data; } ;
struct platform_device {TYPE_5__ dev; TYPE_2__* resource; } ;
struct TYPE_9__ {int (* map_io ) (struct v3020*,struct platform_device*,struct v3020_platform_data*) ;int (* read_bit ) (struct v3020*) ;int (* unmap_io ) (struct v3020*) ;} ;
struct TYPE_8__ {scalar_t__ start; } ;
struct TYPE_7__ {int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_2 (TYPE_5__*,char*,unsigned long long,int ,...) ;
 int FUNC_3 (struct v3020*) ;
 struct v3020* FUNC_4 (int,int ) ;
 int FUNC_5 (struct platform_device*,struct v3020*) ;
 struct rtc_device* FUNC_6 (char*,TYPE_5__*,int *,int ) ;
 int FUNC_7 (struct v3020*,struct platform_device*,struct v3020_platform_data*) ;
 int FUNC_8 (struct v3020*) ;
 int FUNC_9 (struct v3020*) ;
 int FUNC_10 (struct v3020*,int ) ;
 TYPE_3__ VAR_11 ;
 TYPE_3__ VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (struct v3020*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_14)
{
 struct v3020_platform_data *VAR_15 = VAR_14->dev.platform_data;
 struct v3020 *VAR_16;
 struct rtc_device *VAR_17;
 int VAR_18 = -VAR_0;
 int VAR_19;
 int VAR_20;

 VAR_16 = FUNC_4(sizeof *VAR_16, VAR_3);
 if (!VAR_16)
  return -VAR_2;

 if (VAR_15->use_gpio)
  VAR_16->ops = &VAR_11;
 else
  VAR_16->ops = &VAR_12;

 VAR_18 = VAR_16->ops->map_io(VAR_16, VAR_14, VAR_15);
 if (VAR_18)
  goto err_chip;



 for (VAR_19 = 0; VAR_19 < 8; VAR_19++)
  VAR_20 = VAR_16->ops->read_bit(VAR_16);



 FUNC_11(VAR_16, VAR_8, 0x33);
 if (FUNC_10(VAR_16, VAR_8) != 0x33) {
  VAR_18 = -VAR_1;
  goto err_io;
 }



 FUNC_11(VAR_16, VAR_9, 0x0);

 if (VAR_15->use_gpio)
  FUNC_2(&VAR_14->dev, "Chip available at GPIOs "
    "%d, %d, %d, %d\n",
    VAR_16->gpio[VAR_5].gpio, VAR_16->gpio[VAR_10].gpio,
    VAR_16->gpio[VAR_7].gpio, VAR_16->gpio[VAR_6].gpio);
 else
  FUNC_2(&VAR_14->dev, "Chip available at "
    "physical address 0x%llx,"
    "data connected to D%d\n",
    (unsigned long long)VAR_14->resource[0].start,
    VAR_16->leftshift);

 FUNC_5(VAR_14, VAR_16);

 VAR_17 = FUNC_6("v3020",
    &VAR_14->dev, &VAR_13, VAR_4);
 if (FUNC_0(VAR_17)) {
  VAR_18 = FUNC_1(VAR_17);
  goto err_io;
 }
 VAR_16->rtc = VAR_17;

 return 0;

err_io:
 VAR_16->ops->unmap_io(VAR_16);
err_chip:
 FUNC_3(VAR_16);

 return VAR_18;
}
