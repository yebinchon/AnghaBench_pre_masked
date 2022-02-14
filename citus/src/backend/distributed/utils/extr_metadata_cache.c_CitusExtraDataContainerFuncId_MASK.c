
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ extraDataContainerFuncId; } ;
typedef scalar_t__ Oid ;
typedef int List ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,scalar_t__*,int) ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

Oid
FUNC_3(void)
{
 List *VAR_4 = VAR_3;
 Oid VAR_5[1] = { VAR_0 };

 if (VAR_2.extraDataContainerFuncId == VAR_1)
 {
  VAR_4 = FUNC_1(FUNC_2("pg_catalog"),
         FUNC_2("citus_extradata_container"));
  VAR_2.extraDataContainerFuncId =
   FUNC_0(VAR_4, 1, VAR_5, 0);
 }

 return VAR_2.extraDataContainerFuncId;
}
