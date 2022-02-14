
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pmap_paddr_t ;
struct TYPE_5__ {int len; int addr; } ;
typedef TYPE_1__ pmap_io_range_t ;
struct TYPE_6__ {unsigned int wimg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned int
FUNC_2(pmap_paddr_t VAR_4)
{
 pmap_io_range_t VAR_5 = {.addr = VAR_4, .len = VAR_0};
 unsigned int VAR_6 = 0, VAR_7 = VAR_3 - 1;
 FUNC_0(VAR_3 > 0);

 for (;;) {
  unsigned int VAR_8 = (VAR_6 + VAR_7) / 2;
  int VAR_9 = FUNC_1(&VAR_5, &VAR_2[VAR_8]);
  if (VAR_9 == 0)
   return VAR_2[VAR_8].wimg;
  else if (VAR_6 == VAR_7)
   break;
  else if (VAR_9 > 0)
   VAR_6 = VAR_8 + 1;
  else
   VAR_7 = VAR_8;
 };

 return (VAR_1);
}
