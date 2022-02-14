
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int SessionKey32; TYPE_2__* Session; } ;
typedef TYPE_1__ UDP_ENTRY ;
struct TYPE_10__ {int UDPEntryList; } ;
struct TYPE_9__ {int ref; int SessionKey32; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;

void FUNC_6(CEDAR *VAR_0, SESSION *VAR_1)
{
 UDP_ENTRY *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_5(sizeof(UDP_ENTRY));
 VAR_2->Session = VAR_1;
 VAR_2->SessionKey32 = VAR_1->SessionKey32;
 FUNC_1(VAR_1->ref);

 FUNC_3(VAR_0->UDPEntryList);
 {
  FUNC_0(VAR_0->UDPEntryList, VAR_2);
 }
 FUNC_4(VAR_0->UDPEntryList);

 FUNC_2("UDP_Entry Added.\n");
}
