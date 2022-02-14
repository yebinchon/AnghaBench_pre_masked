
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext2_reserve_window {scalar_t__ _rsv_start; scalar_t__ _rsv_end; } ;
struct buffer_head {int b_data; } ;
typedef scalar_t__ ext2_grpblk_t ;
typedef scalar_t__ ext2_fsblk_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct super_block*,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,struct buffer_head*,scalar_t__) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(struct super_block *VAR_0, int VAR_1,
   struct buffer_head *VAR_2, ext2_grpblk_t VAR_3,
   unsigned long *VAR_4,
   struct ext2_reserve_window *VAR_5)
{
 ext2_fsblk_t VAR_6;
        ext2_grpblk_t VAR_7, VAR_8;
 unsigned long VAR_9 = 0;


 if (VAR_5) {
  VAR_6 = FUNC_3(VAR_0, VAR_1);
  if (VAR_5->_rsv_start >= VAR_6)
   VAR_7 = VAR_5->_rsv_start - VAR_6;
  else

   VAR_7 = 0;
  VAR_8 = VAR_5->_rsv_end - VAR_6 + 1;
  if (VAR_8 > FUNC_1(VAR_0))

   VAR_8 = FUNC_1(VAR_0);
  if ((VAR_7 <= VAR_3) && (VAR_3 < VAR_8))
   VAR_7 = VAR_3;
  else
   VAR_3 = -1;
 } else {
  if (VAR_3 > 0)
   VAR_7 = VAR_3;
  else
   VAR_7 = 0;
  VAR_8 = FUNC_1(VAR_0);
 }

 FUNC_0(VAR_7 > FUNC_1(VAR_0));

repeat:
 if (VAR_3 < 0) {
  VAR_3 = FUNC_6(VAR_7, VAR_2, VAR_8);
  if (VAR_3 < 0)
   goto fail_access;
  if (!VAR_5) {
   int VAR_10;

   for (VAR_10 = 0; VAR_10 < 7 && VAR_3 > VAR_7 &&
     !FUNC_5(VAR_3 - 1,
            VAR_2->b_data);
          VAR_10++, VAR_3--)
    ;
  }
 }
 VAR_7 = VAR_3;

 if (FUNC_4(FUNC_7(FUNC_2(VAR_0), VAR_1), VAR_3,
              VAR_2->b_data)) {




  VAR_7++;
  VAR_3++;
  if (VAR_7 >= VAR_8)
   goto fail_access;
  goto repeat;
 }
 VAR_9++;
 VAR_3++;
 while (VAR_9 < *VAR_4 && VAR_3 < VAR_8
  && !FUNC_4(FUNC_7(FUNC_2(VAR_0), VAR_1),
     VAR_3, VAR_2->b_data)) {
  VAR_9++;
  VAR_3++;
 }
 *VAR_4 = VAR_9;
 return VAR_3 - VAR_9;
fail_access:
 *VAR_4 = VAR_9;
 return -1;
}
