
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct vhost_virtqueue {int used_flags; scalar_t__ avail_idx; TYPE_2__* avail; TYPE_1__* used; } ;
struct vhost_dev {int dummy; } ;
struct TYPE_4__ {int idx; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (struct vhost_virtqueue*) ;
 int FUNC_3 (struct vhost_dev*,int ) ;
 int FUNC_4 (struct vhost_virtqueue*,scalar_t__) ;
 int FUNC_5 (struct vhost_virtqueue*) ;
 int FUNC_6 (struct vhost_virtqueue*,char*,int *,int) ;

bool FUNC_7(struct vhost_dev *VAR_2, struct vhost_virtqueue *VAR_3)
{
 u16 VAR_4;
 int VAR_5;
 if (!(VAR_3->used_flags & VAR_1))
  return 0;
 VAR_3->used_flags &= ~VAR_1;
 if (!FUNC_3(VAR_2, VAR_0)) {
  VAR_5 = FUNC_5(VAR_3);
  if (VAR_5) {
   FUNC_6(VAR_3, "Failed to enable notification at %p: %d\n",
          &VAR_3->used->flags, VAR_5);
   return 0;
  }
 } else {
  VAR_5 = FUNC_4(VAR_3, VAR_3->avail_idx);
  if (VAR_5) {
   FUNC_6(VAR_3, "Failed to update avail event index at %p: %d\n",
          FUNC_2(VAR_3), VAR_5);
   return 0;
  }
 }


 FUNC_1();
 VAR_5 = FUNC_0(VAR_4, &VAR_3->avail->idx);
 if (VAR_5) {
  FUNC_6(VAR_3, "Failed to check avail idx at %p: %d\n",
         &VAR_3->avail->idx, VAR_5);
  return 0;
 }

 return VAR_4 != VAR_3->avail_idx;
}
