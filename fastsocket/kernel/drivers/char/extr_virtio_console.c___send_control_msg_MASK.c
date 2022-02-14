
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct virtqueue {int dummy; } ;
struct virtio_console_control {unsigned int event; unsigned int value; int id; } ;
struct scatterlist {int dummy; } ;
struct ports_device {int c_ovq_lock; struct virtqueue* c_ovq; } ;
typedef int ssize_t ;
typedef int cpkt ;


 int FUNC_0 () ;
 int FUNC_1 (struct scatterlist*,struct virtio_console_control*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ports_device*) ;
 scalar_t__ FUNC_5 (struct virtqueue*,struct scatterlist*,int,int ,struct virtio_console_control*) ;
 int FUNC_6 (struct virtqueue*,unsigned int*) ;
 int FUNC_7 (struct virtqueue*) ;

__attribute__((used)) static ssize_t FUNC_8(struct ports_device *VAR_0, u32 VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{
 struct scatterlist VAR_4[1];
 struct virtio_console_control VAR_5;
 struct virtqueue *VAR_6;
 unsigned int VAR_7;

 if (!FUNC_4(VAR_0))
  return 0;

 VAR_5.id = VAR_1;
 VAR_5.event = VAR_2;
 VAR_5.value = VAR_3;

 VAR_6 = VAR_0->c_ovq;

 FUNC_1(VAR_4, &VAR_5, sizeof(VAR_5));

 FUNC_2(&VAR_0->c_ovq_lock);
 if (FUNC_5(VAR_6, VAR_4, 1, 0, &VAR_5) >= 0) {
  FUNC_7(VAR_6);
  while (!FUNC_6(VAR_6, &VAR_7))
   FUNC_0();
 }
 FUNC_3(&VAR_0->c_ovq_lock);
 return 0;
}
