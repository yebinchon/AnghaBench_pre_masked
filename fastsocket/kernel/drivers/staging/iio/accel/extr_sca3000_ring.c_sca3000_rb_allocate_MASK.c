
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; int * type; } ;
struct iio_ring_buffer {TYPE_1__ dev; } ;
struct iio_hw_ring_buffer {struct iio_ring_buffer buf; struct iio_dev* private; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct iio_ring_buffer*,struct iio_dev*) ;
 struct iio_hw_ring_buffer* FUNC_3 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct iio_ring_buffer *FUNC_4(struct iio_dev *VAR_2)
{
 struct iio_ring_buffer *VAR_3;
 struct iio_hw_ring_buffer *VAR_4;

 VAR_4 = FUNC_3(sizeof *VAR_4, VAR_0);
 if (!VAR_4)
  return 0;
 VAR_4->private = VAR_2;
 VAR_3 = &VAR_4->buf;
 FUNC_2(VAR_3, VAR_2);
 VAR_3->dev.type = &VAR_1;
 FUNC_1(&VAR_3->dev);
 VAR_3->dev.parent = &VAR_2->dev;
 FUNC_0(&VAR_3->dev, (void *)VAR_3);

 return VAR_3;
}
