
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nodePort; int nodeName; } ;
typedef TYPE_1__ ShardPlacement ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

int
FUNC_1(const void *VAR_1, const void *VAR_2)
{
 const ShardPlacement *VAR_3 = *((const ShardPlacement **) VAR_1);
 const ShardPlacement *VAR_4 = *((const ShardPlacement **) VAR_2);

 int VAR_5 = FUNC_0(VAR_3->nodeName, VAR_4->nodeName,
         VAR_0);
 if (VAR_5 != 0)
 {
  return VAR_5;
 }
 else if (VAR_3->nodePort > VAR_4->nodePort)
 {
  return 1;
 }
 else if (VAR_3->nodePort < VAR_4->nodePort)
 {
  return -1;
 }

 return 0;
}
