
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int actionid; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(unsigned int VAR_3, uint32_t *VAR_4)
{
 if (VAR_3 >= VAR_1) {
  return VAR_0;
 }

 *VAR_4 = VAR_2[VAR_3].actionid;
 return 0;
}
