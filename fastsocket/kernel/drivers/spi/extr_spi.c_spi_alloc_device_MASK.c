
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; } ;
struct spi_master {TYPE_1__ dev; } ;
struct TYPE_4__ {int release; int * bus; struct device* parent; } ;
struct spi_device {TYPE_2__ dev; struct spi_master* master; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct spi_device* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct spi_master*) ;
 int FUNC_4 (struct spi_master*) ;
 int VAR_2 ;

struct spi_device *FUNC_5(struct spi_master *VAR_3)
{
 struct spi_device *VAR_4;
 struct device *VAR_5 = VAR_3->dev.parent;

 if (!FUNC_3(VAR_3))
  return ((void*)0);

 VAR_4 = FUNC_2(sizeof *VAR_4, VAR_0);
 if (!VAR_4) {
  FUNC_0(VAR_5, "cannot alloc spi_device\n");
  FUNC_4(VAR_3);
  return ((void*)0);
 }

 VAR_4->master = VAR_3;
 VAR_4->dev.parent = VAR_5;
 VAR_4->dev.bus = &VAR_1;
 VAR_4->dev.release = VAR_2;
 FUNC_1(&VAR_4->dev);
 return VAR_4;
}
