
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int HeapTuple ;
typedef scalar_t__ Form_pg_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static HeapTuple
FUNC_5(Oid VAR_2, Form_pg_type *VAR_3)
{
 HeapTuple VAR_4 = FUNC_3(VAR_1, FUNC_2(VAR_2));
 if (!FUNC_1(VAR_4))
 {
  FUNC_4(VAR_0, "citus cache lookup failed for type %u", VAR_2);
 }
 *VAR_3 = (Form_pg_type) FUNC_0(VAR_4);
 return VAR_4;
}
