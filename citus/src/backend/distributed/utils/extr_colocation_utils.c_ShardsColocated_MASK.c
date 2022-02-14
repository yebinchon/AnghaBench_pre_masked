
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int relationId; } ;
typedef TYPE_1__ ShardInterval ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

bool
FUNC_2(ShardInterval *VAR_0, ShardInterval *VAR_1)
{
 bool VAR_2 = FUNC_1(VAR_0->relationId,
             VAR_1->relationId);

 if (VAR_2)
 {
  bool VAR_3 = FUNC_0(VAR_0,
                VAR_1);
  return VAR_3;
 }

 return 0;
}
