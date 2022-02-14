
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int owner; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct iio_trigger *VAR_0)
{
 FUNC_1(&VAR_0->dev);
 FUNC_0(VAR_0->owner);
}
