
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ UNDReplyRef ;
struct TYPE_8__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

UNDReplyRef
FUNC_6(
 ipc_port_t VAR_2)
{
 if (FUNC_0(VAR_2)) {
  UNDReplyRef VAR_3;

  FUNC_4(VAR_2);
  if (!FUNC_2(VAR_2) || (FUNC_3(VAR_2) != VAR_0)) {
   FUNC_5(VAR_2);
   return VAR_1;
  }
  VAR_3 = (UNDReplyRef) VAR_2->ip_kobject;
  FUNC_1(VAR_3 != VAR_1);
  FUNC_5(VAR_2);
  return VAR_3;
 }
 return VAR_1;
}
