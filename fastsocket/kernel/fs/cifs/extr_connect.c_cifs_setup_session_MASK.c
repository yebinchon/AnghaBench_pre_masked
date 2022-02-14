
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nls_table {int dummy; } ;
struct TYPE_4__ {scalar_t__ len; int * response; } ;
struct cifs_ses {int need_reconnect; int * ntlmssp; TYPE_2__ auth_key; int status; struct TCP_Server_Info* server; int capabilities; scalar_t__ flags; } ;
struct TYPE_3__ {scalar_t__ len; int * response; } ;
struct TCP_Server_Info {int session_estab; int sequence_number; int srv_mutex; TYPE_1__ session_key; int timeAdj; int capabilities; int sec_mode; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,struct cifs_ses*,struct nls_table*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(unsigned int VAR_4, struct cifs_ses *VAR_5,
   struct nls_table *VAR_6)
{
 int VAR_7 = 0;
 struct TCP_Server_Info *VAR_8 = VAR_5->server;

 VAR_5->flags = 0;
 VAR_5->capabilities = VAR_8->capabilities;
 if (VAR_3 == 0)
  VAR_5->capabilities &= (~VAR_0);

 FUNC_2(1, "Security Mode: 0x%x Capabilities: 0x%x TimeAdjust: %d",
   VAR_8->sec_mode, VAR_8->capabilities, VAR_8->timeAdj);

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_1(1, "Send error in SessSetup = %d", VAR_7);
 } else {
  FUNC_4(&VAR_5->server->srv_mutex);
  if (!VAR_8->session_estab) {
   VAR_8->session_key.response = VAR_5->auth_key.response;
   VAR_8->session_key.len = VAR_5->auth_key.len;
   VAR_8->sequence_number = 0x2;
   VAR_8->session_estab = 1;
   VAR_5->auth_key.response = ((void*)0);
  }
  FUNC_5(&VAR_8->srv_mutex);

  FUNC_2(1, "CIFS Session Established successfully");
  FUNC_6(&VAR_2);
  VAR_5->status = VAR_1;
  VAR_5->need_reconnect = 0;
  FUNC_7(&VAR_2);
 }

 FUNC_3(VAR_5->auth_key.response);
 VAR_5->auth_key.response = ((void*)0);
 VAR_5->auth_key.len = 0;
 FUNC_3(VAR_5->ntlmssp);
 VAR_5->ntlmssp = ((void*)0);

 return VAR_7;
}
