
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_4__ {int relationId; } ;
typedef TYPE_1__ ShardInterval ;
typedef int Oid ;
typedef int LOCKMODE ;


 int FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(uint64 VAR_0, LOCKMODE VAR_1)
{
 ShardInterval *VAR_2 = FUNC_1(VAR_0);
 Oid VAR_3 = VAR_2->relationId;

 if (FUNC_4(VAR_3))
 {
  int VAR_4 = FUNC_5(VAR_2);
  Oid VAR_5 = FUNC_3(VAR_3);
  uint64 VAR_6 = FUNC_0(VAR_5, VAR_4);

  FUNC_2(VAR_6, VAR_1);
 }
}
