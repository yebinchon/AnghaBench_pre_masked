
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct il_priv {size_t cmd_queue; TYPE_2__* txq; int status; int wait_command_queue; int mutex; } ;
struct il_host_cmd {int flags; int callback; scalar_t__ reply_page; int id; } ;
struct TYPE_4__ {TYPE_1__* meta; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct il_priv*,struct il_host_cmd*) ;
 int FUNC_5 (struct il_priv*,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int,int ) ;

int
FUNC_12(struct il_priv *VAR_9, struct il_host_cmd *VAR_10)
{
 int VAR_11;
 int VAR_12;

 FUNC_8(&VAR_9->mutex);

 FUNC_0(VAR_10->flags & VAR_0);


 FUNC_0(VAR_10->callback);

 FUNC_1("Attempting to send sync command %s\n",
        FUNC_6(VAR_10->id));

 FUNC_9(VAR_7, &VAR_9->status);
 FUNC_1("Setting HCMD_ACTIVE for command %s\n",
        FUNC_6(VAR_10->id));

 VAR_11 = FUNC_4(VAR_9, VAR_10);
 if (VAR_11 < 0) {
  VAR_12 = VAR_11;
  FUNC_2("Error sending %s: enqueue_hcmd failed: %d\n",
         FUNC_6(VAR_10->id), VAR_12);
  goto out;
 }

 VAR_12 = FUNC_11(VAR_9->wait_command_queue,
     !FUNC_10(VAR_7, &VAR_9->status),
     VAR_5);
 if (!VAR_12) {
  if (FUNC_10(VAR_7, &VAR_9->status)) {
   FUNC_2("Error sending %s: time out after %dms.\n",
          FUNC_6(VAR_10->id),
          FUNC_7(VAR_5));

   FUNC_3(VAR_7, &VAR_9->status);
   FUNC_1("Clearing HCMD_ACTIVE for command %s\n",
          FUNC_6(VAR_10->id));
   VAR_12 = -VAR_4;
   goto cancel;
  }
 }

 if (FUNC_10(VAR_8, &VAR_9->status)) {
  FUNC_2("Command %s aborted: RF KILL Switch\n",
         FUNC_6(VAR_10->id));
  VAR_12 = -VAR_2;
  goto fail;
 }
 if (FUNC_10(VAR_6, &VAR_9->status)) {
  FUNC_2("Command %s failed: FW Error\n",
         FUNC_6(VAR_10->id));
  VAR_12 = -VAR_3;
  goto fail;
 }
 if ((VAR_10->flags & VAR_1) && !VAR_10->reply_page) {
  FUNC_2("Error: Response NULL in '%s'\n",
         FUNC_6(VAR_10->id));
  VAR_12 = -VAR_3;
  goto cancel;
 }

 VAR_12 = 0;
 goto out;

cancel:
 if (VAR_10->flags & VAR_1) {






  VAR_9->txq[VAR_9->cmd_queue].meta[VAR_11].flags &= ~VAR_1;
 }
fail:
 if (VAR_10->reply_page) {
  FUNC_5(VAR_9, VAR_10->reply_page);
  VAR_10->reply_page = 0;
 }
out:
 return VAR_12;
}
