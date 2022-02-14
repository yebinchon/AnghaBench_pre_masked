
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* tdt; } ;
struct TYPE_3__ {int stop; int start; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(int VAR_1)
{
 return (VAR_0->tdt[VAR_1].stop - VAR_0->tdt[VAR_1].start)/sizeof(u32) + 1;
}
