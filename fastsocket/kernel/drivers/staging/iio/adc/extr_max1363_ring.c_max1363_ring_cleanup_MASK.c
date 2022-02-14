
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int ring; int pollfunc; scalar_t__ trig; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct iio_dev *VAR_0)
{

 if (VAR_0->trig) {
  FUNC_0(VAR_0->trig);
  FUNC_2(VAR_0->trig,
           VAR_0->pollfunc);
 }
 FUNC_3(VAR_0->pollfunc);
 FUNC_1(VAR_0->ring);
}
