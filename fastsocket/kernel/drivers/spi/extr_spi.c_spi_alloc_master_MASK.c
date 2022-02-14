
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; int * class; } ;
struct spi_master {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct device*) ;
 struct spi_master* FUNC_2 (unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct spi_master*,struct spi_master*) ;

struct spi_master *FUNC_4(struct device *VAR_2, unsigned VAR_3)
{
 struct spi_master *VAR_4;

 if (!VAR_2)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_3 + sizeof *VAR_4, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->dev);
 VAR_4->dev.class = &VAR_1;
 VAR_4->dev.parent = FUNC_1(VAR_2);
 FUNC_3(VAR_4, &VAR_4[1]);

 return VAR_4;
}
