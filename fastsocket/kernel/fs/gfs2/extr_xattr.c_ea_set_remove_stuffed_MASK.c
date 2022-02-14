
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gfs2_inode {int i_inode; int i_gl; } ;
struct gfs2_ea_location {int el_bh; struct gfs2_ea_header* el_prev; struct gfs2_ea_header* el_ea; } ;
struct gfs2_ea_header {int ea_flags; int ea_rec_len; int ea_type; } ;


 struct gfs2_ea_header* FUNC_0 (struct gfs2_ea_header*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct gfs2_ea_header*) ;
 int FUNC_2 (struct gfs2_ea_header*) ;
 scalar_t__ FUNC_3 (struct gfs2_ea_header*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct gfs2_inode *VAR_2,
      struct gfs2_ea_location *VAR_3)
{
 struct gfs2_ea_header *VAR_4 = VAR_3->el_ea;
 struct gfs2_ea_header *VAR_5 = VAR_3->el_prev;
 u32 VAR_6;

 FUNC_7(VAR_2->i_gl, VAR_3->el_bh);

 if (!VAR_5 || !FUNC_2(VAR_4)) {
  VAR_4->ea_type = VAR_1;
  return;
 } else if (FUNC_0(VAR_5) != VAR_4) {
  VAR_5 = FUNC_0(VAR_5);
  FUNC_6(FUNC_4(&VAR_2->i_inode), FUNC_0(VAR_5) == VAR_4);
 }

 VAR_6 = FUNC_3(VAR_5) + FUNC_3(VAR_4);
 VAR_5->ea_rec_len = FUNC_5(VAR_6);

 if (FUNC_1(VAR_4))
  VAR_5->ea_flags |= VAR_0;
}
