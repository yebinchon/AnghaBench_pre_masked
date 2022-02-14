
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct gfs2_inode {int dummy; } ;
struct gfs2_dirent {void* de_type; int de_inum; } ;
struct gfs2_dinode {int di_num; } ;
struct buffer_head {int b_size; scalar_t__ b_data; } ;
struct TYPE_4__ {int len; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_inode const*,struct gfs2_dirent*) ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (TYPE_1__*,int,struct gfs2_dirent*) ;

__attribute__((used)) static void FUNC_4(struct buffer_head *VAR_3,
     const struct gfs2_inode *VAR_4)
{
 struct gfs2_dinode *VAR_5 = (struct gfs2_dinode *)VAR_3->b_data;
 struct gfs2_dirent *VAR_6 = (struct gfs2_dirent *)(VAR_5+1);

 FUNC_3(&VAR_1, FUNC_0(VAR_1.len), VAR_6);
 VAR_6->de_inum = VAR_5->di_num;
 VAR_6->de_type = FUNC_1(VAR_0);

 VAR_6 = (struct gfs2_dirent *)((char*)VAR_6 + FUNC_0(1));
 FUNC_3(&VAR_2, VAR_3->b_size - FUNC_0(1) - sizeof(struct gfs2_dinode), VAR_6);
 FUNC_2(VAR_4, VAR_6);
 VAR_6->de_type = FUNC_1(VAR_0);
}
