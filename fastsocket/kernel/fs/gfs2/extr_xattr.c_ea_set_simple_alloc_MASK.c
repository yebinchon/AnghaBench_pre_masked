
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_gl; } ;
struct gfs2_ea_request {int dummy; } ;
struct gfs2_ea_header {int dummy; } ;
struct ea_set {scalar_t__ es_el; scalar_t__ ea_split; int es_bh; struct gfs2_ea_header* es_ea; } ;


 int FUNC_0 (struct gfs2_inode*,scalar_t__) ;
 struct gfs2_ea_header* FUNC_1 (struct gfs2_ea_header*) ;
 int FUNC_2 (struct gfs2_inode*,struct gfs2_ea_header*,struct gfs2_ea_request*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gfs2_inode *VAR_0,
          struct gfs2_ea_request *VAR_1, void *VAR_2)
{
 struct ea_set *VAR_3 = VAR_2;
 struct gfs2_ea_header *VAR_4 = VAR_3->es_ea;
 int VAR_5;

 FUNC_3(VAR_0->i_gl, VAR_3->es_bh);

 if (VAR_3->ea_split)
  VAR_4 = FUNC_1(VAR_4);

 VAR_5 = FUNC_2(VAR_0, VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->es_el)
  FUNC_0(VAR_0, VAR_3->es_el);

 return 0;
}
