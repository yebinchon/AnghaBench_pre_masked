
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ textSendAsJsonbFunctionId; } ;
typedef scalar_t__ Oid ;
typedef int List ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,scalar_t__*,int) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

Oid
FUNC_3(void)
{
 if (VAR_1.textSendAsJsonbFunctionId == VAR_0)
 {
  List *VAR_3 = FUNC_1(FUNC_2("pg_catalog"),
         FUNC_2("citus_text_send_as_jsonb"));
  Oid VAR_4[1] = { VAR_2 };

  VAR_1.textSendAsJsonbFunctionId =
   FUNC_0(VAR_3, 1, VAR_4, 0);
 }

 return VAR_1.textSendAsJsonbFunctionId;
}
