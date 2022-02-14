
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * class; int * parent; int * type; } ;
struct iio_ring_buffer {TYPE_1__ dev; } ;
struct iio_sw_ring_buffer {struct iio_ring_buffer buf; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (struct iio_ring_buffer*,struct iio_dev*) ;
 int VAR_2 ;
 struct iio_sw_ring_buffer* FUNC_3 (int,int ) ;

struct iio_ring_buffer *FUNC_4(struct iio_dev *VAR_3)
{
 struct iio_ring_buffer *VAR_4;
 struct iio_sw_ring_buffer *VAR_5;

 VAR_5 = FUNC_3(sizeof *VAR_5, VAR_0);
 if (!VAR_5)
  return 0;
 VAR_4 = &VAR_5->buf;

 FUNC_2(VAR_4, VAR_3);
 VAR_4->dev.type = &VAR_2;
 FUNC_1(&VAR_4->dev);
 VAR_4->dev.parent = &VAR_3->dev;
 VAR_4->dev.class = &VAR_1;
 FUNC_0(&VAR_4->dev, (void *)VAR_4);

 return VAR_4;
}
