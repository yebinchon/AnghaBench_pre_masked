
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {TYPE_1__* used; TYPE_2__* avail; } ;
struct vring_virtqueue {TYPE_3__ vring; scalar_t__ event; scalar_t__ num_added; } ;
struct virtqueue {int dummy; } ;
struct TYPE_5__ {scalar_t__ idx; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (struct vring_virtqueue*) ;
 int FUNC_1 (struct vring_virtqueue*) ;
 int VAR_0 ;
 struct vring_virtqueue* FUNC_2 (struct virtqueue*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;

bool FUNC_7(struct virtqueue *VAR_1)
{
 struct vring_virtqueue *VAR_2 = FUNC_2(VAR_1);
 u16 VAR_3, VAR_4;
 bool VAR_5;

 FUNC_1(VAR_2);


 FUNC_4();

 VAR_4 = VAR_2->vring.avail->idx;
 VAR_3 = VAR_2->vring.avail->idx = VAR_4 + VAR_2->num_added;
 VAR_2->num_added = 0;


 FUNC_3();

 if (VAR_2->event) {
  VAR_5 = FUNC_6(FUNC_5(&VAR_2->vring),
           VAR_3, VAR_4);
 } else {
  VAR_5 = !(VAR_2->vring.used->flags & VAR_0);
 }
 FUNC_0(VAR_2);
 return VAR_5;
}
