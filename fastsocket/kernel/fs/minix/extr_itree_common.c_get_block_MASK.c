
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
struct TYPE_7__ {int bh; int key; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int,int*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ,int*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct inode*,int,int*,TYPE_1__*,int*) ;
 int FUNC_5 (struct buffer_head*,int ,int ) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct inode*,TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_8(struct inode * VAR_3, sector_t VAR_4,
   struct buffer_head *VAR_5, int VAR_6)
{
 int VAR_7 = -VAR_2;
 int VAR_8[VAR_0];
 Indirect VAR_9[VAR_0];
 Indirect *VAR_10;
 int VAR_11;
 int VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_8);

 if (VAR_12 == 0)
  goto out;

reread:
 VAR_10 = FUNC_4(VAR_3, VAR_12, VAR_8, VAR_9, &VAR_7);


 if (!VAR_10) {
got_it:
  FUNC_5(VAR_5, VAR_3->i_sb, FUNC_1(VAR_9[VAR_12-1].key));

  VAR_10 = VAR_9+VAR_12-1;
  goto cleanup;
 }


 if (!VAR_6 || VAR_7 == -VAR_2) {
cleanup:
  while (VAR_10 > VAR_9) {
   FUNC_3(VAR_10->bh);
   VAR_10--;
  }
out:
  return VAR_7;
 }






 if (VAR_7 == -VAR_1)
  goto changed;

 VAR_11 = (VAR_9 + VAR_12) - VAR_10;
 VAR_7 = FUNC_0(VAR_3, VAR_11, VAR_8+(VAR_10-VAR_9), VAR_10);
 if (VAR_7)
  goto cleanup;

 if (FUNC_7(VAR_3, VAR_9, VAR_10, VAR_11) < 0)
  goto changed;

 FUNC_6(VAR_5);
 goto got_it;

changed:
 while (VAR_10 > VAR_9) {
  FUNC_3(VAR_10->bh);
  VAR_10--;
 }
 goto reread;
}
