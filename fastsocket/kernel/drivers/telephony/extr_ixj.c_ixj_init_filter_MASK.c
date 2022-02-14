
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int low; } ;
struct TYPE_9__ {scalar_t__* filter_en; TYPE_1__ ver; } ;
struct TYPE_8__ {int filter; int freq; scalar_t__ enable; } ;
typedef TYPE_2__ IXJ_FILTER ;
typedef TYPE_3__ IXJ ;


 scalar_t__ FUNC_0 (unsigned short,TYPE_3__*) ;
 unsigned short** VAR_0 ;

__attribute__((used)) static int FUNC_1(IXJ *VAR_1, IXJ_FILTER * VAR_2)
{
 unsigned short VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2->filter > 3) {
  return -1;
 }
 if (FUNC_0(0x5154 + VAR_2->filter, VAR_1))

  return -1;
 if (!VAR_2->enable) {
  if (FUNC_0(0x5152, VAR_1))

   return -1;
  else
   return 0;
 } else {
  if (FUNC_0(0x5153, VAR_1))

   return -1;

  if (FUNC_0(0x5154 + VAR_2->filter, VAR_1))
   return -1;
 }
 if (VAR_2->freq < 12 && VAR_2->freq > 3) {

  if (FUNC_0(0x5170 + VAR_2->freq, VAR_1))
   return -1;
 } else if (VAR_2->freq > 11) {





  if (FUNC_0(0x5170 + VAR_2->filter, VAR_1))
   return -1;
  if (VAR_1->ver.low != 0x12) {
   VAR_3 = 0x515B;
   VAR_5 = 19;
  } else {
   VAR_3 = 0x515E;
   VAR_5 = 15;
  }
  if (FUNC_0(VAR_3, VAR_1))
   return -1;
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   if (FUNC_0(VAR_0[VAR_2->freq - 12][VAR_4], VAR_1))
    return -1;
  }
 }
 VAR_1->filter_en[VAR_2->filter] = VAR_2->enable;
 return 0;
}
