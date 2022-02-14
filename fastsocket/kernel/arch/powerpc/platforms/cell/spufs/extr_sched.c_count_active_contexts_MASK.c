
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nr_active; } ;
struct TYPE_3__ {scalar_t__ nr_waiting; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static unsigned long FUNC_0(void)
{
 int VAR_3 = 0, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3 += VAR_1[VAR_4].nr_active;
 VAR_3 += VAR_2->nr_waiting;

 return VAR_3;
}
