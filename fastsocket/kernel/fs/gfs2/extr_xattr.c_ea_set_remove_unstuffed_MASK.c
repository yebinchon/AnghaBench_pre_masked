
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_inode; } ;
struct gfs2_ea_location {scalar_t__ el_ea; scalar_t__ el_prev; int el_bh; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gfs2_inode*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct gfs2_inode *VAR_0,
       struct gfs2_ea_location *VAR_1)
{
 if (VAR_1->el_prev && FUNC_0(VAR_1->el_prev) != VAR_1->el_ea) {
  VAR_1->el_prev = FUNC_0(VAR_1->el_prev);
  FUNC_3(FUNC_1(&VAR_0->i_inode),
         FUNC_0(VAR_1->el_prev) == VAR_1->el_ea);
 }

 return FUNC_2(VAR_0, VAR_1->el_bh, VAR_1->el_ea, VAR_1->el_prev, 0);
}
