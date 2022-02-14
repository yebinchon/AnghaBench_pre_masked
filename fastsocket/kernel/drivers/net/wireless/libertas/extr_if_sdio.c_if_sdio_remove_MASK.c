
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sdio_func {int dummy; } ;
struct if_sdio_packet {scalar_t__ model; struct if_sdio_packet* next; struct if_sdio_packet* packets; int workqueue; TYPE_1__* priv; } ;
struct if_sdio_card {scalar_t__ model; struct if_sdio_card* next; struct if_sdio_card* packets; int workqueue; TYPE_1__* priv; } ;
struct cmd_header {int dummy; } ;
typedef int cmd ;
struct TYPE_4__ {int surpriseremoved; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,struct cmd_header*,int,int ,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct if_sdio_packet*) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct cmd_header*,int ,int) ;
 int FUNC_11 (struct sdio_func*) ;
 int FUNC_12 (struct sdio_func*) ;
 struct if_sdio_packet* FUNC_13 (struct sdio_func*) ;
 int FUNC_14 (struct sdio_func*) ;
 int FUNC_15 (struct sdio_func*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_16(struct sdio_func *VAR_5)
{
 struct if_sdio_card *VAR_6;
 struct if_sdio_packet *VAR_7;

 FUNC_4(VAR_2);

 VAR_6 = FUNC_13(VAR_5);

 if (VAR_4 && (VAR_6->model == VAR_1)) {




  struct cmd_header VAR_8;

  FUNC_10(&VAR_8, 0, sizeof(VAR_8));

  FUNC_6("send function SHUTDOWN command\n");
  if (FUNC_0(VAR_6->priv, VAR_0,
    &VAR_8, sizeof(VAR_8), VAR_3,
    (unsigned long) &VAR_8))
   FUNC_7("CMD_FUNC_SHUTDOWN cmd failed\n");
 }


 FUNC_6("call remove card\n");
 FUNC_9(VAR_6->priv);
 FUNC_8(VAR_6->priv);
 VAR_6->priv->surpriseremoved = 1;

 FUNC_2(VAR_6->workqueue);
 FUNC_1(VAR_6->workqueue);

 FUNC_11(VAR_5);
 FUNC_15(VAR_5);
 FUNC_12(VAR_5);
 FUNC_14(VAR_5);

 while (VAR_6->packets) {
  VAR_7 = VAR_6->packets;
  VAR_6->packets = VAR_6->packets->next;
  FUNC_3(VAR_7);
 }

 FUNC_3(VAR_6);

 FUNC_5(VAR_2);
}
