
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int HeapTuple ;
typedef scalar_t__ Form_pg_aggregate ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static HeapTuple
FUNC_5(Oid VAR_2, Form_pg_aggregate *VAR_3)
{
 HeapTuple VAR_4 = FUNC_3(VAR_0, FUNC_2(VAR_2));
 if (!FUNC_1(VAR_4))
 {
  FUNC_4(VAR_1, "citus cache lookup failed for aggregate %u", VAR_2);
 }
 *VAR_3 = (Form_pg_aggregate) FUNC_0(VAR_4);
 return VAR_4;
}
