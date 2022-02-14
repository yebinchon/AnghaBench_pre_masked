
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ shardId; int relationId; } ;
typedef TYPE_1__ ShardInterval ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 char FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(ShardInterval *VAR_2, ShardInterval *VAR_3)
{
 char VAR_4 = FUNC_1(VAR_2->relationId);
 char VAR_5 = FUNC_1(VAR_3->relationId);


 if (VAR_2->shardId == VAR_3->shardId)
 {
  return 1;
 }


 VAR_4 = FUNC_1(VAR_2->relationId);
 VAR_5 = FUNC_1(VAR_3->relationId);
 if (VAR_4 != VAR_5)
 {
  return 0;
 }

 if (VAR_4 == VAR_0)
 {
  return FUNC_0(VAR_2, VAR_3);
 }
 else if (VAR_4 == VAR_1)
 {





  return 1;
 }


 return 0;
}
