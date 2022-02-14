
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_blkbits; TYPE_1__* i_sb; } ;
struct buffer_head {int b_size; } ;
typedef int sector_t ;
struct TYPE_5__ {int s_es; } ;
struct TYPE_4__ {int s_blocksize; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (int *,struct inode*,int ,int,struct buffer_head*,int ) ;
 int FUNC_7 (struct buffer_head*,TYPE_1__*,int ) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_0, sector_t VAR_1,
      struct buffer_head *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 sector_t VAR_5 = ~((sector_t) 0xffff);

 if (VAR_5 < FUNC_4(FUNC_1(VAR_0->i_sb)->s_es))
  VAR_5 = ~0;

 FUNC_0(VAR_3 == 0);
 FUNC_0(VAR_2->b_size != VAR_0->i_sb->s_blocksize);






 VAR_4 = FUNC_6(((void*)0), VAR_0, VAR_1, 1, VAR_2, 0);
 if ((VAR_4 == 0) && !FUNC_2(VAR_2)) {





  VAR_4 = FUNC_5(VAR_0, VAR_1);
  if (VAR_4)

   return VAR_4;

  FUNC_7(VAR_2, VAR_0->i_sb, VAR_5);
  FUNC_10(VAR_2);
  FUNC_8(VAR_2);
 } else if (VAR_4 > 0) {
  VAR_2->b_size = (VAR_4 << VAR_0->i_blkbits);
  if (FUNC_3(VAR_2)) {







   FUNC_10(VAR_2);
   FUNC_9(VAR_2);
  }
  VAR_4 = 0;
 }

 return VAR_4;
}
