
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_ctime; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; } ;
struct gfs2_ea_request {int dummy; } ;
struct gfs2_ea_header {int dummy; } ;
struct ea_set {scalar_t__ es_el; scalar_t__ ea_split; struct gfs2_ea_request* es_er; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct gfs2_inode*,scalar_t__) ;
 struct gfs2_ea_header* FUNC_3 (struct gfs2_ea_header*) ;
 int FUNC_4 (struct gfs2_inode*,struct gfs2_ea_header*,struct gfs2_ea_request*) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 int FUNC_6 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_7 (int ,struct buffer_head*) ;
 int FUNC_8 (int ,scalar_t__,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct gfs2_inode *VAR_3, struct buffer_head *VAR_4,
     struct gfs2_ea_header *VAR_5, struct ea_set *VAR_6)
{
 struct gfs2_ea_request *VAR_7 = VAR_6->es_er;
 struct buffer_head *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_8(FUNC_0(&VAR_3->i_inode), VAR_1 + 2 * VAR_2, 0);
 if (VAR_9)
  return VAR_9;

 FUNC_7(VAR_3->i_gl, VAR_4);

 if (VAR_6->ea_split)
  VAR_5 = FUNC_3(VAR_5);

 FUNC_4(VAR_3, VAR_5, VAR_7);

 if (VAR_6->es_el)
  FUNC_2(VAR_3, VAR_6->es_el);

 VAR_9 = FUNC_6(VAR_3, &VAR_8);
 if (VAR_9)
  goto out;
 VAR_3->i_inode.i_ctime = VAR_0;
 FUNC_7(VAR_3->i_gl, VAR_8);
 FUNC_5(VAR_3, VAR_8->b_data);
 FUNC_1(VAR_8);
out:
 FUNC_9(FUNC_0(&VAR_3->i_inode));
 return VAR_9;
}
