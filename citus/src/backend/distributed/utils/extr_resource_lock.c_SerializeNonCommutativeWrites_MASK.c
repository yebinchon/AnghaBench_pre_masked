
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_2__ {int shardId; } ;
typedef TYPE_1__ ShardInterval ;
typedef int List ;
typedef int LOCKMODE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;

void
FUNC_7(List *VAR_0, LOCKMODE VAR_1)
{
 ShardInterval *VAR_2 = (ShardInterval *) FUNC_6(VAR_0);
 int64 VAR_3 = VAR_2->shardId;

 if (FUNC_5(VAR_3))
 {
  if (FUNC_0() && !FUNC_1())
  {
   FUNC_4(VAR_1, VAR_0);
  }





  FUNC_2(VAR_3, VAR_1);
 }


 FUNC_3(VAR_0, VAR_1);
}
