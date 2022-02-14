
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* used; } ;
struct vring_virtqueue {scalar_t__ last_used_idx; TYPE_2__ vring; } ;
struct TYPE_3__ {scalar_t__ idx; } ;



__attribute__((used)) static inline bool FUNC_0(const struct vring_virtqueue *VAR_0)
{
 return VAR_0->last_used_idx != VAR_0->vring.used->idx;
}
