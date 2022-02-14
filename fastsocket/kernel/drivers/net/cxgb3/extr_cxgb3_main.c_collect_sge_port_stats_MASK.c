
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {int first_qset; int nqsets; } ;
struct TYPE_4__ {TYPE_1__* qs; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_3__ {scalar_t__* port_stats; } ;



__attribute__((used)) static unsigned long FUNC_0(struct adapter *VAR_0,
         struct port_info *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned long VAR_4 = 0;

 for (VAR_3 = VAR_1->first_qset; VAR_3 < VAR_1->first_qset + VAR_1->nqsets; ++VAR_3)
  VAR_4 += VAR_0->sge.qs[VAR_3].port_stats[VAR_2];
 return VAR_4;
}
