
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int last_avail_idx; } ;



void FUNC_0(struct vhost_virtqueue *VAR_0, int VAR_1)
{
 VAR_0->last_avail_idx -= VAR_1;
}
