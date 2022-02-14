
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct qstr {char* name; int hash; int len; } ;
struct inode {int dummy; } ;
struct gfs2_leaf {int lf_reserved; scalar_t__ lf_next; int lf_dirent_format; scalar_t__ lf_entries; int lf_depth; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_dirent {int dummy; } ;
struct buffer_head {scalar_t__ b_size; scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gfs2_inode*,int *,unsigned int*,int ,int *) ;
 struct buffer_head* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct buffer_head*,int ,int ) ;
 int FUNC_7 (struct qstr*,scalar_t__,struct gfs2_dirent*) ;
 int FUNC_8 (int ,struct buffer_head*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static struct gfs2_leaf *FUNC_11(struct inode *VAR_3, struct buffer_head **VAR_4, u16 VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_3);
 unsigned int VAR_7 = 1;
 u64 VAR_8;
 int VAR_9;
 struct buffer_head *VAR_10;
 struct gfs2_leaf *VAR_11;
 struct gfs2_dirent *VAR_12;
 struct qstr VAR_13 = { .name = "", .len = 0, .hash = 0 };

 VAR_9 = FUNC_4(VAR_6, &VAR_8, &VAR_7, 0, ((void*)0));
 if (VAR_9)
  return ((void*)0);
 VAR_10 = FUNC_5(VAR_6->i_gl, VAR_8);
 if (!VAR_10)
  return ((void*)0);

 FUNC_9(FUNC_1(VAR_3), VAR_8, 1);
 FUNC_8(VAR_6->i_gl, VAR_10);
 FUNC_6(VAR_10, VAR_2, VAR_1);
 VAR_11 = (struct gfs2_leaf *)VAR_10->b_data;
 VAR_11->lf_depth = FUNC_2(VAR_5);
 VAR_11->lf_entries = 0;
 VAR_11->lf_dirent_format = FUNC_3(VAR_0);
 VAR_11->lf_next = 0;
 FUNC_10(VAR_11->lf_reserved, 0, sizeof(VAR_11->lf_reserved));
 VAR_12 = (struct gfs2_dirent *)(VAR_11+1);
 FUNC_7(&VAR_13, VAR_10->b_size - sizeof(struct gfs2_leaf), VAR_12);
 *VAR_4 = VAR_10;
 return VAR_11;
}
