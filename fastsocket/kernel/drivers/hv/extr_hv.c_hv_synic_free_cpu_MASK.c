
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* synic_message_page; scalar_t__* synic_event_page; int * event_dpc; } ;


 int FUNC_0 (unsigned long) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(int VAR_1)
{
 FUNC_1(VAR_0.event_dpc[VAR_1]);
 if (VAR_0.synic_message_page[VAR_1])
  FUNC_0((unsigned long)VAR_0.synic_event_page[VAR_1]);
 if (VAR_0.synic_message_page[VAR_1])
  FUNC_0((unsigned long)VAR_0.synic_message_page[VAR_1]);
}
