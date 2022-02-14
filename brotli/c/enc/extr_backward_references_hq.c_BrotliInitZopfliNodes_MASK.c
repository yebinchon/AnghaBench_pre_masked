
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cost; } ;
struct TYPE_5__ {int length; TYPE_1__ u; scalar_t__ dcode_insert_length; scalar_t__ distance; } ;
typedef TYPE_2__ ZopfliNode ;


 int VAR_0 ;

void FUNC_0(ZopfliNode* VAR_1, size_t VAR_2) {
  ZopfliNode VAR_3;
  size_t VAR_4;
  VAR_3.length = 1;
  VAR_3.distance = 0;
  VAR_3.dcode_insert_length = 0;
  VAR_3.u.cost = VAR_0;
  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) VAR_1[VAR_4] = VAR_3;
}
