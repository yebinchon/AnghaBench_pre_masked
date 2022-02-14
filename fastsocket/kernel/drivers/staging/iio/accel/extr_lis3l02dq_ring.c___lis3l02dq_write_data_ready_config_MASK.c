
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_event_handler_list {int dummy; } ;
struct iio_dev {TYPE_1__** interrupts; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int ev_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_event_handler_list*,int *) ;
 int FUNC_2 (struct iio_event_handler_list*,int *) ;
 int FUNC_3 (struct device*,int ,int*) ;
 int FUNC_4 (struct device*,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2,
            struct
            iio_event_handler_list *VAR_3,
            bool VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 bool VAR_7;
 struct iio_dev *VAR_8 = FUNC_0(VAR_2);


 VAR_5 = FUNC_3(VAR_2,
           VAR_0,
           &VAR_6);
 if (VAR_5)
  goto error_ret;

 VAR_7
  = VAR_6 & VAR_1;


 if (!VAR_4 && VAR_7) {

  VAR_6 &= ~VAR_1;

  VAR_5 = FUNC_4(VAR_2,
      VAR_0,
      &VAR_6);
  if (VAR_5)
   goto error_ret;
  VAR_5 = FUNC_4(VAR_2,
      VAR_0,
      &VAR_6);
  if (VAR_5)
   goto error_ret;

  FUNC_2(VAR_3,
        &VAR_8->interrupts[0]
        ->ev_list);


 } else if (VAR_4 && !VAR_7) {

  VAR_6 |= VAR_1;
  FUNC_1(VAR_3, &VAR_8->interrupts[0]->ev_list);
  VAR_5 = FUNC_4(VAR_2,
      VAR_0,
      &VAR_6);
  if (VAR_5)
   goto error_ret;
 }

 return 0;
error_ret:
 return VAR_5;
}
