
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_blk {int vq; int vdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct virtio_blk *VAR_1)
{
 int VAR_2 = 0;


 VAR_1->vq = FUNC_2(VAR_1->vdev, VAR_0, "requests");
 if (FUNC_0(VAR_1->vq))
  VAR_2 = FUNC_1(VAR_1->vq);

 return VAR_2;
}
