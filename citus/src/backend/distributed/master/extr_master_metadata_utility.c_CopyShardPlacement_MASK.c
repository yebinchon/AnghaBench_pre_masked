
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nodeName; } ;
typedef TYPE_1__ ShardPlacement ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void
FUNC_2(ShardPlacement *VAR_0, ShardPlacement *VAR_1)
{

 FUNC_0(VAR_1, VAR_0, sizeof(ShardPlacement));


 if (VAR_0->nodeName)
 {
  VAR_1->nodeName = FUNC_1(VAR_0->nodeName);
 }
}
