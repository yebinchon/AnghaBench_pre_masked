
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct iio_event_attr {int mask; TYPE_2__* listel; } ;
struct iio_dev {int mlock; TYPE_1__** interrupts; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {scalar_t__ refcount; } ;
struct TYPE_4__ {int ev_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (struct device*,int ,int*) ;
 int FUNC_4 (struct device*,int ,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct iio_event_attr* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5,
      size_t VAR_6)
{
 struct iio_event_attr *VAR_7 = FUNC_7(VAR_4);
 struct iio_dev *VAR_8 = FUNC_0(VAR_3);
 int VAR_9, VAR_10, VAR_11 = 0;
 u8 VAR_12, VAR_13;
 bool VAR_14;

 VAR_14 = !(VAR_5[0] == '0');

 FUNC_5(&VAR_8->mlock);

 VAR_9 = FUNC_3(VAR_3,
           VAR_2,
           &VAR_12);
 if (VAR_9)
  goto error_mutex_unlock;


 VAR_9 = FUNC_3(VAR_3,
           VAR_0,
           &VAR_13);
 if (VAR_9)
  goto error_mutex_unlock;
 VAR_10 = !!(VAR_12 & VAR_7->mask);
 if (VAR_14 == 0 && VAR_10) {
  VAR_12 &= ~VAR_7->mask;
  VAR_11 = 1;
  FUNC_2(VAR_7->listel,
       &VAR_8->interrupts[0]
       ->ev_list);
 } else if (VAR_14 == 1 && !VAR_10) {
  VAR_11 = 1;
  VAR_12 |= VAR_7->mask;
  FUNC_1(VAR_7->listel,
         &VAR_8->interrupts[0]->ev_list);
 }

 if (VAR_11) {
  VAR_9 = FUNC_4(VAR_3,
      VAR_2,
      &VAR_12);
  if (VAR_9)
   goto error_mutex_unlock;




  VAR_13 = VAR_7->listel->refcount ?
   (VAR_13 | VAR_1) :
   (VAR_13 & ~VAR_1);
  VAR_9 = FUNC_4(VAR_3,
      VAR_0,
      &VAR_13);
  if (VAR_9)
   goto error_mutex_unlock;
 }
error_mutex_unlock:
 FUNC_6(&VAR_8->mlock);

 return VAR_9 ? VAR_9 : VAR_6;
}
