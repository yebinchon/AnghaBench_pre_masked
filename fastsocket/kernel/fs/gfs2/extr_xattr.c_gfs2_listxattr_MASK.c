
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {scalar_t__ i_eattr; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_ea_request {char* er_data; size_t er_data_len; } ;
struct ea_list {int ei_size; struct gfs2_ea_request* ei_er; } ;
struct dentry {int d_inode; } ;
typedef int ssize_t ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gfs2_inode*,int ,struct ea_list*) ;
 int VAR_2 ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_ea_request*,int ,int) ;

ssize_t FUNC_5(struct dentry *VAR_3, char *VAR_4, size_t VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_3->d_inode);
 struct gfs2_ea_request VAR_7;
 struct gfs2_holder VAR_8;
 int VAR_9;

 FUNC_4(&VAR_7, 0, sizeof(struct gfs2_ea_request));
 if (VAR_5) {
  VAR_7.er_data = VAR_4;
  VAR_7.er_data_len = VAR_5;
 }

 VAR_9 = FUNC_3(VAR_6->i_gl, VAR_1, VAR_0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_6->i_eattr) {
  struct ea_list VAR_10 = { .ei_er = &VAR_7, .ei_size = 0 };

  VAR_9 = FUNC_1(VAR_6, VAR_2, &VAR_10);
  if (!VAR_9)
   VAR_9 = VAR_10.ei_size;
 }

 FUNC_2(&VAR_8);

 return VAR_9;
}
