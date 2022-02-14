
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; int name; } ;
struct twlreg_info {TYPE_1__ desc; } ;
struct regulation_constraints {int valid_modes_mask; int valid_ops_mask; } ;
struct regulator_init_data {struct regulation_constraints constraints; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_5__ {struct regulator_init_data* platform_data; } ;
struct platform_device {scalar_t__ id; TYPE_2__ dev; } ;


 int FUNC_0 (struct twlreg_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,char*,int ,int) ;
 int FUNC_4 (struct platform_device*,struct regulator_dev*) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,TYPE_2__*,struct regulator_init_data*,struct twlreg_info*) ;
 struct twlreg_info* VAR_7 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_8)
{
 int VAR_9;
 struct twlreg_info *VAR_10;
 struct regulator_init_data *VAR_11;
 struct regulation_constraints *VAR_12;
 struct regulator_dev *VAR_13;

 for (VAR_9 = 0, VAR_10 = ((void*)0); VAR_9 < FUNC_0(VAR_7); VAR_9++) {
  if (VAR_7[VAR_9].desc.id != VAR_8->id)
   continue;
  VAR_10 = VAR_7 + VAR_9;
  break;
 }
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = VAR_8->dev.platform_data;
 if (!VAR_11)
  return -VAR_0;




 VAR_12 = &VAR_11->constraints;
 VAR_12->valid_modes_mask &= VAR_5 | VAR_6;
 VAR_12->valid_ops_mask &= VAR_4
    | VAR_2
    | VAR_3;

 VAR_13 = FUNC_5(&VAR_10->desc, &VAR_8->dev, VAR_11, VAR_10);
 if (FUNC_1(VAR_13)) {
  FUNC_3(&VAR_8->dev, "can't register %s, %ld\n",
    VAR_10->desc.name, FUNC_2(VAR_13));
  return FUNC_2(VAR_13);
 }
 FUNC_4(VAR_8, VAR_13);
 return 0;
}
