
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {TYPE_2__* Session; int SessionKey32; } ;
typedef TYPE_1__ UDP_ENTRY ;
struct TYPE_10__ {int UDPEntryList; } ;
struct TYPE_9__ {int ref; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;

SESSION *FUNC_4(CEDAR *VAR_0, UINT VAR_1)
{
 UDP_ENTRY *VAR_2, VAR_3;
 SESSION *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3.SessionKey32 = VAR_1;

 FUNC_1(VAR_0->UDPEntryList);
 {
  VAR_2 = FUNC_2(VAR_0->UDPEntryList, &VAR_3);
  if (VAR_2 == ((void*)0))
  {
   FUNC_3(VAR_0->UDPEntryList);
   return ((void*)0);
  }
  VAR_4 = VAR_2->Session;
  FUNC_0(VAR_4->ref);
 }
 FUNC_3(VAR_0->UDPEntryList);

 return VAR_4;
}
