
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct bintime {int dummy; } ;
struct TYPE_2__ {int s_adj_nsx; int s_scale_ns; int tick_scale_x; scalar_t__ offset_count; } ;


 TYPE_1__ VAR_0 ;
 struct bintime FUNC_0 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static struct bintime
FUNC_1(uint64_t VAR_1)
{
 uint64_t VAR_2;





 VAR_2 = VAR_1 - VAR_0.offset_count;

 return FUNC_0(VAR_2, VAR_0.tick_scale_x, VAR_0.s_scale_ns, VAR_0.s_adj_nsx);
}
