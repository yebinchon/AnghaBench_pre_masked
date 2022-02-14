
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int umode_t ;
struct nw_modify_dos_info {int attributes; int lastAccessDate; int modifyDate; int modifyTime; int creationDate; int creationTime; } ;
struct TYPE_6__ {scalar_t__ uid; scalar_t__ gid; int dir_mode; int flags; int file_mode; } ;
struct ncp_server {TYPE_1__ m; } ;
struct inode {int i_mode; } ;
struct TYPE_9__ {int tv_sec; } ;
struct TYPE_8__ {int tv_sec; } ;
struct TYPE_7__ {int tv_sec; } ;
struct iattr {int ia_valid; scalar_t__ ia_uid; scalar_t__ ia_gid; int ia_mode; TYPE_4__ ia_atime; TYPE_3__ ia_mtime; TYPE_2__ ia_ctime; int ia_size; } ;
struct dentry {struct inode* d_inode; } ;
typedef int info ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_10__ {int nwattr; int file_handle; int dirEntNum; int volNumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (char*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_5__* FUNC_1 (struct inode*) ;
 int VAR_16 ;
 struct ncp_server* FUNC_2 (struct inode*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (struct inode*,struct iattr*) ;
 int FUNC_5 (struct inode*,struct iattr*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nw_modify_dos_info*,int ,int) ;
 int FUNC_8 (struct ncp_server*,struct dentry*) ;
 int FUNC_9 (struct ncp_server*) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (struct ncp_server*,int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,int ) ;
 int FUNC_15 (struct ncp_server*,struct inode*,int,struct nw_modify_dos_info*) ;
 int FUNC_16 (struct ncp_server*,int ,int ,int,int ) ;
 int FUNC_17 (struct ncp_server*,int ,int ,int ,char*,int*) ;
 int FUNC_18 () ;

int FUNC_19(struct dentry *VAR_29, struct iattr *VAR_30)
{
 struct inode *VAR_31 = VAR_29->d_inode;
 int VAR_32 = 0;
 __le32 VAR_33;
 struct nw_modify_dos_info VAR_34;
 struct ncp_server *VAR_35;

 VAR_32 = -VAR_14;

 FUNC_6();

 VAR_35 = FUNC_2(VAR_31);
 if ((!VAR_35) || !FUNC_9(VAR_35))
  goto out;


 FUNC_8(VAR_35, VAR_29);

 VAR_32 = FUNC_4(VAR_31, VAR_30);
 if (VAR_32 < 0)
  goto out;

 VAR_32 = -VAR_15;
 if (((VAR_30->ia_valid & VAR_6) &&
      (VAR_30->ia_uid != VAR_35->m.uid)))
  goto out;

 if (((VAR_30->ia_valid & VAR_2) &&
      (VAR_30->ia_gid != VAR_35->m.gid)))
  goto out;

 if (((VAR_30->ia_valid & VAR_3) &&
      (VAR_30->ia_mode &
       ~(VAR_19 | VAR_18 | VAR_21))))
  goto out;

 VAR_33 = 0;
 FUNC_7(&VAR_34, 0, sizeof(VAR_34));


        if ((VAR_30->ia_valid & VAR_3) != 0)
        {
  umode_t VAR_36 = VAR_30->ia_mode;

  VAR_33 |= VAR_7;

                if (FUNC_3(VAR_31->i_mode)) {
                 VAR_36 &= VAR_35->m.dir_mode;
  } else {
    VAR_36 &= VAR_35->m.file_mode;
                }
                if (VAR_36 & VAR_22)
                 VAR_34.attributes &= ~(VAR_26|VAR_25|VAR_24);
                else
   VAR_34.attributes |= (VAR_26|VAR_25|VAR_24);
        }




 if ((VAR_30->ia_valid & VAR_5) != 0) {
  int VAR_37;

  FUNC_0("ncpfs: trying to change size to %ld\n",
   VAR_30->ia_size);

  if ((VAR_32 = FUNC_14(VAR_31, VAR_17)) < 0) {
   VAR_32 = -VAR_13;
   goto out;
  }
  FUNC_17(FUNC_2(VAR_31), FUNC_1(VAR_31)->file_handle,
     VAR_30->ia_size, 0, "", &VAR_37);



  FUNC_11(VAR_31);
  VAR_32 = FUNC_13(VAR_31);
  if (VAR_32)
   goto out;
  {
   struct iattr VAR_38;

   VAR_38.ia_valid = VAR_5;
   VAR_38.ia_size = VAR_30->ia_size;

   VAR_32 = FUNC_5(VAR_31, &VAR_38);
   if (VAR_32)
    goto out;
  }
 }
 if ((VAR_30->ia_valid & VAR_1) != 0) {
  VAR_33 |= (VAR_9 | VAR_8);
  FUNC_10(VAR_30->ia_ctime.tv_sec,
        &VAR_34.creationTime, &VAR_34.creationDate);
 }
 if ((VAR_30->ia_valid & VAR_4) != 0) {
  VAR_33 |= (VAR_12 | VAR_11);
  FUNC_10(VAR_30->ia_mtime.tv_sec,
      &VAR_34.modifyTime, &VAR_34.modifyDate);
 }
 if ((VAR_30->ia_valid & VAR_0) != 0) {
  __le16 VAR_39;
  VAR_33 |= (VAR_10);
  FUNC_10(VAR_30->ia_atime.tv_sec,
      &VAR_39, &VAR_34.lastAccessDate);
 }
 if (VAR_33 != 0) {
  VAR_32 = FUNC_15(FUNC_2(VAR_31),
          VAR_31, VAR_33, &VAR_34);
  if (VAR_32 != 0) {
   VAR_32 = -VAR_13;

   if (VAR_33 == (VAR_9 | VAR_8)) {





    VAR_32 = 0;
   } else
    goto out;
  }




 }
 if (!VAR_32)
  VAR_32 = FUNC_5(VAR_31, VAR_30);
out:
 FUNC_18();
 return VAR_32;
}
