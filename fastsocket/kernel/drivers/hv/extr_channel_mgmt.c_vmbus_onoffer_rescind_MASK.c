
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel_rescind_offer {int child_relid; } ;
struct vmbus_channel_message_header {int dummy; } ;
struct vmbus_channel {int work; int controlwq; } ;


 int FUNC_0 (int ,int *) ;
 struct vmbus_channel* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vmbus_channel_message_header *VAR_0)
{
 struct vmbus_channel_rescind_offer *VAR_1;
 struct vmbus_channel *VAR_2;

 VAR_1 = (struct vmbus_channel_rescind_offer *)VAR_0;
 VAR_2 = FUNC_1(VAR_1->child_relid);

 if (VAR_2 == ((void*)0))

  return;



 FUNC_0(VAR_2->controlwq, &VAR_2->work);
}
