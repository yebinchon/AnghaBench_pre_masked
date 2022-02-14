
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct smb_hdr {int dummy; } ;
struct mid_q_entry {scalar_t__ mid_state; int * resp_buf; scalar_t__ large_buf; int callback; } ;
struct kvec {char* iov_base; scalar_t__ iov_len; } ;
struct cifs_ses {TYPE_1__* server; } ;
struct TYPE_10__ {scalar_t__ tcpStatus; int sequence_number; int srv_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct mid_q_entry*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct mid_q_entry*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct mid_q_entry*,TYPE_1__*,int const) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct mid_q_entry*) ;
 struct mid_q_entry* FUNC_9 (struct cifs_ses*,struct smb_rqst*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct mid_q_entry*,TYPE_1__*) ;
 int FUNC_12 (struct mid_q_entry*) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*,struct smb_hdr*,struct mid_q_entry*) ;
 int FUNC_17 (TYPE_1__*,struct kvec*,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_1__*,int) ;
 int FUNC_21 (TYPE_1__*,struct mid_q_entry*) ;

int
FUNC_22(const unsigned int VAR_14, struct cifs_ses *VAR_15,
      struct kvec *VAR_16, int VAR_17, int *VAR_18 ,
      const int VAR_19)
{
 int VAR_20 = 0;
 int VAR_21;
 struct mid_q_entry *VAR_22;
 char *VAR_23 = VAR_16[0].iov_base;
 struct smb_rqst VAR_24 = { .rq_iov = VAR_16,
     .rq_nvec = VAR_17 };

 VAR_21 = VAR_19 & VAR_6;

 *VAR_18 = VAR_3;

 if ((VAR_15 == ((void*)0)) || (VAR_15->server == ((void*)0))) {
  FUNC_10(VAR_23);
  FUNC_2(1, "Null session");
  return -VAR_9;
 }

 if (VAR_15->server->tcpStatus == VAR_7) {
  FUNC_10(VAR_23);
  return -VAR_10;
 }







 VAR_20 = FUNC_20(VAR_15->server, VAR_21);
 if (VAR_20) {
  FUNC_10(VAR_23);
  return VAR_20;
 }







 FUNC_14(&VAR_15->server->srv_mutex);

 VAR_22 = FUNC_9(VAR_15, &VAR_24);
 if (FUNC_0(VAR_22)) {
  FUNC_15(&VAR_15->server->srv_mutex);
  FUNC_10(VAR_23);

  FUNC_4(VAR_15->server, 1);
  return FUNC_1(VAR_22);
 }

 VAR_22->mid_state = VAR_12;
 FUNC_7(VAR_15->server);
 VAR_20 = FUNC_17(VAR_15->server, VAR_16, VAR_17);
 FUNC_6(VAR_15->server);
 FUNC_8(VAR_22);

 if (VAR_20 < 0)
  VAR_15->server->sequence_number -= 2;
 FUNC_15(&VAR_15->server->srv_mutex);

 if (VAR_20 < 0) {
  FUNC_10(VAR_23);
  goto out;
 }

 if (VAR_21 == VAR_0) {
  FUNC_10(VAR_23);
  goto out;
 }

 VAR_20 = FUNC_21(VAR_15->server, VAR_22);
 if (VAR_20 != 0) {
  FUNC_16(VAR_15->server, (struct smb_hdr *)VAR_23, VAR_22);
  FUNC_18(&VAR_11);
  if (VAR_22->mid_state == VAR_12) {
   VAR_22->callback = VAR_8;
   FUNC_19(&VAR_11);
   FUNC_10(VAR_23);
   FUNC_4(VAR_15->server, 1);
   return VAR_20;
  }
  FUNC_19(&VAR_11);
 }

 FUNC_10(VAR_23);

 VAR_20 = FUNC_11(VAR_22, VAR_15->server);
 if (VAR_20 != 0) {
  FUNC_4(VAR_15->server, 1);
  return VAR_20;
 }

 if (!VAR_22->resp_buf || VAR_22->mid_state != VAR_13) {
  VAR_20 = -VAR_9;
  FUNC_3(1, "Bad MID state?");
  goto out;
 }

 VAR_23 = (char *)VAR_22->resp_buf;
 VAR_16[0].iov_base = VAR_23;
 VAR_16[0].iov_len = FUNC_13(VAR_23) + 4;
 if (VAR_22->large_buf)
  *VAR_18 = VAR_1;
 else
  *VAR_18 = VAR_5;

 VAR_20 = FUNC_5(VAR_22, VAR_15->server, VAR_19 & VAR_2);


 if ((VAR_19 & VAR_4) == 0)
  VAR_22->resp_buf = ((void*)0);
out:
 FUNC_12(VAR_22);
 FUNC_4(VAR_15->server, 1);

 return VAR_20;
}
