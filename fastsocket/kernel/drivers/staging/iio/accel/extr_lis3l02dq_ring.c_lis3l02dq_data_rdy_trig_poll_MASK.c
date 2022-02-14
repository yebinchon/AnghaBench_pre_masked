
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3l02dq_state {struct iio_trigger* trig; } ;
struct iio_trigger {int timestamp; } ;
struct iio_dev {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 struct lis3l02dq_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_trigger*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
           int VAR_2,
           s64 VAR_3,
           int VAR_4)
{
 struct lis3l02dq_state *VAR_5 = FUNC_0(VAR_1);
 struct iio_trigger *VAR_6 = VAR_5->trig;

 VAR_6->timestamp = VAR_3;
 FUNC_1(VAR_6);

 return VAR_0;
}
