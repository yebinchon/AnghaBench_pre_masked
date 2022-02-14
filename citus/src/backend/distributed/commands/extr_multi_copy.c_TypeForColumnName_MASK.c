
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_3__ {int atttypid; } ;
typedef int Oid ;
typedef TYPE_1__* Form_pg_attribute ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static Oid
FUNC_4(Oid VAR_2, TupleDesc VAR_3, char *VAR_4)
{
 AttrNumber VAR_5 = FUNC_3(VAR_2, VAR_4);
 Form_pg_attribute VAR_6 = ((void*)0);

 if (VAR_5 == VAR_1)
 {
  FUNC_1(VAR_0, (FUNC_2("invalid attr? %s", VAR_4)));
 }

 VAR_6 = FUNC_0(VAR_3, VAR_5 - 1);
 return VAR_6->atttypid;
}
