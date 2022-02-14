
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_descr {TYPE_1__* hw; } ;
struct TYPE_2__ {int rd_status; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct ring_descr *VAR_1)
{
 return ((VAR_1->hw->rd_status & VAR_0) != 0);
}
