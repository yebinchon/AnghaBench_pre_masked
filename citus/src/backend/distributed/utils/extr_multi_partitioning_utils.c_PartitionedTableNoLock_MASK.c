
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd_rel; } ;
struct TYPE_5__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (int ) ;

bool
FUNC_2(Oid VAR_2)
{
 Relation VAR_3 = FUNC_1(VAR_2);
 bool VAR_4 = 0;


 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3->rd_rel->relkind == VAR_1)
 {
  VAR_4 = 1;
 }


 FUNC_0(VAR_3, VAR_0);

 return VAR_4;
}
