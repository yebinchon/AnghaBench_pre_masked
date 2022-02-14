
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int disks; } ;
struct raid5_percpu {int * scribble; } ;
struct page {int dummy; } ;
typedef int addr_conv_t ;



__attribute__((used)) static addr_conv_t *FUNC_0(struct stripe_head *VAR_0,
     struct raid5_percpu *VAR_1)
{
 return VAR_1->scribble + sizeof(struct page *) * (VAR_0->disks + 2);
}
