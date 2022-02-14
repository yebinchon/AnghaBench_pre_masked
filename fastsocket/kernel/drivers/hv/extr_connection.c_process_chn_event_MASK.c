
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmbus_channel {int batched_reading; int inbound_lock; int inbound; int (* onchannel_callback ) (void*) ;void* channel_callback_context; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 struct vmbus_channel* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void FUNC_7(u32 VAR_0)
{
 struct vmbus_channel *VAR_1;
 unsigned long VAR_2;
 void *VAR_3;
 bool VAR_4;
 u32 VAR_5;





 VAR_1 = FUNC_3(VAR_0);

 if (!VAR_1) {
  FUNC_2("channel not found for relid - %u\n", VAR_0);
  return;
 }
 FUNC_4(&VAR_1->inbound_lock, VAR_2);
 if (VAR_1->onchannel_callback != ((void*)0)) {
  VAR_3 = VAR_1->channel_callback_context;
  VAR_4 = VAR_1->batched_reading;
  do {
   FUNC_0(&VAR_1->inbound);
   VAR_1->onchannel_callback(VAR_3);
   VAR_5 = FUNC_1(&VAR_1->inbound);
  } while (VAR_4 && (VAR_5 != 0));
 } else {
  FUNC_2("no channel callback for relid - %u\n", VAR_0);
 }

 FUNC_5(&VAR_1->inbound_lock, VAR_2);
}
