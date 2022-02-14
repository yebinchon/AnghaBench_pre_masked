
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relispartition; } ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *,int ,int*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static char *
FUNC_10(Oid VAR_4)
{
 char *VAR_5 = ((void*)0);
 HeapTuple VAR_6 = ((void*)0);
 Datum VAR_7 = 0;
 bool VAR_8 = 0;
 Datum VAR_9 = 0;

 VAR_6 = FUNC_6(VAR_2, VAR_4);
 if (!FUNC_3(VAR_6))
 {
  FUNC_9(VAR_1, "cache lookup failed for relation %u", VAR_4);
 }
 if (!((Form_pg_class) FUNC_2(VAR_6))->relispartition)
 {
  FUNC_5(VAR_6);
  return "";
 }

 VAR_7 = FUNC_7(VAR_2, VAR_6,
       VAR_0,
       &VAR_8);
 FUNC_0(!VAR_8);

 VAR_9 =
  FUNC_1(VAR_3, VAR_7, FUNC_4(VAR_4));

 VAR_5 = FUNC_8(VAR_9);

 FUNC_5(VAR_6);

 return VAR_5;
}
