
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int i_ctime; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; } ;
struct gfs2_ea_location {struct buffer_head* el_bh; struct gfs2_ea_header* el_prev; struct gfs2_ea_header* el_ea; } ;
struct gfs2_ea_header {int ea_type; int ea_flags; int ea_rec_len; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct gfs2_ea_header*) ;
 scalar_t__ FUNC_1 (struct gfs2_ea_header*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct gfs2_inode*,int ) ;
 int FUNC_6 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_7 (int ,struct buffer_head*) ;
 int FUNC_8 (int ,scalar_t__,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct gfs2_inode *VAR_5, struct gfs2_ea_location *VAR_6)
{
 struct gfs2_ea_header *VAR_7 = VAR_6->el_ea;
 struct gfs2_ea_header *VAR_8 = VAR_6->el_prev;
 struct buffer_head *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_8(FUNC_2(&VAR_5->i_inode), VAR_3 + VAR_4, 0);
 if (VAR_10)
  return VAR_10;

 FUNC_7(VAR_5->i_gl, VAR_6->el_bh);

 if (VAR_8) {
  u32 VAR_11;

  VAR_11 = FUNC_1(VAR_8) + FUNC_1(VAR_7);
  VAR_8->ea_rec_len = FUNC_4(VAR_11);

  if (FUNC_0(VAR_7))
   VAR_8->ea_flags |= VAR_1;
 } else {
  VAR_7->ea_type = VAR_2;
 }

 VAR_10 = FUNC_6(VAR_5, &VAR_9);
 if (!VAR_10) {
  VAR_5->i_inode.i_ctime = VAR_0;
  FUNC_7(VAR_5->i_gl, VAR_9);
  FUNC_5(VAR_5, VAR_9->b_data);
  FUNC_3(VAR_9);
 }

 FUNC_9(FUNC_2(&VAR_5->i_inode));

 return VAR_10;
}
