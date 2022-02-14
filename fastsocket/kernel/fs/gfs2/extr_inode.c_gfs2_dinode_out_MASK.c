
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int tv_nsec; int tv_sec; } ;
struct TYPE_11__ {int tv_nsec; int tv_sec; } ;
struct TYPE_10__ {int tv_nsec; int tv_sec; } ;
struct TYPE_13__ {int i_mode; int i_uid; int i_gid; int i_nlink; TYPE_5__ i_ctime; TYPE_4__ i_mtime; TYPE_3__ i_atime; } ;
struct gfs2_inode {int i_diskflags; int i_entries; TYPE_6__ i_inode; int i_eattr; int i_depth; int i_height; int i_generation; int i_goal; int i_no_formal_ino; int i_no_addr; } ;
struct TYPE_9__ {void* no_formal_ino; void* no_addr; } ;
struct TYPE_8__ {void* mh_format; void* mh_type; void* mh_magic; } ;
struct gfs2_dinode {void* di_ctime_nsec; void* di_mtime_nsec; void* di_atime_nsec; void* di_eattr; void* di_entries; void* di_depth; void* di_payload_format; void* di_height; void* di_flags; void* di_generation; void* di_goal_data; void* di_goal_meta; void* di_ctime; void* di_mtime; void* di_atime; void* di_blocks; void* di_size; void* di_nlink; void* di_gid; void* di_uid; void* di_mode; TYPE_2__ di_num; TYPE_1__ di_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;

void FUNC_6(const struct gfs2_inode *VAR_5, void *VAR_6)
{
 struct gfs2_dinode *VAR_7 = VAR_6;

 VAR_7->di_header.mh_magic = FUNC_2(VAR_3);
 VAR_7->di_header.mh_type = FUNC_2(VAR_4);
 VAR_7->di_header.mh_format = FUNC_2(VAR_2);
 VAR_7->di_num.no_addr = FUNC_3(VAR_5->i_no_addr);
 VAR_7->di_num.no_formal_ino = FUNC_3(VAR_5->i_no_formal_ino);
 VAR_7->di_mode = FUNC_2(VAR_5->i_inode.i_mode);
 VAR_7->di_uid = FUNC_2(VAR_5->i_inode.i_uid);
 VAR_7->di_gid = FUNC_2(VAR_5->i_inode.i_gid);
 VAR_7->di_nlink = FUNC_2(VAR_5->i_inode.i_nlink);
 VAR_7->di_size = FUNC_3(FUNC_5(&VAR_5->i_inode));
 VAR_7->di_blocks = FUNC_3(FUNC_4(&VAR_5->i_inode));
 VAR_7->di_atime = FUNC_3(VAR_5->i_inode.i_atime.tv_sec);
 VAR_7->di_mtime = FUNC_3(VAR_5->i_inode.i_mtime.tv_sec);
 VAR_7->di_ctime = FUNC_3(VAR_5->i_inode.i_ctime.tv_sec);

 VAR_7->di_goal_meta = FUNC_3(VAR_5->i_goal);
 VAR_7->di_goal_data = FUNC_3(VAR_5->i_goal);
 VAR_7->di_generation = FUNC_3(VAR_5->i_generation);

 VAR_7->di_flags = FUNC_2(VAR_5->i_diskflags);
 VAR_7->di_height = FUNC_1(VAR_5->i_height);
 VAR_7->di_payload_format = FUNC_2(FUNC_0(VAR_5->i_inode.i_mode) &&
          !(VAR_5->i_diskflags & VAR_0) ?
          VAR_1 : 0);
 VAR_7->di_depth = FUNC_1(VAR_5->i_depth);
 VAR_7->di_entries = FUNC_2(VAR_5->i_entries);

 VAR_7->di_eattr = FUNC_3(VAR_5->i_eattr);
 VAR_7->di_atime_nsec = FUNC_2(VAR_5->i_inode.i_atime.tv_nsec);
 VAR_7->di_mtime_nsec = FUNC_2(VAR_5->i_inode.i_mtime.tv_nsec);
 VAR_7->di_ctime_nsec = FUNC_2(VAR_5->i_inode.i_ctime.tv_nsec);
}
