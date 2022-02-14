
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7164_unit {scalar_t__ type; scalar_t__ i2c_bus_nr; int i2c_bus_addr; int i2c_reg_len; } ;
struct saa7164_i2c {scalar_t__ nr; struct saa7164_dev* dev; } ;
struct saa7164_dev {size_t board; } ;
struct TYPE_2__ {struct saa7164_unit* unit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_0(struct saa7164_i2c *VAR_3, int VAR_4)
{




 struct saa7164_dev *VAR_5 = VAR_3->dev;
 struct saa7164_unit *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_2[VAR_5->board].unit[VAR_7];

  if (VAR_6->type == VAR_1)
   continue;

  if ((VAR_3->nr == VAR_6->i2c_bus_nr) &&
   (VAR_4 == VAR_6->i2c_bus_addr))
   return VAR_6->i2c_reg_len;
 }

 return -1;
}
