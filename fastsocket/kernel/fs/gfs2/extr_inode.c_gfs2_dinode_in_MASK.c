
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u16 ;
struct timespec {void* tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_11__ {void* tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_10__ {void* tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_12__ {int i_mode; TYPE_3__ i_ctime; TYPE_2__ i_mtime; struct timespec i_atime; void* i_gid; void* i_uid; scalar_t__ i_rdev; } ;
struct gfs2_inode {scalar_t__ i_no_addr; TYPE_4__ i_inode; scalar_t__ i_eattr; void* i_entries; void* i_depth; void* i_height; void* i_diskflags; scalar_t__ i_generation; scalar_t__ i_goal; scalar_t__ i_no_formal_ino; } ;
struct TYPE_9__ {int no_formal_ino; int no_addr; } ;
struct gfs2_dinode {int di_eattr; int di_entries; int di_depth; int di_height; int di_flags; int di_generation; int di_goal_meta; int di_ctime_nsec; int di_ctime; int di_mtime_nsec; int di_mtime; int di_atime_nsec; int di_atime; int di_blocks; int di_size; int di_nlink; int di_gid; int di_uid; int di_minor; int di_major; int di_mode; TYPE_1__ di_num; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (void*,void*) ;


 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,scalar_t__) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,void*) ;
 int FUNC_11 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct timespec*,struct timespec*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct gfs2_inode *VAR_4, const void *VAR_5)
{
 const struct gfs2_dinode *VAR_6 = VAR_5;
 struct timespec VAR_7;
 u16 VAR_8, VAR_9;

 if (FUNC_13(VAR_4->i_no_addr != FUNC_4(VAR_6->di_num.no_addr)))
  goto corrupt;
 VAR_4->i_no_formal_ino = FUNC_4(VAR_6->di_num.no_formal_ino);
 VAR_4->i_inode.i_mode = FUNC_3(VAR_6->di_mode);
 VAR_4->i_inode.i_rdev = 0;
 switch (VAR_4->i_inode.i_mode & VAR_3) {
 case 129:
 case 128:
  VAR_4->i_inode.i_rdev = FUNC_0(FUNC_3(VAR_6->di_major),
        FUNC_3(VAR_6->di_minor));
  break;
 };

 VAR_4->i_inode.i_uid = FUNC_3(VAR_6->di_uid);
 VAR_4->i_inode.i_gid = FUNC_3(VAR_6->di_gid);
 FUNC_10(&VAR_4->i_inode, FUNC_3(VAR_6->di_nlink));
 FUNC_11(&VAR_4->i_inode, FUNC_4(VAR_6->di_size));
 FUNC_8(&VAR_4->i_inode, FUNC_4(VAR_6->di_blocks));
 VAR_7.tv_sec = FUNC_4(VAR_6->di_atime);
 VAR_7.tv_nsec = FUNC_3(VAR_6->di_atime_nsec);
 if (FUNC_12(&VAR_4->i_inode.i_atime, &VAR_7) < 0)
  VAR_4->i_inode.i_atime = VAR_7;
 VAR_4->i_inode.i_mtime.tv_sec = FUNC_4(VAR_6->di_mtime);
 VAR_4->i_inode.i_mtime.tv_nsec = FUNC_3(VAR_6->di_mtime_nsec);
 VAR_4->i_inode.i_ctime.tv_sec = FUNC_4(VAR_6->di_ctime);
 VAR_4->i_inode.i_ctime.tv_nsec = FUNC_3(VAR_6->di_ctime_nsec);

 VAR_4->i_goal = FUNC_4(VAR_6->di_goal_meta);
 VAR_4->i_generation = FUNC_4(VAR_6->di_generation);

 VAR_4->i_diskflags = FUNC_3(VAR_6->di_flags);
 FUNC_9(&VAR_4->i_inode);
 VAR_8 = FUNC_2(VAR_6->di_height);
 if (FUNC_13(VAR_8 > VAR_2))
  goto corrupt;
 VAR_4->i_height = (u8)VAR_8;

 VAR_9 = FUNC_2(VAR_6->di_depth);
 if (FUNC_13(VAR_9 > VAR_1))
  goto corrupt;
 VAR_4->i_depth = (u8)VAR_9;
 VAR_4->i_entries = FUNC_3(VAR_6->di_entries);

 VAR_4->i_eattr = FUNC_4(VAR_6->di_eattr);
 if (FUNC_1(VAR_4->i_inode.i_mode))
  FUNC_7(&VAR_4->i_inode);

 return 0;
corrupt:
 if (FUNC_5(VAR_4))
  FUNC_6(VAR_4);
 return -VAR_0;
}
