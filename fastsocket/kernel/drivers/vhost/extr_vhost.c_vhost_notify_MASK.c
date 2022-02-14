
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {scalar_t__ avail_idx; scalar_t__ last_avail_idx; int signalled_used; int signalled_used_valid; int last_used_idx; TYPE_1__* avail; } ;
struct vhost_dev {int dummy; } ;
typedef int __u16 ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct vhost_dev*,int ) ;
 int FUNC_5 (struct vhost_virtqueue*) ;
 int FUNC_6 (struct vhost_virtqueue*,char*) ;
 int FUNC_7 (int,int,int) ;

__attribute__((used)) static bool FUNC_8(struct vhost_dev *VAR_3, struct vhost_virtqueue *VAR_4)
{
 __u16 VAR_5, VAR_6, VAR_7;
 bool VAR_8;



 FUNC_2();

 if (FUNC_4(VAR_3, VAR_0) &&
     FUNC_3(VAR_4->avail_idx == VAR_4->last_avail_idx))
  return 1;

 if (!FUNC_4(VAR_3, VAR_1)) {
  __u16 VAR_9;
  if (FUNC_0(VAR_9, &VAR_4->avail->flags)) {
   FUNC_6(VAR_4, "Failed to get flags");
   return 1;
  }
  return !(VAR_9 & VAR_2);
 }
 VAR_5 = VAR_4->signalled_used;
 VAR_8 = VAR_4->signalled_used_valid;
 VAR_6 = VAR_4->signalled_used = VAR_4->last_used_idx;
 VAR_4->signalled_used_valid = 1;

 if (FUNC_3(!VAR_8))
  return 1;

 if (FUNC_1(VAR_7, FUNC_5(VAR_4))) {
  FUNC_6(VAR_4, "Failed to get used event idx");
  return 1;
 }
 return FUNC_7(VAR_7, VAR_6, VAR_5);
}
