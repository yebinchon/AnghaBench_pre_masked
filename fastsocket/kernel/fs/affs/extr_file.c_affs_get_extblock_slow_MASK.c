
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_6__ {int i_ext_last; int i_extcnt; int i_lc_shift; int i_lc_mask; int i_lc_size; int* i_lc; struct buffer_head* i_ext_bh; TYPE_1__* i_ac; } ;
struct TYPE_5__ {int extension; } ;
struct TYPE_4__ {int ext; int key; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct super_block*,struct buffer_head*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct buffer_head* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct inode*,struct buffer_head*,int) ;
 struct buffer_head* FUNC_6 (struct super_block*,int) ;
 int FUNC_7 (struct buffer_head*) ;
 struct buffer_head* FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *
FUNC_12(struct inode *VAR_2, u32 VAR_3)
{
 struct super_block *VAR_4 = VAR_2->i_sb;
 struct buffer_head *VAR_5;
 u32 VAR_6;
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11;

 if (VAR_3 == FUNC_0(VAR_2)->i_ext_last + 1) {

  VAR_5 = FUNC_0(VAR_2)->i_ext_bh;
  VAR_6 = FUNC_10(FUNC_1(VAR_4, VAR_5)->extension);
  if (VAR_3 < FUNC_0(VAR_2)->i_extcnt)
   goto read_ext;
  if (VAR_3 > FUNC_0(VAR_2)->i_extcnt)
   FUNC_2();
  VAR_5 = FUNC_5(VAR_2, VAR_5, VAR_3);
  if (FUNC_4(VAR_5))
   return VAR_5;
  goto store_ext;
 }

 if (VAR_3 == 0) {

  VAR_6 = VAR_2->i_ino;
  goto read_ext;
 }

 if (VAR_3 >= FUNC_0(VAR_2)->i_extcnt) {
  struct buffer_head *VAR_12;


  if (VAR_3 > FUNC_0(VAR_2)->i_extcnt)
   FUNC_2();


  VAR_12 = FUNC_8(VAR_2, VAR_3 - 1);
  if (FUNC_4(VAR_12))
   return VAR_12;
  VAR_5 = FUNC_5(VAR_2, VAR_12, VAR_3);
  FUNC_7(VAR_12);
  if (FUNC_4(VAR_5))
   return VAR_5;
  goto store_ext;
 }

again:

 VAR_7 = VAR_3 >> FUNC_0(VAR_2)->i_lc_shift;
 VAR_8 = VAR_3 & FUNC_0(VAR_2)->i_lc_mask;

 if (VAR_7 >= FUNC_0(VAR_2)->i_lc_size) {
  int VAR_13;

  VAR_13 = FUNC_9(VAR_2, VAR_7);
  if (VAR_13)
   return FUNC_3(VAR_13);
  goto again;
 }


 if (!VAR_8) {
  VAR_6 = FUNC_0(VAR_2)->i_lc[VAR_7];
  goto read_ext;
 }


 VAR_9 = (VAR_3 - VAR_7 - 1) & VAR_0;
 if (FUNC_0(VAR_2)->i_ac[VAR_9].ext == VAR_3) {
  VAR_6 = FUNC_0(VAR_2)->i_ac[VAR_9].key;
  goto read_ext;
 }


 VAR_10 = VAR_3;
 VAR_11 = VAR_9;
 while (--VAR_10, --VAR_8 > 0) {
  VAR_11 = (VAR_11 - 1) & VAR_0;
  if (FUNC_0(VAR_2)->i_ac[VAR_11].ext == VAR_10) {
   VAR_6 = FUNC_0(VAR_2)->i_ac[VAR_11].key;
   goto find_ext;
  }
 }


 VAR_6 = FUNC_0(VAR_2)->i_lc[VAR_7];
find_ext:


 do {
  VAR_5 = FUNC_6(VAR_4, VAR_6);
  if (!VAR_5)
   goto err_bread;
  VAR_6 = FUNC_10(FUNC_1(VAR_4, VAR_5)->extension);
  FUNC_7(VAR_5);
  VAR_10++;
 } while (VAR_10 < VAR_3);




 FUNC_0(VAR_2)->i_ac[VAR_9].ext = VAR_3;
 FUNC_0(VAR_2)->i_ac[VAR_9].key = VAR_6;

read_ext:


 VAR_5 = FUNC_6(VAR_4, VAR_6);
 if (!VAR_5)
  goto err_bread;


store_ext:

 FUNC_7(FUNC_0(VAR_2)->i_ext_bh);
 FUNC_0(VAR_2)->i_ext_last = VAR_3;
 FUNC_0(VAR_2)->i_ext_bh = VAR_5;
 FUNC_11(VAR_5);

 return VAR_5;

err_bread:
 FUNC_7(VAR_5);
 return FUNC_3(-VAR_1);
}
