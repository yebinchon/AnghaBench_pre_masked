
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcom_config {int rf_lvblen; } ;
struct TYPE_2__ {int h_version; int h_length; int h_cmd; int h_nodeid; int h_lockspace; } ;
struct dlm_rcom {scalar_t__ rc_buf; int rc_result; int rc_seq; int rc_seq_reply; int rc_id; int rc_type; TYPE_1__ rc_header; } ;
struct dlm_mhandle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct dlm_mhandle*) ;
 struct dlm_mhandle* FUNC_2 (int,int,int ,char**) ;
 int FUNC_3 () ;
 int FUNC_4 (struct dlm_rcom*) ;
 int FUNC_5 (char*,int ,int) ;

int FUNC_6(int VAR_7, struct dlm_rcom *VAR_8)
{
 struct dlm_rcom *VAR_9;
 struct rcom_config *VAR_10;
 struct dlm_mhandle *VAR_11;
 char *VAR_12;
 int VAR_13 = sizeof(struct dlm_rcom) + sizeof(struct rcom_config);

 VAR_11 = FUNC_2(VAR_7, VAR_13, VAR_6, &VAR_12);
 if (!VAR_11)
  return -VAR_4;
 FUNC_5(VAR_12, 0, VAR_13);

 VAR_9 = (struct dlm_rcom *) VAR_12;

 VAR_9->rc_header.h_version = (VAR_0 | VAR_1);
 VAR_9->rc_header.h_lockspace = VAR_8->rc_header.h_lockspace;
 VAR_9->rc_header.h_nodeid = FUNC_3();
 VAR_9->rc_header.h_length = VAR_13;
 VAR_9->rc_header.h_cmd = VAR_2;

 VAR_9->rc_type = VAR_3;
 VAR_9->rc_id = VAR_8->rc_id;
 VAR_9->rc_seq_reply = VAR_8->rc_seq;
 VAR_9->rc_result = -VAR_5;

 VAR_10 = (struct rcom_config *) VAR_9->rc_buf;
 VAR_10->rf_lvblen = FUNC_0(~0U);

 FUNC_4(VAR_9);
 FUNC_1(VAR_11);

 return 0;
}
