
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_sbd {int sd_jbsize; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_inode; int i_gl; } ;
struct gfs2_ea_header {scalar_t__ ea_num_ptrs; int ea_flags; int ea_type; int ea_rec_len; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_ea_header* FUNC_0 (struct buffer_head*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_sbd* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct gfs2_inode*,int *,unsigned int*,int ,int *) ;
 int FUNC_5 (struct buffer_head*,int) ;
 struct buffer_head* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct buffer_head*,int ,int ) ;
 int FUNC_8 (int ,struct buffer_head*) ;
 int FUNC_9 (struct gfs2_sbd*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct gfs2_inode *VAR_4, struct buffer_head **VAR_5)
{
 struct gfs2_sbd *VAR_6 = FUNC_1(&VAR_4->i_inode);
 struct gfs2_ea_header *VAR_7;
 unsigned int VAR_8 = 1;
 u64 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_4, &VAR_9, &VAR_8, 0, ((void*)0));
 if (VAR_10)
  return VAR_10;
 FUNC_9(VAR_6, VAR_9, 1);
 *VAR_5 = FUNC_6(VAR_4->i_gl, VAR_9);
 FUNC_8(VAR_4->i_gl, *VAR_5);
 FUNC_7(*VAR_5, VAR_3, VAR_2);
 FUNC_5(*VAR_5, sizeof(struct gfs2_meta_header));

 VAR_7 = FUNC_0(*VAR_5);
 VAR_7->ea_rec_len = FUNC_2(VAR_6->sd_jbsize);
 VAR_7->ea_type = VAR_1;
 VAR_7->ea_flags = VAR_0;
 VAR_7->ea_num_ptrs = 0;

 FUNC_3(&VAR_4->i_inode, 1);

 return 0;
}
