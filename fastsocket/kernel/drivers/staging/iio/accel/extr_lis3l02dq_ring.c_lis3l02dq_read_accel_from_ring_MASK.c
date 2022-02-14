
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct iio_scan_el {scalar_t__ label; int number; } ;
struct iio_dev_attr {scalar_t__ address; } ;
struct iio_dev {TYPE_3__* ring; TYPE_1__* scan_el_attrs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s16 ;
struct TYPE_6__ {int (* read_last ) (TYPE_3__*,int *) ;int (* get_bpd ) (TYPE_3__*) ;} ;
struct TYPE_7__ {TYPE_2__ access; } ;
struct TYPE_5__ {scalar_t__* attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_dev*,int ) ;
 int FUNC_2 (struct iio_dev*,int ) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 struct iio_dev_attr* FUNC_8 (struct device_attribute*) ;
 struct iio_scan_el* FUNC_9 (struct device_attribute*) ;

ssize_t FUNC_10(struct device *VAR_3,
           struct device_attribute *VAR_4,
           char *VAR_5)
{
 struct iio_scan_el *VAR_6 = ((void*)0);
 int VAR_7, VAR_8 = 0, VAR_9 = 0;
 struct iio_dev_attr *VAR_10 = FUNC_8(VAR_4);
 struct iio_dev *VAR_11 = FUNC_0(VAR_3);
 s16 *VAR_12;

 while (VAR_11->scan_el_attrs->attrs[VAR_9]) {
  VAR_6 = FUNC_9((struct device_attribute *)
        (VAR_11->scan_el_attrs->attrs[VAR_9]));

  if (VAR_6->label == VAR_10->address)
   break;
  VAR_9++;
 }
 if (!VAR_11->scan_el_attrs->attrs[VAR_9]) {
  VAR_7 = -VAR_0;
  goto error_ret;
 }

 VAR_7 = FUNC_2(VAR_11, VAR_6->number);
 if (VAR_7 < 0)
  goto error_ret;
 if (VAR_7) {
  VAR_12 = FUNC_4(VAR_11->ring->access.get_bpd(VAR_11->ring),
          VAR_2);
  if (VAR_12 == ((void*)0))
   return -VAR_1;
  VAR_7 = VAR_11->ring->access.read_last(VAR_11->ring,
            (u8 *)VAR_12);
  if (VAR_7)
   goto error_free_data;
 } else {
  VAR_7 = -VAR_0;
  goto error_ret;
 }
 VAR_8 = FUNC_1(VAR_11, VAR_6->number);
 if (VAR_8 < 0) {
  VAR_7 = VAR_8;
  goto error_free_data;
 }
 VAR_8 = FUNC_5(VAR_5, "ring %d\n", VAR_12[VAR_8]);
error_free_data:
 FUNC_3(VAR_12);
error_ret:
 return VAR_7 ? VAR_7 : VAR_8;

}
