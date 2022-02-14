
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rtable; int resultRelation; } ;
struct TYPE_5__ {int relid; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;
typedef int Oid ;


 TYPE_1__* FUNC_0 (int ,int ) ;

__attribute__((used)) static Oid
FUNC_1(Query *VAR_0)
{
 RangeTblEntry *VAR_1 = FUNC_0(VAR_0->resultRelation, VAR_0->rtable);

 return VAR_1->relid;
}
