
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
struct TYPE_4__ {scalar_t__ conrelid; scalar_t__ confrelid; TYPE_1__ conname; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (char*,char*,int ) ;
 int * FUNC_10 (int *,scalar_t__,int,int *,int,int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;

bool
FUNC_13(char *VAR_9, Oid VAR_10)
{
 Relation VAR_11 = ((void*)0);
 SysScanDesc VAR_12 = ((void*)0);
 ScanKeyData VAR_13[1];
 int VAR_14 = 1;
 HeapTuple VAR_15 = ((void*)0);
 bool VAR_16 = 0;


 VAR_11 = FUNC_8(VAR_4, VAR_0);

 FUNC_6(&VAR_13[0], VAR_1, VAR_2, VAR_6,
    FUNC_1(VAR_3));
 VAR_12 = FUNC_10(VAR_11, VAR_7, 0,
          ((void*)0), VAR_14, VAR_13);

 VAR_15 = FUNC_12(VAR_12);
 while (FUNC_3(VAR_15))
 {
  Oid VAR_17 = VAR_7;
  Form_pg_constraint VAR_18 = (Form_pg_constraint) FUNC_2(VAR_15);
  char *VAR_19 = (VAR_18->conname).data;

  if (FUNC_9(VAR_9, VAR_19, VAR_8) != 0 ||
   VAR_18->conrelid != VAR_10)
  {
   VAR_15 = FUNC_12(VAR_12);
   continue;
  }

  VAR_17 = VAR_18->confrelid;

  FUNC_0(FUNC_4(VAR_17));

  if (FUNC_5(VAR_17) == VAR_5)
  {
   VAR_16 = 1;
   break;
  }

  VAR_15 = FUNC_12(VAR_12);
 }


 FUNC_11(VAR_12);
 FUNC_7(VAR_11, VAR_0);

 return VAR_16;
}
