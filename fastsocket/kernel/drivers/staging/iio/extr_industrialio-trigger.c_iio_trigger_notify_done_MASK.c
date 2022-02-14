
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {scalar_t__ use_count; scalar_t__ timestamp; scalar_t__ (* try_reenable ) (struct iio_trigger*) ;} ;


 int FUNC_0 (struct iio_trigger*) ;
 scalar_t__ FUNC_1 (struct iio_trigger*) ;

void FUNC_2(struct iio_trigger *VAR_0)
{
 VAR_0->use_count--;
 if (VAR_0->use_count == 0 && VAR_0->try_reenable)
  if (VAR_0->try_reenable(VAR_0)) {

   VAR_0->timestamp = 0;
   FUNC_0(VAR_0);
  }
}
