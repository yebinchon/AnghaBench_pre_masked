
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bits16 ;
struct TYPE_2__ {int collname; int collnamespace; } ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_collation ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;

char *
FUNC_11(Oid VAR_5, bits16 VAR_6)
{
 HeapTuple VAR_7 = ((void*)0);
 Form_pg_collation VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);

 if (VAR_5 == VAR_4 && (VAR_6 & VAR_2) != 0)
 {
  return FUNC_9("-");
 }

 VAR_7 = FUNC_6(VAR_0, FUNC_4(VAR_5));
 if (!FUNC_2(VAR_7))
 {
  if ((VAR_6 & VAR_2) != 0)
  {
   return FUNC_9("???");
  }
  else
  {
   FUNC_7(VAR_1, "cache lookup failed for collate %u", VAR_5);
  }
 }
 VAR_8 = (Form_pg_collation) FUNC_1(VAR_7);

 if ((VAR_6 & VAR_3) == 0 && FUNC_0(VAR_5))
 {
  VAR_10 = ((void*)0);
 }
 else
 {
  VAR_10 = FUNC_8(VAR_8->collnamespace);
 }

 VAR_11 = FUNC_3(VAR_8->collname);

 VAR_9 = FUNC_10(VAR_10, VAR_11);

 FUNC_5(VAR_7);

 return VAR_9;
}
