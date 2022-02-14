
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spidev_data {int device_entry; int devt; int buf_lock; int spi_lock; struct spi_device* spi; } ;
struct spi_device {int dev; int chip_select; TYPE_1__* master; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int bus_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int ,unsigned long) ;
 unsigned long VAR_3 ;
 int FUNC_3 (struct device*) ;
 int VAR_4 ;
 int FUNC_4 (int *,char*) ;
 struct device* FUNC_5 (int ,int *,int ,struct spidev_data*,char*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (struct spidev_data*) ;
 struct spidev_data* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (unsigned long,int ) ;
 int FUNC_14 (struct spi_device*,struct spidev_data*) ;
 int VAR_8 ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_9)
{
 struct spidev_data *VAR_10;
 int VAR_11;
 unsigned long VAR_12;


 VAR_10 = FUNC_8(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;


 VAR_10->spi = VAR_9;
 FUNC_15(&VAR_10->spi_lock);
 FUNC_10(&VAR_10->buf_lock);

 FUNC_0(&VAR_10->device_entry);




 FUNC_11(&VAR_6);
 VAR_12 = FUNC_6(VAR_7, VAR_3);
 if (VAR_12 < VAR_3) {
  struct device *VAR_13;

  VAR_10->devt = FUNC_2(VAR_4, VAR_12);
  VAR_13 = FUNC_5(VAR_8, &VAR_9->dev, VAR_10->devt,
        VAR_10, "spidev%d.%d",
        VAR_9->master->bus_num, VAR_9->chip_select);
  VAR_11 = FUNC_1(VAR_13) ? FUNC_3(VAR_13) : 0;
 } else {
  FUNC_4(&VAR_9->dev, "no minor number available!\n");
  VAR_11 = -VAR_0;
 }
 if (VAR_11 == 0) {
  FUNC_13(VAR_12, VAR_7);
  FUNC_9(&VAR_10->device_entry, &VAR_5);
 }
 FUNC_12(&VAR_6);

 if (VAR_11 == 0)
  FUNC_14(VAR_9, VAR_10);
 else
  FUNC_7(VAR_10);

 return VAR_11;
}
