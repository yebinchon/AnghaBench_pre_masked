
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int pollfunc; scalar_t__ trig; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0)
{
 if (VAR_0->trig)
  return FUNC_0(VAR_0->trig,
           VAR_0->pollfunc);
 else
  return 0;
}
