
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct smb_vol {char* username; int linux_uid; int cred_uid; int no_linux_ext; int secFlg; int local_lease; int nocase; int retry; int UNC; int local_nls; } ;
struct cifs_tcon {int capabilities; TYPE_1__* ses; int unix_ext; int local_lease; int nocase; int retry; int treeName; } ;
struct cifs_ses {int capabilities; TYPE_1__* ses; int unix_ext; int local_lease; int nocase; int retry; int treeName; } ;
struct cifs_sb_info {int local_nls; } ;
struct TYPE_5__ {int srv_count; } ;
struct TYPE_4__ {TYPE_2__* server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cifs_tcon* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct cifs_tcon*) ;
 int VAR_4 ;
 struct cifs_tcon* FUNC_2 (TYPE_2__*,struct smb_vol*) ;
 struct cifs_tcon* FUNC_3 (struct cifs_tcon*,struct smb_vol*) ;
 int FUNC_4 (struct cifs_tcon*) ;
 int FUNC_5 (TYPE_2__*) ;
 struct cifs_tcon* FUNC_6 (struct cifs_sb_info*) ;
 int VAR_5 ;
 int FUNC_7 (struct smb_vol*) ;
 struct smb_vol* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,struct cifs_tcon*,int *,struct smb_vol*) ;
 int FUNC_10 (char*,int ,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct cifs_tcon *
FUNC_13(struct cifs_sb_info *VAR_6, uid_t VAR_7)
{
 struct cifs_tcon *VAR_8 = FUNC_6(VAR_6);
 struct cifs_ses *VAR_9;
 struct cifs_tcon *VAR_10 = ((void*)0);
 struct smb_vol *VAR_11;
 char VAR_12[VAR_4 + 1];

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_3);
 if (VAR_11 == ((void*)0)) {
  VAR_10 = FUNC_0(-VAR_2);
  goto out;
 }

 FUNC_10(VAR_12, VAR_4, "krb50x%x", VAR_7);
 VAR_11->username = VAR_12;
 VAR_11->local_nls = VAR_6->local_nls;
 VAR_11->linux_uid = VAR_7;
 VAR_11->cred_uid = VAR_7;
 VAR_11->UNC = VAR_8->treeName;
 VAR_11->retry = VAR_8->retry;
 VAR_11->nocase = VAR_8->nocase;
 VAR_11->local_lease = VAR_8->local_lease;
 VAR_11->no_linux_ext = !VAR_8->unix_ext;


 VAR_11->secFlg = VAR_1;


 FUNC_11(&VAR_5);
 ++VAR_8->ses->server->srv_count;
 FUNC_12(&VAR_5);

 VAR_9 = FUNC_2(VAR_8->ses->server, VAR_11);
 if (FUNC_1(VAR_9)) {
  VAR_10 = (struct cifs_tcon *)VAR_9;
  FUNC_5(VAR_8->ses->server);
  goto out;
 }

 VAR_10 = FUNC_3(VAR_9, VAR_11);
 if (FUNC_1(VAR_10)) {
  FUNC_4(VAR_9);
  goto out;
 }

 if (VAR_9->capabilities & VAR_0)
  FUNC_9(0, VAR_10, ((void*)0), VAR_11);
out:
 FUNC_7(VAR_11);

 return VAR_10;
}
