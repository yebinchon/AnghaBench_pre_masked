
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_macs_set; } ;
struct TYPE_4__ {TYPE_1__ exact_match; } ;
struct bnx2x_mcast_obj {TYPE_2__ registry; } ;



__attribute__((used)) static int FUNC_0(struct bnx2x_mcast_obj *VAR_0)
{
 return VAR_0->registry.exact_match.num_macs_set;
}
