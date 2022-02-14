
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lis3l02dq_state {int work_trigger_to_ring; } ;
struct iio_ring_buffer {int owner; int * predisable; int * postenable; int * preenable; int access; } ;
struct iio_dev {int scan_timestamp; struct iio_ring_buffer* ring; int modes; TYPE_1__* pollfunc; int * scan_el_attrs; struct lis3l02dq_state* dev_data; } ;
struct TYPE_8__ {int number; } ;
struct TYPE_7__ {int number; } ;
struct TYPE_6__ {int number; } ;
struct TYPE_5__ {struct iio_dev* private_data; int * poll_func_main; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 (struct iio_dev*,int ) ;
 struct iio_ring_buffer* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_ring_buffer*) ;
 TYPE_1__* FUNC_5 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_6(struct iio_dev *VAR_13)
{
 int VAR_14 = 0;
 struct lis3l02dq_state *VAR_15 = VAR_13->dev_data;
 struct iio_ring_buffer *VAR_16;
 FUNC_0(&VAR_15->work_trigger_to_ring, VAR_12);


 FUNC_2(VAR_13, VAR_4.number);
 FUNC_2(VAR_13, VAR_5.number);
 FUNC_2(VAR_13, VAR_6.number);
 VAR_13->scan_timestamp = 1;

 VAR_13->scan_el_attrs = &VAR_11;

 VAR_16 = FUNC_3(VAR_13);
 if (!VAR_16) {
  VAR_14 = -VAR_0;
  return VAR_14;
 }
 VAR_13->ring = VAR_16;

 FUNC_1(&VAR_16->access);
 VAR_16->preenable = &VAR_9;
 VAR_16->postenable = &VAR_7;
 VAR_16->predisable = &VAR_8;
 VAR_16->owner = VAR_3;

 VAR_13->pollfunc = FUNC_5(sizeof(*VAR_13->pollfunc), VAR_1);
 if (VAR_13->pollfunc == ((void*)0)) {
  VAR_14 = -VAR_0;
  goto error_iio_sw_rb_free;;
 }
 VAR_13->pollfunc->poll_func_main = &VAR_10;
 VAR_13->pollfunc->private_data = VAR_13;
 VAR_13->modes |= VAR_2;
 return 0;

error_iio_sw_rb_free:
 FUNC_4(VAR_13->ring);
 return VAR_14;
}
