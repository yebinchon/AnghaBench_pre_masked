
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ workerHashFunctionId; } ;
typedef scalar_t__ Oid ;


 scalar_t__ FUNC_0 (char*,char*,int const) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;

Oid
FUNC_4(void)
{
 if (VAR_1.workerHashFunctionId == VAR_0)
 {
  Oid VAR_2 = FUNC_1("citus", 0);
  Oid VAR_3 = FUNC_2(VAR_2);
  char *VAR_4 = FUNC_3(VAR_3);
  const int VAR_5 = 1;

  VAR_1.workerHashFunctionId =
   FUNC_0(VAR_4, "worker_hash", VAR_5);
 }

 return VAR_1.workerHashFunctionId;
}
