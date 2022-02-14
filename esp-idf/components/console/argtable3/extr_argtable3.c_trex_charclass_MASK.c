
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* _nodes; } ;
struct TYPE_5__ {int left; } ;
typedef TYPE_2__ TRex ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1(TRex *VAR_1,int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1,VAR_0);
 VAR_1->_nodes[VAR_3].left = VAR_2;
 return VAR_3;
}
