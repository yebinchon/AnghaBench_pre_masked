
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext3_reserve_window {scalar_t__ _rsv_start; scalar_t__ _rsv_end; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef scalar_t__ ext3_grpblk_t ;
typedef scalar_t__ ext3_fsblk_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct super_block*,int) ;
 scalar_t__ FUNC_5 (scalar_t__,struct buffer_head*) ;
 scalar_t__ FUNC_6 (scalar_t__,struct buffer_head*,scalar_t__) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static ext3_grpblk_t
FUNC_8(struct super_block *VAR_0, handle_t *VAR_1, int VAR_2,
   struct buffer_head *VAR_3, ext3_grpblk_t VAR_4,
   unsigned long *VAR_5, struct ext3_reserve_window *VAR_6)
{
 ext3_fsblk_t VAR_7;
 ext3_grpblk_t VAR_8, VAR_9;
 unsigned long VAR_10 = 0;


 if (VAR_6) {
  VAR_7 = FUNC_4(VAR_0, VAR_2);
  if (VAR_6->_rsv_start >= VAR_7)
   VAR_8 = VAR_6->_rsv_start - VAR_7;
  else

   VAR_8 = 0;
  VAR_9 = VAR_6->_rsv_end - VAR_7 + 1;
  if (VAR_9 > FUNC_1(VAR_0))

   VAR_9 = FUNC_1(VAR_0);
  if ((VAR_8 <= VAR_4) && (VAR_4 < VAR_9))
   VAR_8 = VAR_4;
  else
   VAR_4 = -1;
 } else {
  if (VAR_4 > 0)
   VAR_8 = VAR_4;
  else
   VAR_8 = 0;
  VAR_9 = FUNC_1(VAR_0);
 }

 FUNC_0(VAR_8 > FUNC_1(VAR_0));

repeat:
 if (VAR_4 < 0 || !FUNC_5(VAR_4, VAR_3)) {
  VAR_4 = FUNC_6(VAR_8, VAR_3, VAR_9);
  if (VAR_4 < 0)
   goto fail_access;
  if (!VAR_6) {
   int VAR_11;

   for (VAR_11 = 0; VAR_11 < 7 && VAR_4 > VAR_8 &&
     FUNC_5(VAR_4 - 1,
        VAR_3);
     VAR_11++, VAR_4--)
    ;
  }
 }
 VAR_8 = VAR_4;

 if (!FUNC_3(FUNC_7(FUNC_2(VAR_0), VAR_2),
  VAR_4, VAR_3)) {




  VAR_8++;
  VAR_4++;
  if (VAR_8 >= VAR_9)
   goto fail_access;
  goto repeat;
 }
 VAR_10++;
 VAR_4++;
 while (VAR_10 < *VAR_5 && VAR_4 < VAR_9
  && FUNC_5(VAR_4, VAR_3)
  && FUNC_3(FUNC_7(FUNC_2(VAR_0), VAR_2),
    VAR_4, VAR_3)) {
  VAR_10++;
  VAR_4++;
 }
 *VAR_5 = VAR_10;
 return VAR_4 - VAR_10;
fail_access:
 *VAR_5 = VAR_10;
 return -1;
}
