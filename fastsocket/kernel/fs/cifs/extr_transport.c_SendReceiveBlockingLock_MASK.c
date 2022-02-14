
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct smb_hdr {scalar_t__ Command; int smb_buf_length; } ;
struct mid_q_entry {scalar_t__ mid_state; int resp_buf; int callback; int sequence_number; } ;
struct cifs_tcon {struct cifs_ses* ses; } ;
struct cifs_ses {TYPE_1__* server; } ;
struct TYPE_10__ {scalar_t__ tcpStatus; int response_q; int srv_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct cifs_ses*,struct smb_hdr*,struct mid_q_entry**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (struct mid_q_entry*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct mid_q_entry*) ;
 int FUNC_7 (struct smb_hdr*,TYPE_1__*,int *) ;
 int FUNC_8 (struct mid_q_entry*,TYPE_1__*) ;
 int FUNC_9 (struct mid_q_entry*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct smb_hdr*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (unsigned int const,struct cifs_tcon*,struct smb_hdr*,struct smb_hdr*) ;
 int FUNC_15 (TYPE_1__*,struct smb_hdr*,struct mid_q_entry*) ;
 int FUNC_16 (TYPE_1__*,struct smb_hdr*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (TYPE_1__*,struct mid_q_entry*) ;

int
FUNC_22(const unsigned int VAR_16, struct cifs_tcon *VAR_17,
     struct smb_hdr *VAR_18, struct smb_hdr *VAR_19,
     int *VAR_20)
{
 int VAR_21 = 0;
 int VAR_22 = 0;
 struct mid_q_entry *VAR_23;
 struct cifs_ses *VAR_24;

 if (VAR_17 == ((void*)0) || VAR_17->ses == ((void*)0)) {
  FUNC_2(1, "Null smb session");
  return -VAR_7;
 }
 VAR_24 = VAR_17->ses;

 if (VAR_24->server == ((void*)0)) {
  FUNC_2(1, "Null tcp session");
  return -VAR_7;
 }

 if (VAR_24->server->tcpStatus == VAR_2)
  return -VAR_8;





 if (FUNC_1(VAR_18->smb_buf_length) > VAR_0 +
   VAR_12 - 4) {
  FUNC_2(1, "Illegal length, greater than maximum frame, %d",
      FUNC_1(VAR_18->smb_buf_length));
  return -VAR_7;
 }

 VAR_21 = FUNC_20(VAR_24->server, VAR_1);
 if (VAR_21)
  return VAR_21;





 FUNC_12(&VAR_24->server->srv_mutex);

 VAR_21 = FUNC_0(VAR_24, VAR_18, &VAR_23);
 if (VAR_21) {
  FUNC_13(&VAR_24->server->srv_mutex);
  return VAR_21;
 }

 VAR_21 = FUNC_7(VAR_18, VAR_24->server, &VAR_23->sequence_number);
 if (VAR_21) {
  FUNC_9(VAR_23);
  FUNC_13(&VAR_24->server->srv_mutex);
  return VAR_21;
 }

 VAR_23->mid_state = VAR_13;
 FUNC_5(VAR_24->server);
 VAR_21 = FUNC_16(VAR_24->server, VAR_18, FUNC_1(VAR_18->smb_buf_length));
 FUNC_4(VAR_24->server);
 FUNC_6(VAR_23);
 FUNC_13(&VAR_24->server->srv_mutex);

 if (VAR_21 < 0) {
  FUNC_9(VAR_23);
  return VAR_21;
 }


 VAR_21 = FUNC_19(VAR_24->server->response_q,
  (!(VAR_23->mid_state == VAR_13)) ||
  ((VAR_24->server->tcpStatus != VAR_3) &&
   (VAR_24->server->tcpStatus != VAR_4)));


 if ((VAR_21 == -VAR_10) &&
  (VAR_23->mid_state == VAR_13) &&
  ((VAR_24->server->tcpStatus == VAR_3) ||
   (VAR_24->server->tcpStatus == VAR_4))) {

  if (VAR_18->Command == VAR_15) {


   VAR_21 = FUNC_15(VAR_24->server, VAR_18, VAR_23);
   if (VAR_21) {
    FUNC_9(VAR_23);
    return VAR_21;
   }
  } else {



   VAR_21 = FUNC_14(VAR_16, VAR_17, VAR_18, VAR_19);



   if (VAR_21 && VAR_21 != -VAR_9) {
    FUNC_9(VAR_23);
    return VAR_21;
   }
  }

  VAR_21 = FUNC_21(VAR_24->server, VAR_23);
  if (VAR_21) {
   FUNC_15(VAR_24->server, VAR_18, VAR_23);
   FUNC_17(&VAR_11);
   if (VAR_23->mid_state == VAR_13) {

    VAR_23->callback = VAR_5;
    FUNC_18(&VAR_11);
    return VAR_21;
   }
   FUNC_18(&VAR_11);
  }


  VAR_22 = 1;
 }

 VAR_21 = FUNC_8(VAR_23, VAR_24->server);
 if (VAR_21 != 0)
  return VAR_21;


 if (VAR_19 == ((void*)0) || VAR_23->mid_state != VAR_14) {
  VAR_21 = -VAR_7;
  FUNC_2(1, "Bad MID state?");
  goto out;
 }

 *VAR_20 = FUNC_10(VAR_23->resp_buf);
 FUNC_11(VAR_19, VAR_23->resp_buf, *VAR_20 + 4);
 VAR_21 = FUNC_3(VAR_23, VAR_24->server, 0);
out:
 FUNC_9(VAR_23);
 if (VAR_22 && VAR_21 == -VAR_6)
  return -VAR_10;
 return VAR_21;
}
