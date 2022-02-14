
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct virtio_device {int dummy; } ;
struct lguest_device_desc {int feature_len; } ;
struct TYPE_2__ {struct lguest_device_desc* desc; } ;


 int* FUNC_0 (struct lguest_device_desc*) ;
 unsigned int FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (struct virtio_device*) ;

__attribute__((used)) static u32 FUNC_3(struct virtio_device *VAR_0)
{
 unsigned int VAR_1;
 u32 VAR_2 = 0;
 struct lguest_device_desc *VAR_3 = FUNC_2(VAR_0)->desc;
 u8 *VAR_4 = FUNC_0(VAR_3);


 for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_3->feature_len * 8, 32); VAR_1++)
  if (VAR_4[VAR_1 / 8] & (1 << (VAR_1 % 8)))
   VAR_2 |= (1 << VAR_1);

 return VAR_2;
}
