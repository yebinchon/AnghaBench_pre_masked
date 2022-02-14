
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
struct TYPE_4__ {scalar_t__ conrelid; TYPE_1__ conname; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char*,char*,int ) ;
 int * FUNC_7 (int *,int ,int,int *,int,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

bool
FUNC_10(char *VAR_8, Oid VAR_9)
{
 Relation VAR_10 = ((void*)0);
 SysScanDesc VAR_11 = ((void*)0);
 ScanKeyData VAR_12[1];
 int VAR_13 = 1;
 HeapTuple VAR_14 = ((void*)0);

 VAR_10 = FUNC_5(VAR_4, VAR_0);

 FUNC_3(&VAR_12[0], VAR_1, VAR_2, VAR_5,
    FUNC_0(VAR_3));
 VAR_11 = FUNC_7(VAR_10, VAR_6, 0,
          ((void*)0), VAR_13, VAR_12);

 VAR_14 = FUNC_9(VAR_11);
 while (FUNC_2(VAR_14))
 {
  Form_pg_constraint VAR_15 = (Form_pg_constraint) FUNC_1(VAR_14);
  char *VAR_16 = (VAR_15->conname).data;

  if (FUNC_6(VAR_16, VAR_8, VAR_7) == 0 &&
   VAR_15->conrelid == VAR_9)
  {
   FUNC_8(VAR_11);
   FUNC_4(VAR_10, VAR_0);

   return 1;
  }

  VAR_14 = FUNC_9(VAR_11);
 }


 FUNC_8(VAR_11);
 FUNC_4(VAR_10, VAR_0);

 return 0;
}
