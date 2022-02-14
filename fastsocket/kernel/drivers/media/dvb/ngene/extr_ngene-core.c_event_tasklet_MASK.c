
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngene {size_t EventQueueReadIndex; size_t EventQueueWriteIndex; int (* RxEventNotify ) (struct ngene*,int ,int ) ;int (* TxEventNotify ) (struct ngene*,int ) ;struct EVENT_BUFFER* EventQueue; } ;
struct EVENT_BUFFER {int UARTStatus; int RXCharacter; int TimeStamp; } ;


 int VAR_0 ;
 int FUNC_0 (struct ngene*,int ) ;
 int FUNC_1 (struct ngene*,int ,int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct ngene *VAR_2 = (struct ngene *)VAR_1;

 while (VAR_2->EventQueueReadIndex != VAR_2->EventQueueWriteIndex) {
  struct EVENT_BUFFER VAR_3 =
   VAR_2->EventQueue[VAR_2->EventQueueReadIndex];
  VAR_2->EventQueueReadIndex =
   (VAR_2->EventQueueReadIndex + 1) & (VAR_0 - 1);

  if ((VAR_3.UARTStatus & 0x01) && (VAR_2->TxEventNotify))
   VAR_2->TxEventNotify(VAR_2, VAR_3.TimeStamp);
  if ((VAR_3.UARTStatus & 0x02) && (VAR_2->RxEventNotify))
   VAR_2->RxEventNotify(VAR_2, VAR_3.TimeStamp,
        VAR_3.RXCharacter);
 }
}
