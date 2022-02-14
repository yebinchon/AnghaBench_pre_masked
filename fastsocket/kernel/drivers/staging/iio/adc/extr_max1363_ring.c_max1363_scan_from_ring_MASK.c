
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct max1363_state {TYPE_2__* current_mode; } ;
struct iio_dev {TYPE_3__* ring; struct max1363_state* dev_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* read_last ) (TYPE_3__*,char*) ;} ;
struct TYPE_6__ {TYPE_1__ access; } ;
struct TYPE_5__ {int numvals; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (char*,char*,...) ;
 int FUNC_4 (TYPE_3__*,char*) ;

ssize_t FUNC_5(struct device *VAR_2,
          struct device_attribute *VAR_3,
          char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_2);
 struct max1363_state *VAR_6 = VAR_5->dev_data;
 int VAR_7, VAR_8, VAR_9 = 0;
 char *VAR_10;

 VAR_10 = FUNC_2(VAR_6->current_mode->numvals*2, VAR_1);
 if (VAR_10 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto error_ret;
 }
 VAR_8 = VAR_5->ring->access.read_last(VAR_5->ring, VAR_10);
 if (VAR_8)
  goto error_free_ring_data;
 VAR_9 += FUNC_3(VAR_4+VAR_9, "ring ");
 for (VAR_7 = 0; VAR_7 < VAR_6->current_mode->numvals; VAR_7++)
  VAR_9 += FUNC_3(VAR_4 + VAR_9, "%d ",
          ((int)(VAR_10[VAR_7*2 + 0] & 0x0F) << 8)
          + ((int)(VAR_10[VAR_7*2 + 1])));
 VAR_9 += FUNC_3(VAR_4 + VAR_9, "\n");
 FUNC_1(VAR_10);

 return VAR_9;

error_free_ring_data:
 FUNC_1(VAR_10);
error_ret:
 return VAR_8;
}
