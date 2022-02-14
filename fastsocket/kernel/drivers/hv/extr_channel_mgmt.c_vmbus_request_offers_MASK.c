
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel_msginfo {int waitevent; scalar_t__ msg; } ;
struct vmbus_channel_message_header {int msgtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vmbus_channel_msginfo*) ;
 struct vmbus_channel_msginfo* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct vmbus_channel_message_header*,int) ;
 int FUNC_5 (int *,int) ;

int FUNC_6(void)
{
 struct vmbus_channel_message_header *VAR_5;
 struct vmbus_channel_msginfo *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_2(sizeof(*VAR_6) +
     sizeof(struct vmbus_channel_message_header),
     VAR_3);
 if (!VAR_6)
  return -VAR_1;

 FUNC_0(&VAR_6->waitevent);

 VAR_5 = (struct vmbus_channel_message_header *)VAR_6->msg;

 VAR_5->msgtype = VAR_0;


 VAR_7 = FUNC_4(VAR_5,
          sizeof(struct vmbus_channel_message_header));
 if (VAR_7 != 0) {
  FUNC_3("Unable to request offers - %d\n", VAR_7);

  goto cleanup;
 }

 VAR_8 = FUNC_5(&VAR_6->waitevent, 5*VAR_4);
 if (VAR_8 == 0) {
  VAR_7 = -VAR_2;
  goto cleanup;
 }



cleanup:
 FUNC_1(VAR_6);

 return VAR_7;
}
