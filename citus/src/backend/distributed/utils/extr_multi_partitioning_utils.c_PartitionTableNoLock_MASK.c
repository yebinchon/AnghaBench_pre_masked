
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd_rel; } ;
struct TYPE_5__ {int relispartition; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (int ) ;

bool
FUNC_2(Oid VAR_1)
{
 Relation VAR_2 = FUNC_1(VAR_1);
 bool VAR_3 = 0;


 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = VAR_2->rd_rel->relispartition;


 FUNC_0(VAR_2, VAR_0);

 return VAR_3;
}
