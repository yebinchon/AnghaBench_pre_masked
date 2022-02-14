
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vfsmount {TYPE_5__* mnt_sb; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct seq_file {int dummy; } ;
struct cifs_tcon {int treeName; scalar_t__ unix_ext; scalar_t__ retry; scalar_t__ nocase; scalar_t__ seal; TYPE_2__* ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; int mnt_uid; int mnt_gid; int prepath; int mnt_backupuid; int mnt_backupgid; int rsize; int wsize; int actimeo; int mnt_dir_mode; int mnt_file_mode; } ;
struct TYPE_9__ {int s_flags; } ;
struct TYPE_8__ {int srcaddr; } ;
struct TYPE_7__ {int user_name; int domainName; TYPE_3__* server; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct cifs_sb_info* FUNC_0 (TYPE_5__*) ;
 int VAR_23 ;
 int VAR_24 ;
 struct cifs_tcon* FUNC_1 (struct cifs_sb_info*) ;
 int FUNC_2 (struct seq_file*,TYPE_3__*) ;
 int FUNC_3 (struct seq_file*,struct cifs_sb_info*) ;
 int FUNC_4 (struct seq_file*,TYPE_3__*) ;
 int FUNC_5 (struct seq_file*,char*,...) ;

__attribute__((used)) static int
FUNC_6(struct seq_file *VAR_25, struct vfsmount *VAR_26)
{
 struct cifs_sb_info *VAR_27 = FUNC_0(VAR_26->mnt_sb);
 struct cifs_tcon *VAR_28 = FUNC_1(VAR_27);
 struct sockaddr *VAR_29;
 VAR_29 = (struct sockaddr *)&VAR_28->ses->server->srcaddr;

 FUNC_4(VAR_25, VAR_28->ses->server);
 FUNC_3(VAR_25, VAR_27);

 FUNC_5(VAR_25, ",unc=%s", VAR_28->treeName);

 if (VAR_27->mnt_cifs_flags & VAR_10)
  FUNC_5(VAR_25, ",multiuser");
 else if (VAR_28->ses->user_name)
  FUNC_5(VAR_25, ",username=%s", VAR_28->ses->user_name);

 if (VAR_28->ses->domainName)
  FUNC_5(VAR_25, ",domain=%s", VAR_28->ses->domainName);

 if (VAR_29->sa_family != VAR_2) {
  struct sockaddr_in *VAR_30;
  struct sockaddr_in6 *VAR_31;
  VAR_30 = (struct sockaddr_in *)VAR_29;
  VAR_31 = (struct sockaddr_in6 *)VAR_29;
  if (VAR_29->sa_family == VAR_1)
   FUNC_5(VAR_25, ",srcaddr=%pI6c",
       &VAR_31->sin6_addr);
  else if (VAR_29->sa_family == VAR_0)
   FUNC_5(VAR_25, ",srcaddr=%pI4",
       &VAR_30->sin_addr.s_addr);
  else
   FUNC_5(VAR_25, ",srcaddr=BAD-AF:%i",
       (int)(VAR_29->sa_family));
 }

 FUNC_5(VAR_25, ",uid=%u", VAR_27->mnt_uid);
 if (VAR_27->mnt_cifs_flags & VAR_17)
  FUNC_5(VAR_25, ",forceuid");
 else
  FUNC_5(VAR_25, ",noforceuid");

 FUNC_5(VAR_25, ",gid=%u", VAR_27->mnt_gid);
 if (VAR_27->mnt_cifs_flags & VAR_16)
  FUNC_5(VAR_25, ",forcegid");
 else
  FUNC_5(VAR_25, ",noforcegid");

 FUNC_2(VAR_25, VAR_28->ses->server);

 if (!VAR_28->unix_ext)
  FUNC_5(VAR_25, ",file_mode=0%o,dir_mode=0%o",
        VAR_27->mnt_file_mode,
        VAR_27->mnt_dir_mode);
 if (VAR_28->seal)
  FUNC_5(VAR_25, ",seal");
 if (VAR_28->nocase)
  FUNC_5(VAR_25, ",nocase");
 if (VAR_28->retry)
  FUNC_5(VAR_25, ",hard");
 if (VAR_28->unix_ext)
  FUNC_5(VAR_25, ",unix");
 else
  FUNC_5(VAR_25, ",nounix");
 if (VAR_27->prepath)
  FUNC_5(VAR_25, ",prepath=%s", VAR_27->prepath);
 if (VAR_27->mnt_cifs_flags & VAR_18)
  FUNC_5(VAR_25, ",posixpaths");
 if (VAR_27->mnt_cifs_flags & VAR_21)
  FUNC_5(VAR_25, ",setuids");
 if (VAR_27->mnt_cifs_flags & VAR_20)
  FUNC_5(VAR_25, ",serverino");
 if (VAR_27->mnt_cifs_flags & VAR_19)
  FUNC_5(VAR_25, ",rwpidforward");
 if (VAR_27->mnt_cifs_flags & VAR_11)
  FUNC_5(VAR_25, ",forcemand");
 if (VAR_27->mnt_cifs_flags & VAR_15)
  FUNC_5(VAR_25, ",nouser_xattr");
 if (VAR_27->mnt_cifs_flags & VAR_8)
  FUNC_5(VAR_25, ",mapchars");
 if (VAR_27->mnt_cifs_flags & VAR_22)
  FUNC_5(VAR_25, ",sfu");
 if (VAR_27->mnt_cifs_flags & VAR_13)
  FUNC_5(VAR_25, ",nobrl");
 if (VAR_27->mnt_cifs_flags & VAR_3)
  FUNC_5(VAR_25, ",cifsacl");
 if (VAR_27->mnt_cifs_flags & VAR_6)
  FUNC_5(VAR_25, ",dynperm");
 if (VAR_26->mnt_sb->s_flags & VAR_24)
  FUNC_5(VAR_25, ",acl");
 if (VAR_27->mnt_cifs_flags & VAR_9)
  FUNC_5(VAR_25, ",mfsymlinks");
 if (VAR_27->mnt_cifs_flags & VAR_7)
  FUNC_5(VAR_25, ",fsc");
 if (VAR_27->mnt_cifs_flags & VAR_12)
  FUNC_5(VAR_25, ",nostrictsync");
 if (VAR_27->mnt_cifs_flags & VAR_14)
  FUNC_5(VAR_25, ",noperm");
 if (VAR_27->mnt_cifs_flags & VAR_5)
  FUNC_5(VAR_25, ",backupuid=%u", VAR_27->mnt_backupuid);
 if (VAR_27->mnt_cifs_flags & VAR_4)
  FUNC_5(VAR_25, ",backupgid=%u", VAR_27->mnt_backupgid);

 FUNC_5(VAR_25, ",rsize=%u", VAR_27->rsize);
 FUNC_5(VAR_25, ",wsize=%u", VAR_27->wsize);

 FUNC_5(VAR_25, ",actimeo=%lu", VAR_27->actimeo / VAR_23);

 return 0;
}
