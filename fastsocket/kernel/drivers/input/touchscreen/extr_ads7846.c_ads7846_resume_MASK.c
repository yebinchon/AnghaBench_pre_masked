
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct ads7846 {int lock; scalar_t__ is_suspended; } ;


 int FUNC_0 (struct ads7846*) ;
 struct ads7846* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_0)
{
 struct ads7846 *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_2(&VAR_1->lock);

 VAR_1->is_suspended = 0;
 FUNC_0(VAR_1);

 FUNC_3(&VAR_1->lock);

 return 0;
}
