
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attcollation; int atttypid; int attname; } ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int ColumnDef ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static ColumnDef *
FUNC_2(Form_pg_attribute VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0->attname),
       VAR_0->atttypid,
       -1,
       VAR_0->attcollation);
}
