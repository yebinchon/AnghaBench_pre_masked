
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct smb_vol {int local_nls; int secFlg; int linux_uid; int cred_uid; scalar_t__ domainname; scalar_t__ password; scalar_t__ username; } ;
struct cifs_ses {int smb_ses_list; int session_mutex; int overrideSecFlg; int linux_uid; int cred_uid; void* domainName; void* password; void* user_name; int serverName; struct TCP_Server_Info* server; scalar_t__ need_reconnect; int status; } ;
struct TYPE_2__ {scalar_t__ ss_family; } ;
struct TCP_Server_Info {int smb_ses_list; TYPE_1__ dstaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cifs_ses* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,...) ;
 struct cifs_ses* FUNC_4 (struct TCP_Server_Info*,struct smb_vol*) ;
 int FUNC_5 (int,struct cifs_ses*) ;
 int FUNC_6 (struct cifs_ses*) ;
 int FUNC_7 (struct TCP_Server_Info*) ;
 int FUNC_8 (int,struct cifs_ses*,int ) ;
 int VAR_3 ;
 void* FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct cifs_ses* FUNC_13 () ;
 int FUNC_14 (struct cifs_ses*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,int *) ;

__attribute__((used)) static struct cifs_ses *
FUNC_18(struct TCP_Server_Info *VAR_4, struct smb_vol *VAR_5)
{
 int VAR_6 = -VAR_1, VAR_7;
 struct cifs_ses *VAR_8;
 struct sockaddr_in *VAR_9 = (struct sockaddr_in *)&VAR_4->dstaddr;
 struct sockaddr_in6 *VAR_10 = (struct sockaddr_in6 *)&VAR_4->dstaddr;

 VAR_7 = FUNC_2();

 VAR_8 = FUNC_4(VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_3(1, "Existing smb sess found (status=%d)", VAR_8->status);

  FUNC_11(&VAR_8->session_mutex);
  VAR_6 = FUNC_5(VAR_7, VAR_8);
  if (VAR_6) {
   FUNC_12(&VAR_8->session_mutex);

   FUNC_6(VAR_8);
   FUNC_1(VAR_7);
   return FUNC_0(VAR_6);
  }
  if (VAR_8->need_reconnect) {
   FUNC_3(1, "Session needs reconnect");
   VAR_6 = FUNC_8(VAR_7, VAR_8,
      VAR_5->local_nls);
   if (VAR_6) {
    FUNC_12(&VAR_8->session_mutex);

    FUNC_6(VAR_8);
    FUNC_1(VAR_7);
    return FUNC_0(VAR_6);
   }
  }
  FUNC_12(&VAR_8->session_mutex);


  FUNC_7(VAR_4);
  FUNC_1(VAR_7);
  return VAR_8;
 }

 FUNC_3(1, "Existing smb sess not found");
 VAR_8 = FUNC_13();
 if (VAR_8 == ((void*)0))
  goto get_ses_fail;


 VAR_8->server = VAR_4;
 if (VAR_4->dstaddr.ss_family == VAR_0)
  FUNC_17(VAR_8->serverName, "%pI6", &VAR_10->sin6_addr);
 else
  FUNC_17(VAR_8->serverName, "%pI4", &VAR_9->sin_addr);

 if (VAR_5->username) {
  VAR_8->user_name = FUNC_9(VAR_5->username, VAR_2);
  if (!VAR_8->user_name)
   goto get_ses_fail;
 }


 if (VAR_5->password) {
  VAR_8->password = FUNC_9(VAR_5->password, VAR_2);
  if (!VAR_8->password)
   goto get_ses_fail;
 }
 if (VAR_5->domainname) {
  VAR_8->domainName = FUNC_9(VAR_5->domainname, VAR_2);
  if (!VAR_8->domainName)
   goto get_ses_fail;
 }
 VAR_8->cred_uid = VAR_5->cred_uid;
 VAR_8->linux_uid = VAR_5->linux_uid;
 VAR_8->overrideSecFlg = VAR_5->secFlg;

 FUNC_11(&VAR_8->session_mutex);
 VAR_6 = FUNC_5(VAR_7, VAR_8);
 if (!VAR_6)
  VAR_6 = FUNC_8(VAR_7, VAR_8, VAR_5->local_nls);
 FUNC_12(&VAR_8->session_mutex);
 if (VAR_6)
  goto get_ses_fail;


 FUNC_15(&VAR_3);
 FUNC_10(&VAR_8->smb_ses_list, &VAR_4->smb_ses_list);
 FUNC_16(&VAR_3);

 FUNC_1(VAR_7);
 return VAR_8;

get_ses_fail:
 FUNC_14(VAR_8);
 FUNC_1(VAR_7);
 return FUNC_0(VAR_6);
}
