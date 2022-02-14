
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
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ,int ,int ,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_sbd*,struct buffer_head*) ;
 scalar_t__ FUNC_8 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 int FUNC_9 (int ,struct buffer_head*) ;
 int FUNC_10 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 struct buffer_head** FUNC_12 (unsigned int,int,int ) ;
 int FUNC_13 (struct buffer_head**) ;
 int FUNC_14 (scalar_t__,char*,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct gfs2_inode *VAR_5,
      struct gfs2_ea_header *VAR_6, char *VAR_7)
{
 struct gfs2_sbd *VAR_8 = FUNC_3(&VAR_5->i_inode);
 struct buffer_head **VAR_9;
 unsigned int VAR_10 = FUNC_2(VAR_6);
 unsigned int VAR_11 = FUNC_0(VAR_10, VAR_8->sd_jbsize);
 __be64 *VAR_12 = FUNC_1(VAR_6);
 unsigned int VAR_13;
 int VAR_14;

 VAR_9 = FUNC_12(VAR_11, sizeof(struct buffer_head *), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_14 = FUNC_10(VAR_8, VAR_11 + VAR_4, 0);
 if (VAR_14)
  goto out;

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_14 = FUNC_6(VAR_5->i_gl, FUNC_4(*VAR_12), 0,
           VAR_9 + VAR_13);
  if (VAR_14) {
   while (VAR_13--)
    FUNC_5(VAR_9[VAR_13]);
   goto fail;
  }
  VAR_12++;
 }

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_14 = FUNC_7(VAR_8, VAR_9[VAR_13]);
  if (VAR_14) {
   for (; VAR_13 < VAR_11; VAR_13++)
    FUNC_5(VAR_9[VAR_13]);
   goto fail;
  }
  if (FUNC_8(VAR_8, VAR_9[VAR_13], VAR_3)) {
   for (; VAR_13 < VAR_11; VAR_13++)
    FUNC_5(VAR_9[VAR_13]);
   VAR_14 = -VAR_0;
   goto fail;
  }

  FUNC_9(VAR_5->i_gl, VAR_9[VAR_13]);

  FUNC_14(VAR_9[VAR_13]->b_data + sizeof(struct gfs2_meta_header), VAR_7,
         (VAR_8->sd_jbsize > VAR_10) ? VAR_10 : VAR_8->sd_jbsize);

  VAR_10 -= VAR_8->sd_jbsize;
  VAR_7 += VAR_8->sd_jbsize;

  FUNC_5(VAR_9[VAR_13]);
 }

out:
 FUNC_13(VAR_9);
 return VAR_14;

fail:
 FUNC_11(VAR_8);
 FUNC_13(VAR_9);
 return VAR_14;
}
