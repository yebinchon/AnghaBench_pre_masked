
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_2__ {scalar_t__ placementId; } ;
typedef TYPE_1__ ShardPlacement ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const ShardPlacement *VAR_2 = *((const ShardPlacement **) VAR_0);
 const ShardPlacement *VAR_3 = *((const ShardPlacement **) VAR_1);

 uint64 VAR_4 = VAR_2->placementId;
 uint64 VAR_5 = VAR_3->placementId;

 if (VAR_4 < VAR_5)
 {
  return -1;
 }
 else if (VAR_4 > VAR_5)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
