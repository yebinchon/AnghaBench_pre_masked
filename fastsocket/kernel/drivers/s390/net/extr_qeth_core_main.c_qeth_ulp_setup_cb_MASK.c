
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct qeth_cmd_buffer {int rc; int data; } ;
struct TYPE_4__ {int ulp_connection_r; } ;
struct qeth_card {TYPE_1__* gdev; TYPE_2__ token; } ;
struct TYPE_3__ {int dev; } ;


 int EMLINK ;
 int QETH_DBF_TEXT (int ,int,char*) ;
 int QETH_DBF_TEXT_ (int ,int,char*,int ) ;
 int QETH_MPC_TOKEN_LENGTH ;
 int QETH_ULP_SETUP_RESP_CONNECTION_TOKEN (int ) ;
 int SETUP ;
 int dev_err (int *,char*) ;
 int memcpy (int *,int ,int ) ;
 int strncmp (char*,int ,int) ;

__attribute__((used)) static int qeth_ulp_setup_cb(struct qeth_card *card, struct qeth_reply *reply,
  unsigned long data)
{
 struct qeth_cmd_buffer *iob;

 QETH_DBF_TEXT(SETUP, 2, "ulpstpcb");

 iob = (struct qeth_cmd_buffer *) data;
 memcpy(&card->token.ulp_connection_r,
        QETH_ULP_SETUP_RESP_CONNECTION_TOKEN(iob->data),
        QETH_MPC_TOKEN_LENGTH);
 if (!strncmp("00S", QETH_ULP_SETUP_RESP_CONNECTION_TOKEN(iob->data),
       3)) {
  QETH_DBF_TEXT(SETUP, 2, "olmlimit");
  dev_err(&card->gdev->dev, "A connection could not be "
   "established because of an OLM limit\n");
  iob->rc = -EMLINK;
 }
 QETH_DBF_TEXT_(SETUP, 2, "  rc%d", iob->rc);
 return 0;
}
