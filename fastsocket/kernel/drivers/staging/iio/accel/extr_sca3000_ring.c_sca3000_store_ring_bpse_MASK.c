
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sca3000_state {int bpse; int lock; } ;
struct iio_ring_buffer {TYPE_1__* indio_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct sca3000_state* dev_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_ring_buffer* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sca3000_state*,int ,int**,int) ;
 int FUNC_4 (struct sca3000_state*,int ,int) ;
 int FUNC_5 (char const*,int,long*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5,
          size_t VAR_6)
{
 struct iio_ring_buffer *VAR_7 = FUNC_0(VAR_3);
 struct sca3000_state *VAR_8 = VAR_7->indio_dev->dev_data;
 int VAR_9;
 u8 *VAR_10;
 long VAR_11;
 VAR_9 = FUNC_5(VAR_5, 10, &VAR_11);
 if (VAR_9)
  return VAR_9;

 FUNC_1(&VAR_8->lock);

 VAR_9 = FUNC_3(VAR_8, VAR_1, &VAR_10, 1);
 if (!VAR_9)
  switch (VAR_11) {
  case 8:
   VAR_9 = FUNC_4(VAR_8, VAR_1,
      VAR_10[1] | VAR_2);
   VAR_8->bpse = 8;
   break;
  case 11:
   VAR_9 = FUNC_4(VAR_8, VAR_1,
      VAR_10[1] & ~VAR_2);
   VAR_8->bpse = 11;
   break;
  default:
   VAR_9 = -VAR_0;
   break;
  }
 FUNC_2(&VAR_8->lock);

 return VAR_9 ? VAR_9 : VAR_6;
}
