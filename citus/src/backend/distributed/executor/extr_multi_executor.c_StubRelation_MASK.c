
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_5__ {TYPE_1__* rd_rel; int rd_att; } ;
struct TYPE_4__ {int relkind; } ;
typedef int RelationData ;
typedef TYPE_2__* Relation ;
typedef int FormData_pg_class ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static Relation
FUNC_1(TupleDesc VAR_1)
{
 Relation VAR_2 = FUNC_0(sizeof(RelationData));
 VAR_2->rd_att = VAR_1;
 VAR_2->rd_rel = FUNC_0(sizeof(FormData_pg_class));
 VAR_2->rd_rel->relkind = VAR_0;

 return VAR_2;
}
