
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* values; } ;
struct TYPE_4__ {int pronargs; scalar_t__ oid; TYPE_1__ proargtypes; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int ,int ) ;
 int * FUNC_10 (int *,int ,int,int *,int,int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;

__attribute__((used)) static Oid
FUNC_13(const char *VAR_9, Oid VAR_10)
{
 Oid VAR_11 = VAR_6;
 Relation VAR_12 = ((void*)0);
 SysScanDesc VAR_13 = ((void*)0);
 ScanKeyData VAR_14[1];
 int VAR_15 = 1;
 HeapTuple VAR_16 = ((void*)0);

 VAR_12 = FUNC_9(VAR_8, VAR_1);

 FUNC_5(&VAR_14[0], VAR_2,
    VAR_3, VAR_5, FUNC_1(VAR_9));

 VAR_13 = FUNC_10(VAR_12,
          VAR_7, 1,
          ((void*)0), VAR_15, VAR_14);


 VAR_16 = FUNC_12(VAR_13);
 while (FUNC_4(VAR_16))
 {
  Form_pg_proc VAR_17 = (Form_pg_proc) FUNC_2(VAR_16);
  int VAR_18 = VAR_17->pronargs;

  if (VAR_18 == 1)
  {

   if (VAR_17->proargtypes.values[0] == VAR_10 ||
    VAR_17->proargtypes.values[0] == VAR_0)
   {

    VAR_11 = FUNC_3(VAR_16);



    break;
   }
  }
  FUNC_0(VAR_18 <= 1);

  VAR_16 = FUNC_12(VAR_13);
 }

 if (VAR_11 == VAR_6)
 {
  FUNC_6(VAR_4, (FUNC_7("no matching oid for function: %s", VAR_9)));
 }

 FUNC_11(VAR_13);
 FUNC_8(VAR_12, VAR_1);

 return VAR_11;
}
