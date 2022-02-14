
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_blkbits; scalar_t__ i_size; } ;
struct gfs2_inode {int i_gl; } ;
struct buffer_head {unsigned int b_size; int b_blocknr; int b_state; } ;
typedef unsigned int sector_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*,unsigned int,struct buffer_head*,int) ;
 scalar_t__ FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_7 (int ,struct buffer_head*) ;
 int FUNC_8 (struct gfs2_inode*,int *) ;
 int FUNC_9 (struct inode*,scalar_t__) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct buffer_head*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4,
      int VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_2);
 struct buffer_head *VAR_7;
 int VAR_8;
 unsigned int VAR_9;
 loff_t VAR_10 = VAR_4;
 sector_t VAR_11 = VAR_3 >> VAR_2->i_blkbits;

 VAR_8 = FUNC_6(VAR_6, &VAR_7);
 if (FUNC_12(VAR_8))
  return VAR_8;

 FUNC_7(VAR_6->i_gl, VAR_7);

 if (FUNC_5(VAR_6)) {
  VAR_8 = FUNC_8(VAR_6, ((void*)0));
  if (FUNC_12(VAR_8))
   goto out;
 }

 while (VAR_4) {
  struct buffer_head VAR_12 = { .b_state = 0, .b_blocknr = 0 };
  VAR_12.b_size = VAR_4;
  FUNC_11(&VAR_12);

  VAR_8 = FUNC_4(VAR_2, VAR_11, &VAR_12, 1);
  if (FUNC_12(VAR_8))
   goto out;
  VAR_4 -= VAR_12.b_size;
  VAR_9 = VAR_12.b_size >> VAR_2->i_blkbits;
  VAR_11 += VAR_9;
  if (!FUNC_2(&VAR_12))
   continue;
  if (FUNC_12(!FUNC_3(&VAR_12))) {
   VAR_8 = -VAR_0;
   goto out;
  }
 }
 if (VAR_3 + VAR_10 > VAR_2->i_size && !(VAR_5 & VAR_1))
  FUNC_9(VAR_2, VAR_3 + VAR_10);

 FUNC_10(VAR_2);

out:
 FUNC_1(VAR_7);
 return VAR_8;
}
