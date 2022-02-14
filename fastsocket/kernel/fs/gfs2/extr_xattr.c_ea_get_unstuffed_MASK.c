
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {unsigned int sd_jbsize; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_gl; int i_inode; } ;
struct gfs2_ea_header {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __be64 ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (struct gfs2_ea_header*) ;
 unsigned int FUNC_2 (struct gfs2_ea_header*) ;
 int VAR_3 ;
 struct gfs2_sbd* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ,int ,int ,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_sbd*,struct buffer_head*) ;
 scalar_t__ FUNC_8 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 struct buffer_head** FUNC_9 (unsigned int,int,int ) ;
 int FUNC_10 (struct buffer_head**) ;
 int FUNC_11 (char*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct gfs2_inode *VAR_4, struct gfs2_ea_header *VAR_5,
       char *VAR_6)
{
 struct gfs2_sbd *VAR_7 = FUNC_3(&VAR_4->i_inode);
 struct buffer_head **VAR_8;
 unsigned int VAR_9 = FUNC_2(VAR_5);
 unsigned int VAR_10 = FUNC_0(VAR_9, VAR_7->sd_jbsize);
 __be64 *VAR_11 = FUNC_1(VAR_5);
 unsigned int VAR_12;
 int VAR_13 = 0;

 VAR_8 = FUNC_9(VAR_10, sizeof(struct buffer_head *), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_13 = FUNC_6(VAR_4->i_gl, FUNC_4(*VAR_11), 0,
           VAR_8 + VAR_12);
  if (VAR_13) {
   while (VAR_12--)
    FUNC_5(VAR_8[VAR_12]);
   goto out;
  }
  VAR_11++;
 }

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_13 = FUNC_7(VAR_7, VAR_8[VAR_12]);
  if (VAR_13) {
   for (; VAR_12 < VAR_10; VAR_12++)
    FUNC_5(VAR_8[VAR_12]);
   goto out;
  }
  if (FUNC_8(VAR_7, VAR_8[VAR_12], VAR_3)) {
   for (; VAR_12 < VAR_10; VAR_12++)
    FUNC_5(VAR_8[VAR_12]);
   VAR_13 = -VAR_0;
   goto out;
  }

  FUNC_11(VAR_6, VAR_8[VAR_12]->b_data + sizeof(struct gfs2_meta_header),
         (VAR_7->sd_jbsize > VAR_9) ? VAR_9 : VAR_7->sd_jbsize);

  VAR_9 -= VAR_7->sd_jbsize;
  VAR_6 += VAR_7->sd_jbsize;

  FUNC_5(VAR_8[VAR_12]);
 }

out:
 FUNC_10(VAR_8);
 return VAR_13;
}
