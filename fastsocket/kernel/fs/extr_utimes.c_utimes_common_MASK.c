
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct path {int mnt; TYPE_3__* dentry; } ;
struct inode {int i_mutex; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct iattr {int ia_valid; TYPE_2__ ia_mtime; TYPE_1__ ia_atime; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,struct iattr*) ;

__attribute__((used)) static int FUNC_8(struct path *VAR_10, struct timespec *VAR_11)
{
 int VAR_12;
 struct iattr VAR_13;
 struct inode *VAR_14 = VAR_10->dentry->d_inode;

 VAR_12 = FUNC_4(VAR_10->mnt);
 if (VAR_12)
  goto out;

 if (VAR_11 && VAR_11[0].tv_nsec == VAR_8 &&
       VAR_11[1].tv_nsec == VAR_8)
  VAR_11 = ((void*)0);

 VAR_13.ia_valid = VAR_2 | VAR_3 | VAR_0;
 if (VAR_11) {
  if (VAR_11[0].tv_nsec == VAR_9)
   VAR_13.ia_valid &= ~VAR_0;
  else if (VAR_11[0].tv_nsec != VAR_8) {
   VAR_13.ia_atime.tv_sec = VAR_11[0].tv_sec;
   VAR_13.ia_atime.tv_nsec = VAR_11[0].tv_nsec;
   VAR_13.ia_valid |= VAR_1;
  }

  if (VAR_11[1].tv_nsec == VAR_9)
   VAR_13.ia_valid &= ~VAR_3;
  else if (VAR_11[1].tv_nsec != VAR_8) {
   VAR_13.ia_mtime.tv_sec = VAR_11[1].tv_sec;
   VAR_13.ia_mtime.tv_nsec = VAR_11[1].tv_nsec;
   VAR_13.ia_valid |= VAR_4;
  }





  VAR_13.ia_valid |= VAR_5;
 } else {





  VAR_12 = -VAR_6;
                if (FUNC_0(VAR_14))
   goto mnt_drop_write_and_out;

  if (!FUNC_2(VAR_14)) {
   VAR_12 = FUNC_1(VAR_14, VAR_7);
   if (VAR_12)
    goto mnt_drop_write_and_out;
  }
 }
 FUNC_5(&VAR_14->i_mutex);
 VAR_12 = FUNC_7(VAR_10->dentry, &VAR_13);
 FUNC_6(&VAR_14->i_mutex);

mnt_drop_write_and_out:
 FUNC_3(VAR_10->mnt);
out:
 return VAR_12;
}
