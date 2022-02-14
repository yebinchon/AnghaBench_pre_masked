
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ UpdatedTime; scalar_t__ DhcpAllocated; } ;
typedef int LIST ;
typedef TYPE_1__ IP_TABLE_ENTRY ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;

void FUNC_8(LIST *VAR_2)
{
 LIST *VAR_3;
 UINT VAR_4;

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_5(((void*)0));

 for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_2);VAR_4++)
 {
  IP_TABLE_ENTRY *VAR_5 = FUNC_3(VAR_2, VAR_4);
  if ((VAR_5->UpdatedTime + (UINT64)(VAR_5->DhcpAllocated ? VAR_1 : VAR_0)) <= FUNC_7())
  {
   FUNC_0(VAR_3, VAR_5);
  }
 }

 for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_3);VAR_4++)
 {
  IP_TABLE_ENTRY *VAR_6 = FUNC_3(VAR_3, VAR_4);
  FUNC_1(VAR_2, VAR_6);
  FUNC_2(VAR_6);
 }

 FUNC_6(VAR_3);
}
