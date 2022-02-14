
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcon_link {int tl_flags; int tl_time; struct cifs_tcon* tl_tcon; int tl_uid; } ;
struct smb_vol {int dummy; } ;
struct TYPE_6__ {int Capability; } ;
struct cifs_tcon {int linux_uid; int ipc; scalar_t__ unix_ext; TYPE_3__ fsUnixInfo; TYPE_2__* ses; } ;
struct cifs_ses {int linux_uid; int ipc; scalar_t__ unix_ext; TYPE_3__ fsUnixInfo; TYPE_2__* ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; int prune_tlinks; int tlink_tree_lock; int tlink_tree; struct tcon_link* master_tlink; int prepath; int rsize; int wsize; } ;
struct TCP_Server_Info {int linux_uid; int ipc; scalar_t__ unix_ext; TYPE_3__ fsUnixInfo; TYPE_2__* ses; } ;
struct TYPE_5__ {int capabilities; TYPE_1__* server; } ;
struct TYPE_4__ {scalar_t__ tcpStatus; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct cifs_tcon*) ;
 int FUNC_1 (int,struct cifs_tcon*) ;
 int FUNC_2 (struct cifs_sb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct cifs_tcon*) ;
 int VAR_10 ;
 int FUNC_6 (struct cifs_tcon*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_7 (struct cifs_sb_info*,struct cifs_tcon*) ;
 struct cifs_tcon* FUNC_8 (struct cifs_tcon*,struct smb_vol*) ;
 struct cifs_tcon* FUNC_9 (struct cifs_tcon*,struct smb_vol*) ;
 struct cifs_tcon* FUNC_10 (struct smb_vol*) ;
 int FUNC_11 (struct cifs_tcon*,struct smb_vol*) ;
 int FUNC_12 (struct cifs_tcon*,struct smb_vol*) ;
 int FUNC_13 (struct cifs_tcon*) ;
 int FUNC_14 (struct cifs_tcon*) ;
 int FUNC_15 (struct cifs_tcon*) ;
 int VAR_14 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int,struct cifs_tcon*,struct smb_vol*,struct cifs_sb_info*,int) ;
 int FUNC_18 (int,struct cifs_tcon*,struct cifs_sb_info*,char*) ;
 int VAR_15 ;
 int FUNC_19 (char*) ;
 struct tcon_link* FUNC_20 (int,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int *,int ) ;
 int FUNC_23 (int,struct cifs_tcon*,struct cifs_sb_info*,struct smb_vol*) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,struct tcon_link*) ;

int
FUNC_28(struct cifs_sb_info *VAR_16, struct smb_vol *VAR_17)
{
 int VAR_18;
 int VAR_19;
 struct cifs_ses *VAR_20;
 struct cifs_tcon *VAR_21;
 struct TCP_Server_Info *VAR_22;
 char *VAR_23;
 struct tcon_link *VAR_24;
 VAR_18 = 0;
 VAR_21 = ((void*)0);
 VAR_20 = ((void*)0);
 VAR_22 = ((void*)0);
 VAR_23 = ((void*)0);
 VAR_24 = ((void*)0);

 VAR_19 = FUNC_4();


 VAR_22 = FUNC_10(VAR_17);
 if (FUNC_5(VAR_22)) {
  VAR_18 = FUNC_6(VAR_22);
  goto out;
 }


 VAR_20 = FUNC_8(VAR_22, VAR_17);
 if (FUNC_5(VAR_20)) {
  VAR_18 = FUNC_6(VAR_20);
  VAR_20 = ((void*)0);
  goto mount_fail_check;
 }


 VAR_21 = FUNC_9(VAR_20, VAR_17);
 if (FUNC_5(VAR_21)) {
  VAR_18 = FUNC_6(VAR_21);
  VAR_21 = ((void*)0);
  goto remote_path_check;
 }


 if (VAR_21->ses->capabilities & VAR_0) {


  FUNC_23(VAR_19, VAR_21, VAR_16, VAR_17);
  if ((VAR_21->ses->server->tcpStatus == VAR_3) &&
      (FUNC_21(VAR_21->fsUnixInfo.Capability) &
       VAR_2)) {
   VAR_18 = -VAR_4;
   goto mount_fail_check;
  }
 } else
  VAR_21->unix_ext = 0;


 if (!VAR_21->ipc) {
  FUNC_1(VAR_19, VAR_21);
  FUNC_0(VAR_19, VAR_21);
 }


 if ((VAR_16->mnt_cifs_flags & VAR_1) == 0)
  FUNC_16(VAR_16->prepath, FUNC_2(VAR_16));

 VAR_16->wsize = FUNC_12(VAR_21, VAR_17);
 VAR_16->rsize = FUNC_11(VAR_21, VAR_17);

remote_path_check:
 if (!VAR_18 && VAR_21) {

  VAR_23 = FUNC_7(VAR_16, VAR_21);
  if (VAR_23 == ((void*)0)) {
   VAR_18 = -VAR_6;
   goto mount_fail_check;
  }
  VAR_18 = FUNC_18(VAR_19, VAR_21, VAR_16, VAR_23);
  if (VAR_18 != 0 && VAR_18 != -VAR_8) {
   FUNC_19(VAR_23);
   goto mount_fail_check;
  }
  FUNC_19(VAR_23);
 }


 if (VAR_18 == -VAR_8) {
  VAR_18 = -VAR_7;

 }

 if (VAR_18)
  goto mount_fail_check;


 VAR_24 = FUNC_20(sizeof *VAR_24, VAR_9);
 if (VAR_24 == ((void*)0)) {
  VAR_18 = -VAR_6;
  goto mount_fail_check;
 }

 VAR_24->tl_uid = VAR_20->linux_uid;
 VAR_24->tl_tcon = VAR_21;
 VAR_24->tl_time = VAR_15;
 FUNC_24(VAR_12, &VAR_24->tl_flags);
 FUNC_24(VAR_11, &VAR_24->tl_flags);

 VAR_16->master_tlink = VAR_24;
 FUNC_25(&VAR_16->tlink_tree_lock);
 FUNC_27(&VAR_16->tlink_tree, VAR_24);
 FUNC_26(&VAR_16->tlink_tree_lock);

 FUNC_22(VAR_14, &VAR_16->prune_tlinks,
    VAR_13);

mount_fail_check:

 if (VAR_18) {


  if (VAR_21)
   FUNC_14(VAR_21);
  else if (VAR_20)
   FUNC_13(VAR_20);
  else
   FUNC_15(VAR_22);
 }

out:
 FUNC_3(VAR_19);
 return VAR_18;
}
