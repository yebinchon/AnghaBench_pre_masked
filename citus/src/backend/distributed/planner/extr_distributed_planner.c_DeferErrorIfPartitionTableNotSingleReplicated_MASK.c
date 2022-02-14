
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int Oid ;
typedef int DeferredErrorMessage ;


 int * FUNC_0 (int ,char*,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*,char*) ;
 char* FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 () ;

__attribute__((used)) static DeferredErrorMessage *
FUNC_7(Oid VAR_1)
{
 if (FUNC_2(VAR_1) && !FUNC_3(VAR_1))
 {
  Oid VAR_2 = FUNC_1(VAR_1);
  char *VAR_3 = FUNC_5(VAR_2);
  StringInfo VAR_4 = FUNC_6();

  FUNC_4(VAR_4, "Run the query on the parent table "
         "\"%s\" instead.", VAR_3);

  return FUNC_0(VAR_0,
        "modifications on partitions when replication "
        "factor is greater than 1 is not supported",
        ((void*)0), VAR_4->data);
 }

 return ((void*)0);
}
