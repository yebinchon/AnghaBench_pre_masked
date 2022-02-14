
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_balloon {int acked; } ;


 int FUNC_0 (int *) ;
 struct virtio_balloon* FUNC_1 (struct virtqueue*,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct virtqueue *VAR_0)
{
 struct virtio_balloon *VAR_1;
 unsigned int VAR_2;

 VAR_1 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_1)
  FUNC_0(&VAR_1->acked);
}
