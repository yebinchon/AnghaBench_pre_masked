
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {TYPE_1__* config; } ;
struct TYPE_2__ {int (* del_vqs ) (struct virtio_device*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (struct virtio_device*) ;
 int * FUNC_5 (struct virtio_device*,int ,char*) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_6(struct virtio_device *VAR_4)
{
 int VAR_5;

 if (VAR_3) {

  return -VAR_0;
 }

 VAR_3 = FUNC_5(VAR_4, VAR_1, "input");
 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
  return VAR_5;
 }

 VAR_5 = FUNC_2(&VAR_2);
 if (VAR_5) {
  VAR_4->config->del_vqs(VAR_4);
  VAR_3 = ((void*)0);
  return VAR_5;
 }

 FUNC_3();
 return 0;
}
