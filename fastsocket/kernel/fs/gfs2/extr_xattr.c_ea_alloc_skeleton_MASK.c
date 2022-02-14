
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_ctime; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; } ;
struct gfs2_ea_request {int dummy; } ;
struct gfs2_alloc_parms {unsigned int target; } ;
struct buffer_head {int b_data; } ;
typedef int (* ea_skeleton_call_t ) (struct gfs2_inode*,struct gfs2_ea_request*,void*) ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct gfs2_inode*,int ) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 int FUNC_5 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_inode*) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*,unsigned int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct buffer_head*) ;
 int FUNC_11 (int ,scalar_t__,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct gfs2_inode *VAR_4, struct gfs2_ea_request *VAR_5,
        unsigned int VAR_6,
        ea_skeleton_call_t VAR_7, void *VAR_8)
{
 struct gfs2_alloc_parms VAR_9 = { .target = VAR_6 };
 struct buffer_head *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_9(FUNC_0(&VAR_4->i_inode));
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_6(VAR_4);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_4, &VAR_9);
 if (VAR_11)
  goto out_gunlock_q;

 VAR_11 = FUNC_11(FUNC_0(&VAR_4->i_inode),
     VAR_6 + FUNC_8(VAR_4, VAR_6) +
     VAR_1 + VAR_3 + VAR_2, 0);
 if (VAR_11)
  goto out_ipres;

 VAR_11 = VAR_7(VAR_4, VAR_5, VAR_8);
 if (VAR_11)
  goto out_end_trans;

 VAR_11 = FUNC_5(VAR_4, &VAR_10);
 if (!VAR_11) {
  VAR_4->i_inode.i_ctime = VAR_0;
  FUNC_10(VAR_4->i_gl, VAR_10);
  FUNC_2(VAR_4, VAR_10->b_data);
  FUNC_1(VAR_10);
 }

out_end_trans:
 FUNC_12(FUNC_0(&VAR_4->i_inode));
out_ipres:
 FUNC_3(VAR_4);
out_gunlock_q:
 FUNC_7(VAR_4);
 return VAR_11;
}
