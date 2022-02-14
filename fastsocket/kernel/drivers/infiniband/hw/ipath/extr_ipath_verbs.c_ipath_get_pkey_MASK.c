
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {TYPE_1__** ipath_pd; } ;
struct TYPE_2__ {unsigned int* port_pkeys; } ;


 unsigned int FUNC_0 (unsigned int*) ;

unsigned FUNC_1(struct ipath_devdata *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2;


 if (VAR_1 >= FUNC_0(VAR_0->ipath_pd[0]->port_pkeys))
  VAR_2 = 0;
 else
  VAR_2 = VAR_0->ipath_pd[0]->port_pkeys[VAR_1];

 return VAR_2;
}
