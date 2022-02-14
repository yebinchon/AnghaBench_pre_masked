
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int u8 ;
struct lbs_private {int (* hw_host_to_card ) (struct lbs_private*,int ,int *,scalar_t__) ;int command_timer; int driver_lock; scalar_t__ cur_cmd_retcode; struct cmd_ctrl_node* cur_cmd; } ;
struct cmd_header {int seqnum; int command; int size; } ;
struct cmd_ctrl_node {struct cmd_header* cmdbuf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,void*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct lbs_private*,int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct lbs_private *VAR_7,
          struct cmd_ctrl_node *VAR_8)
{
 unsigned long VAR_9;
 struct cmd_header *VAR_10;
 uint16_t VAR_11;
 uint16_t VAR_12;
 int VAR_13 = 3 * VAR_2;
 int VAR_14;

 FUNC_1(VAR_4);

 VAR_10 = VAR_8->cmdbuf;

 FUNC_7(&VAR_7->driver_lock, VAR_9);
 VAR_7->cur_cmd = VAR_8;
 VAR_7->cur_cmd_retcode = 0;
 FUNC_8(&VAR_7->driver_lock, VAR_9);

 VAR_11 = FUNC_5(VAR_10->size);
 VAR_12 = FUNC_5(VAR_10->command);


 if (VAR_12 == VAR_1 || VAR_12 == VAR_0)
  VAR_13 = 5 * VAR_2;

 FUNC_0("DNLD_CMD: command 0x%04x, seq %d, size %d\n",
       VAR_12, FUNC_5(VAR_10->seqnum), VAR_11);
 FUNC_2(VAR_3, "DNLD_CMD", (void *) VAR_8->cmdbuf, VAR_11);

 VAR_14 = VAR_7->hw_host_to_card(VAR_7, VAR_5, (u8 *) VAR_10, VAR_11);

 if (VAR_14) {
  FUNC_4("DNLD_CMD: hw_host_to_card failed: %d\n", VAR_14);


  VAR_13 = VAR_2/4;
 }


 FUNC_6(&VAR_7->command_timer, VAR_6 + VAR_13);

 FUNC_3(VAR_4);
}
