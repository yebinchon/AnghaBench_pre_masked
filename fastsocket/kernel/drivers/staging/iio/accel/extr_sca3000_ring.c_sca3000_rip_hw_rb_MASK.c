
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int bpse; int lock; } ;
struct iio_ring_buffer {int dummy; } ;
struct iio_hw_ring_buffer {struct iio_dev* private; } ;
struct iio_dev {struct sca3000_state* dev_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_hw_ring_buffer* FUNC_0 (struct iio_ring_buffer*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int**,int) ;

__attribute__((used)) static int FUNC_5(struct iio_ring_buffer *VAR_2,
        size_t VAR_3, u8 **VAR_4, int *VAR_5)
{
 struct iio_hw_ring_buffer *VAR_6 = FUNC_0(VAR_2);
 struct iio_dev *VAR_7 = VAR_6->private;
 struct sca3000_state *VAR_8 = VAR_7->dev_data;
 u8 *VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0;
 int VAR_13 = 1;

 if (VAR_8->bpse == 11)
  VAR_13 = 2;

 FUNC_2(&VAR_8->lock);






 VAR_10 = FUNC_4(VAR_8,
    VAR_0,
    &VAR_9, 1);
 if (VAR_10)
  goto error_ret;
 else
  VAR_11 = VAR_9[1];



 FUNC_1(VAR_9);
 if (VAR_3 > VAR_11 * VAR_13)
  VAR_12 = VAR_11*VAR_13;
 else
  VAR_12 = VAR_3 - (VAR_3 % (VAR_13));


 *VAR_5 = 1;
 VAR_10 = FUNC_4(VAR_8,
    VAR_1,
    VAR_4, VAR_12);
error_ret:
 FUNC_3(&VAR_8->lock);

 return VAR_10 ? VAR_10 : VAR_12;
}
