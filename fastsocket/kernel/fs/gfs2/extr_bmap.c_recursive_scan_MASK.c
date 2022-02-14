
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct strip_mine {int dummy; } ;
struct metapath {int* mp_list; } ;
struct gfs2_sbd {int sd_diptrs; int sd_inptrs; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_height; int i_gl; int i_inode; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __be64 ;


 struct gfs2_sbd* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct gfs2_inode*,struct buffer_head*,struct buffer_head*,int *,int *,unsigned int,struct strip_mine*) ;
 int FUNC_4 (struct gfs2_inode*,unsigned int,int ,struct buffer_head**) ;
 int FUNC_5 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_6 (int ,struct buffer_head*,int *) ;

__attribute__((used)) static int FUNC_7(struct gfs2_inode *VAR_0, struct buffer_head *VAR_1,
     struct metapath *VAR_2, unsigned int VAR_3,
     u64 VAR_4, int VAR_5, struct strip_mine *VAR_6)
{
 struct gfs2_sbd *VAR_7 = FUNC_0(&VAR_0->i_inode);
 struct buffer_head *VAR_8 = ((void*)0);
 __be64 *VAR_9, *VAR_10;
 u64 VAR_11;
 int VAR_12;
 int VAR_13 = sizeof(struct gfs2_meta_header);

 if (!VAR_3) {
  VAR_12 = FUNC_5(VAR_0, &VAR_8);
  if (VAR_12)
   return VAR_12;
  VAR_1 = VAR_8;

  VAR_9 = (__be64 *)(VAR_8->b_data + sizeof(struct gfs2_dinode)) + VAR_2->mp_list[0];
  VAR_10 = (__be64 *)(VAR_8->b_data + sizeof(struct gfs2_dinode)) + VAR_7->sd_diptrs;
 } else {
  VAR_12 = FUNC_4(VAR_0, VAR_3, VAR_4, &VAR_8);
  if (VAR_12)
   return VAR_12;

  VAR_9 = (__be64 *)(VAR_8->b_data + VAR_13) +
      (VAR_5 ? VAR_2->mp_list[VAR_3] : 0);

  VAR_10 = (__be64 *)(VAR_8->b_data + VAR_13) + VAR_7->sd_inptrs;
 }

 VAR_12 = FUNC_3(VAR_0, VAR_1, VAR_8, VAR_9, VAR_10, VAR_3, VAR_6);
 if (VAR_12)
  goto out;

 if (VAR_3 < VAR_0->i_height - 1) {

  FUNC_6(VAR_0->i_gl, VAR_8, VAR_9);

  for (; VAR_9 < VAR_10; VAR_9++, VAR_5 = 0) {
   if (!*VAR_9)
    continue;

   VAR_11 = FUNC_1(*VAR_9);

   VAR_12 = FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3 + 1, VAR_11,
            VAR_5, VAR_6);
   if (VAR_12)
    break;
  }
 }
out:
 FUNC_2(VAR_8);
 return VAR_12;
}
