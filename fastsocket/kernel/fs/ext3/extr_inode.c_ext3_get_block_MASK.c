
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_blkbits; int i_sb; } ;
struct buffer_head {unsigned int b_size; } ;
typedef int sector_t ;
typedef int handle_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct inode*,int ,unsigned int,struct buffer_head*,int) ;
 int * FUNC_4 () ;
 int * FUNC_5 (struct inode*,scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, sector_t VAR_3,
   struct buffer_head *VAR_4, int VAR_5)
{
 handle_t *VAR_6 = FUNC_4();
 int VAR_7 = 0, VAR_8 = 0;
 unsigned VAR_9 = VAR_4->b_size >> VAR_2->i_blkbits;

 if (VAR_5 && !VAR_6) {
  if (VAR_9 > VAR_1)
   VAR_9 = VAR_1;
  VAR_6 = FUNC_5(VAR_2, VAR_0 +
    2 * FUNC_0(VAR_2->i_sb));
  if (FUNC_1(VAR_6)) {
   VAR_7 = FUNC_2(VAR_6);
   goto out;
  }
  VAR_8 = 1;
 }

 VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_3,
     VAR_9, VAR_4, VAR_5);
 if (VAR_7 > 0) {
  VAR_4->b_size = (VAR_7 << VAR_2->i_blkbits);
  VAR_7 = 0;
 }
 if (VAR_8)
  FUNC_6(VAR_6);
out:
 return VAR_7;
}
