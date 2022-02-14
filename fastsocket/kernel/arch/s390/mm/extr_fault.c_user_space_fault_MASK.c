
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ar4; } ;
struct TYPE_5__ {TYPE_1__ mm_segment; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(unsigned long VAR_3)
{




 VAR_3 &= 3;
 if (VAR_3 == 2)

  return VAR_1->thread.mm_segment.ar4;
 if (VAR_2 == VAR_0)

  return VAR_3 == 3;






 return VAR_3 != 3;
}
