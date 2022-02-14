
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct smb_hdr {int smb_buf_length; } ;
struct mid_q_entry {scalar_t__ mid_state; int resp_buf; int callback; int sequence_number; } ;
struct cifs_ses {TYPE_1__* server; } ;
struct TYPE_11__ {scalar_t__ tcpStatus; int sequence_number; int srv_mutex; } ;


 int VAR_0 ;
 int const VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct cifs_ses*,struct smb_hdr*,struct mid_q_entry**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct mid_q_entry*,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct mid_q_entry*) ;
 int FUNC_8 (struct smb_hdr*,TYPE_1__*,int *) ;
 int FUNC_9 (struct mid_q_entry*,TYPE_1__*) ;
 int FUNC_10 (struct mid_q_entry*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct smb_hdr*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*,struct smb_hdr*,struct mid_q_entry*) ;
 int FUNC_16 (TYPE_1__*,struct smb_hdr*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_1__*,int const) ;
 int FUNC_20 (TYPE_1__*,struct mid_q_entry*) ;

int
FUNC_21(const unsigned int VAR_10, struct cifs_ses *VAR_11,
     struct smb_hdr *VAR_12, struct smb_hdr *VAR_13,
     int *VAR_14, const int VAR_15)
{
 int VAR_16 = 0;
 struct mid_q_entry *VAR_17;

 if (VAR_11 == ((void*)0)) {
  FUNC_2(1, "Null smb session");
  return -VAR_4;
 }
 if (VAR_11->server == ((void*)0)) {
  FUNC_2(1, "Null tcp session");
  return -VAR_4;
 }

 if (VAR_11->server->tcpStatus == VAR_2)
  return -VAR_5;





 if (FUNC_1(VAR_12->smb_buf_length) > VAR_0 +
   VAR_7 - 4) {
  FUNC_2(1, "Illegal length, greater than maximum frame, %d",
      FUNC_1(VAR_12->smb_buf_length));
  return -VAR_4;
 }

 VAR_16 = FUNC_19(VAR_11->server, VAR_15);
 if (VAR_16)
  return VAR_16;





 FUNC_13(&VAR_11->server->srv_mutex);

 VAR_16 = FUNC_0(VAR_11, VAR_12, &VAR_17);
 if (VAR_16) {
  FUNC_14(&VAR_11->server->srv_mutex);

  FUNC_3(VAR_11->server, 1);
  return VAR_16;
 }

 VAR_16 = FUNC_8(VAR_12, VAR_11->server, &VAR_17->sequence_number);
 if (VAR_16) {
  FUNC_14(&VAR_11->server->srv_mutex);
  goto out;
 }

 VAR_17->mid_state = VAR_8;

 FUNC_6(VAR_11->server);
 VAR_16 = FUNC_16(VAR_11->server, VAR_12, FUNC_1(VAR_12->smb_buf_length));
 FUNC_5(VAR_11->server);
 FUNC_7(VAR_17);

 if (VAR_16 < 0)
  VAR_11->server->sequence_number -= 2;

 FUNC_14(&VAR_11->server->srv_mutex);

 if (VAR_16 < 0)
  goto out;

 if (VAR_15 == VAR_1)
  goto out;

 VAR_16 = FUNC_20(VAR_11->server, VAR_17);
 if (VAR_16 != 0) {
  FUNC_15(VAR_11->server, VAR_12, VAR_17);
  FUNC_17(&VAR_6);
  if (VAR_17->mid_state == VAR_8) {

   VAR_17->callback = VAR_3;
   FUNC_18(&VAR_6);
   FUNC_3(VAR_11->server, 1);
   return VAR_16;
  }
  FUNC_18(&VAR_6);
 }

 VAR_16 = FUNC_9(VAR_17, VAR_11->server);
 if (VAR_16 != 0) {
  FUNC_3(VAR_11->server, 1);
  return VAR_16;
 }

 if (!VAR_17->resp_buf || !VAR_13 ||
     VAR_17->mid_state != VAR_9) {
  VAR_16 = -VAR_4;
  FUNC_2(1, "Bad MID state?");
  goto out;
 }

 *VAR_14 = FUNC_11(VAR_17->resp_buf);
 FUNC_12(VAR_13, VAR_17->resp_buf, *VAR_14 + 4);
 VAR_16 = FUNC_4(VAR_17, VAR_11->server, 0);
out:
 FUNC_10(VAR_17);
 FUNC_3(VAR_11->server, 1);

 return VAR_16;
}
