
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nodeId; } ;
typedef TYPE_1__ ShardPlacement ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const ShardPlacement *VAR_2 = *((const ShardPlacement **) VAR_0);
 const ShardPlacement *VAR_3 = *((const ShardPlacement **) VAR_1);


 if (VAR_2->nodeId < VAR_3->nodeId)
 {
  return -1;
 }
 else if (VAR_2->nodeId > VAR_3->nodeId)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
