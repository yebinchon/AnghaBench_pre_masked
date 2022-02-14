
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_8__ {int * i2_data; } ;
struct minix_inode_info {TYPE_4__ u; } ;
struct minix2_inode {int * i_zone; int i_ctime; int i_atime; int i_mtime; int i_size; int i_nlinks; scalar_t__ i_gid; scalar_t__ i_uid; int i_mode; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct inode {scalar_t__ i_blocks; TYPE_3__ i_ctime; TYPE_2__ i_atime; TYPE_1__ i_mtime; int i_size; int i_nlink; scalar_t__ i_gid; scalar_t__ i_uid; int i_mode; int i_ino; int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 struct minix2_inode* FUNC_3 (int ,int ,struct buffer_head**) ;
 struct minix_inode_info* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_8(struct inode *VAR_1)
{
 struct buffer_head * VAR_2;
 struct minix2_inode * VAR_3;
 struct minix_inode_info *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 VAR_3 = FUNC_3(VAR_1->i_sb, VAR_1->i_ino, &VAR_2);
 if (!VAR_3) {
  FUNC_2(VAR_1);
  return FUNC_0(-VAR_0);
 }
 VAR_1->i_mode = VAR_3->i_mode;
 VAR_1->i_uid = (uid_t)VAR_3->i_uid;
 VAR_1->i_gid = (gid_t)VAR_3->i_gid;
 VAR_1->i_nlink = VAR_3->i_nlinks;
 VAR_1->i_size = VAR_3->i_size;
 VAR_1->i_mtime.tv_sec = VAR_3->i_mtime;
 VAR_1->i_atime.tv_sec = VAR_3->i_atime;
 VAR_1->i_ctime.tv_sec = VAR_3->i_ctime;
 VAR_1->i_mtime.tv_nsec = 0;
 VAR_1->i_atime.tv_nsec = 0;
 VAR_1->i_ctime.tv_nsec = 0;
 VAR_1->i_blocks = 0;
 for (VAR_5 = 0; VAR_5 < 10; VAR_5++)
  VAR_4->u.i2_data[VAR_5] = VAR_3->i_zone[VAR_5];
 FUNC_5(VAR_1, FUNC_6(VAR_3->i_zone[0]));
 FUNC_1(VAR_2);
 FUNC_7(VAR_1);
 return VAR_1;
}
