
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {scalar_t__ fileid; scalar_t__ change_attr; scalar_t__ npages; unsigned long cache_validity; int read_cache_jiffies; } ;
struct nfs_fattr {int valid; scalar_t__ fileid; int mode; scalar_t__ change_attr; scalar_t__ uid; scalar_t__ gid; scalar_t__ nlink; int time_start; int atime; int size; int mtime; } ;
struct inode {int i_mode; scalar_t__ i_uid; scalar_t__ i_gid; scalar_t__ i_nlink; int i_atime; int i_mtime; } ;
typedef scalar_t__ loff_t ;


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
 struct nfs_inode* FUNC_0 (struct inode*) ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_18, struct nfs_fattr *VAR_19)
{
 struct nfs_inode *VAR_20 = FUNC_0(VAR_18);
 loff_t VAR_21, VAR_22;
 unsigned long VAR_23 = 0;


 if (FUNC_2(VAR_18))
  return 0;

 if ((VAR_19->valid & VAR_3) && VAR_20->fileid != VAR_19->fileid)
  return -VAR_0;
 if ((VAR_19->valid & VAR_10) && (VAR_18->i_mode & VAR_17) != (VAR_19->mode & VAR_17))
  return -VAR_0;

 if ((VAR_19->valid & VAR_2) != 0 &&
   VAR_20->change_attr != VAR_19->change_attr)
  VAR_23 |= VAR_14|VAR_15;


 if ((VAR_19->valid & VAR_6) && !FUNC_4(&VAR_18->i_mtime, &VAR_19->mtime))
  VAR_23 |= VAR_14;

 if (VAR_19->valid & VAR_9) {
  VAR_21 = FUNC_1(VAR_18);
  VAR_22 = FUNC_3(VAR_19->size);
  if (VAR_21 != VAR_22 && VAR_20->npages == 0)
   VAR_23 |= VAR_14|VAR_15;
 }


 if ((VAR_19->valid & VAR_5) && (VAR_18->i_mode & VAR_16) != (VAR_19->mode & VAR_16))
  VAR_23 |= VAR_14 | VAR_11 | VAR_12;
 if ((VAR_19->valid & VAR_8) && VAR_18->i_uid != VAR_19->uid)
  VAR_23 |= VAR_14 | VAR_11 | VAR_12;
 if ((VAR_19->valid & VAR_4) && VAR_18->i_gid != VAR_19->gid)
  VAR_23 |= VAR_14 | VAR_11 | VAR_12;


 if ((VAR_19->valid & VAR_7) && VAR_18->i_nlink != VAR_19->nlink)
  VAR_23 |= VAR_14;

 if ((VAR_19->valid & VAR_1) && !FUNC_4(&VAR_18->i_atime, &VAR_19->atime))
  VAR_23 |= VAR_13;

 if (VAR_23 != 0)
  VAR_20->cache_validity |= VAR_23;

 VAR_20->read_cache_jiffies = VAR_19->time_start;
 return 0;
}
