
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_devmap {int dummy; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 struct dasd_devmap* FUNC_1 (int ,int ) ;
 struct dasd_devmap* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct dasd_devmap *
FUNC_4(struct ccw_device *VAR_1)
{
 struct dasd_devmap *VAR_2;

 VAR_2 = FUNC_2(FUNC_3(&VAR_1->dev));
 if (FUNC_0(VAR_2))
  VAR_2 = FUNC_1(FUNC_3(&VAR_1->dev),
     VAR_0);
 return VAR_2;
}
