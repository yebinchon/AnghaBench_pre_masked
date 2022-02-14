
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_rq {TYPE_1__* to_use; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct vnic_rq *VAR_1)
{
 return (VAR_1->to_use->index & VAR_0) == 0;
}
