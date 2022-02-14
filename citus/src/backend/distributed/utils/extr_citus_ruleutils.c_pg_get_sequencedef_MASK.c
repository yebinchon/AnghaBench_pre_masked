
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int * HeapTuple ;
typedef int * Form_pg_sequence ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;

Form_pg_sequence
FUNC_5(Oid VAR_2)
{
 Form_pg_sequence VAR_3 = ((void*)0);
 HeapTuple VAR_4 = ((void*)0);

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (!FUNC_1(VAR_4))
 {
  FUNC_4(VAR_0, "cache lookup failed for sequence %u", VAR_2);
 }

 VAR_3 = (Form_pg_sequence) FUNC_0(VAR_4);

 FUNC_2(VAR_4);

 return VAR_3;
}
