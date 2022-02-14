
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {scalar_t__ cmd; } ;
struct iwl_rx_packet {TYPE_1__ hdr; } ;
struct iwl_rx_handlers {scalar_t__ cmd_id; int (* fn ) (struct iwl_mvm*,struct iwl_rx_cmd_buffer*,struct iwl_device_cmd*) ;int async; } ;
struct iwl_rx_cmd_buffer {int _rx_page_order; int _offset; } ;
struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {int async_handlers_wk; int async_handlers_lock; int async_handlers_list; int notif_wait; } ;
struct iwl_device_cmd {int dummy; } ;
struct TYPE_4__ {int _rx_page_order; int _offset; int _page; } ;
struct iwl_async_handler_entry {int (* fn ) (struct iwl_mvm*,struct iwl_rx_cmd_buffer*,struct iwl_device_cmd*) ;int list; TYPE_2__ rxb; } ;


 size_t FUNC_0 (struct iwl_rx_handlers*) ;
 int VAR_0 ;
 struct iwl_mvm* FUNC_1 (struct iwl_op_mode*) ;
 struct iwl_rx_handlers* VAR_1 ;
 int FUNC_2 (int *,struct iwl_rx_packet*) ;
 struct iwl_async_handler_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 struct iwl_rx_packet* FUNC_5 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_6 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct iwl_mvm*,struct iwl_rx_cmd_buffer*,struct iwl_device_cmd*) ;

__attribute__((used)) static int FUNC_11(struct iwl_op_mode *VAR_2,
          struct iwl_rx_cmd_buffer *VAR_3,
          struct iwl_device_cmd *VAR_4)
{
 struct iwl_rx_packet *VAR_5 = FUNC_5(VAR_3);
 struct iwl_mvm *VAR_6 = FUNC_1(VAR_2);
 u8 VAR_7;






 FUNC_2(&VAR_6->notif_wait, VAR_5);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  const struct iwl_rx_handlers *VAR_8 = &VAR_1[VAR_7];
  struct iwl_async_handler_entry *VAR_9;

  if (VAR_8->cmd_id != VAR_5->hdr.cmd)
   continue;

  if (!VAR_8->async)
   return VAR_8->fn(VAR_6, VAR_3, VAR_4);

  VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_0);

  if (!VAR_9)
   return 0;

  VAR_9->rxb._page = FUNC_6(VAR_3);
  VAR_9->rxb._offset = VAR_3->_offset;
  VAR_9->rxb._rx_page_order = VAR_3->_rx_page_order;
  VAR_9->fn = VAR_8->fn;
  FUNC_8(&VAR_6->async_handlers_lock);
  FUNC_4(&VAR_9->list, &VAR_6->async_handlers_list);
  FUNC_9(&VAR_6->async_handlers_lock);
  FUNC_7(&VAR_6->async_handlers_wk);
  break;
 }

 return 0;
}
