
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int * Session; } ;
typedef TYPE_1__ UDP_ENTRY ;
struct TYPE_8__ {int UDPEntryList; } ;
typedef int SESSION ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(CEDAR *VAR_0, SESSION *VAR_1)
{
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0->UDPEntryList);
 {
  VAR_2 = FUNC_4(VAR_0->UDPEntryList);
  for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
  {
   UDP_ENTRY *VAR_4 = FUNC_3(VAR_0->UDPEntryList, VAR_3);
   if (VAR_4->Session == VAR_1)
   {
    FUNC_6(VAR_4->Session);
    FUNC_1(VAR_0->UDPEntryList, VAR_4);
    FUNC_2(VAR_4);
    FUNC_7(VAR_0->UDPEntryList);
    FUNC_0("UDP_Entry Deleted.\n");
    return;
   }
  }
 }
 FUNC_7(VAR_0->UDPEntryList);
}
