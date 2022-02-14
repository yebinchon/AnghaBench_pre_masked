
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct max1363_state {int poll_work; TYPE_2__* indio_dev; } ;
struct iio_dev {TYPE_4__* ring; int modes; TYPE_3__* pollfunc; struct max1363_state* dev_data; } ;
struct TYPE_9__ {int * predisable; int * preenable; int * postenable; } ;
struct TYPE_8__ {struct iio_dev* private_data; int * poll_func_main; } ;
struct TYPE_7__ {TYPE_1__* ring; } ;
struct TYPE_6__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_3__* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_5(struct iio_dev *VAR_8)
{
 struct max1363_state *VAR_9 = VAR_8->dev_data;
 int VAR_10 = 0;

 VAR_8->ring = FUNC_2(VAR_8);
 if (!VAR_8->ring) {
  VAR_10 = -VAR_0;
  goto error_ret;
 }

 FUNC_1(&VAR_9->indio_dev->ring->access);
 VAR_8->pollfunc = FUNC_4(sizeof(*VAR_8->pollfunc), VAR_1);
 if (VAR_8->pollfunc == ((void*)0)) {
  VAR_10 = -VAR_0;
  goto error_deallocate_sw_rb;
 }

 VAR_8->pollfunc->poll_func_main = &VAR_4;
 VAR_8->pollfunc->private_data = VAR_8;


 VAR_8->ring->postenable = &VAR_5;
 VAR_8->ring->preenable = &VAR_7;
 VAR_8->ring->predisable = &VAR_6;
 FUNC_0(&VAR_9->poll_work, &VAR_3);


 VAR_8->modes |= VAR_2;
 return 0;
error_deallocate_sw_rb:
 FUNC_3(VAR_8->ring);
error_ret:
 return VAR_10;
}
