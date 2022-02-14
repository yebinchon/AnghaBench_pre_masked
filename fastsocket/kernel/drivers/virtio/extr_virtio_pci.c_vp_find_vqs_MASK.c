
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vq_callback_t ;
struct virtqueue {int dummy; } ;
struct virtio_device {int dummy; } ;


 int FUNC_0 (struct virtio_device*,unsigned int,struct virtqueue**,int **,char const**,int,int) ;

__attribute__((used)) static int FUNC_1(struct virtio_device *VAR_0, unsigned VAR_1,
         struct virtqueue *VAR_2[],
         vq_callback_t *VAR_3[],
         const char *VAR_4[])
{
 int VAR_5;


 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1, 1);
 if (!VAR_5)
  return 0;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
     1, 0);
 if (!VAR_5)
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
      0, 0);
}
