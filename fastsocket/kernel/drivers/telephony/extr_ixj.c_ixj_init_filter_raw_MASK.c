
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int low; } ;
struct TYPE_9__ {scalar_t__* filter_en; TYPE_1__ ver; } ;
struct TYPE_8__ {int filter; unsigned short* coeff; scalar_t__ enable; } ;
typedef TYPE_2__ IXJ_FILTER_RAW ;
typedef TYPE_3__ IXJ ;


 scalar_t__ FUNC_0 (unsigned short,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(IXJ *VAR_0, IXJ_FILTER_RAW * VAR_1)
{
 unsigned short VAR_2;
 int VAR_3, VAR_4;
 if (VAR_1->filter > 3) {
  return -1;
 }
 if (FUNC_0(0x5154 + VAR_1->filter, VAR_0))
  return -1;

 if (!VAR_1->enable) {
  if (FUNC_0(0x5152, VAR_0))
   return -1;
  else
   return 0;
 } else {
  if (FUNC_0(0x5153, VAR_0))
   return -1;

  if (FUNC_0(0x5154 + VAR_1->filter, VAR_0))
   return -1;
 }





 if (FUNC_0(0x5170 + VAR_1->filter, VAR_0))
  return -1;
 if (VAR_0->ver.low != 0x12) {
  VAR_2 = 0x515B;
  VAR_4 = 19;
 } else {
  VAR_2 = 0x515E;
  VAR_4 = 15;
 }
 if (FUNC_0(VAR_2, VAR_0))
  return -1;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (FUNC_0(VAR_1->coeff[VAR_3], VAR_0))
   return -1;
 }
 VAR_0->filter_en[VAR_1->filter] = VAR_1->enable;
 return 0;
}
