
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dio_submit {scalar_t__ cur_page_fs_offset; scalar_t__ logical_offset_in_bio; scalar_t__ final_block_in_bio; scalar_t__ cur_page_block; TYPE_1__* bio; scalar_t__ boundary; } ;
struct dio {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ bi_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dio_submit*) ;
 int FUNC_2 (struct dio*,struct dio_submit*) ;
 int FUNC_3 (struct dio*,struct dio_submit*,scalar_t__,struct buffer_head*) ;

__attribute__((used)) static inline int FUNC_4(struct dio *VAR_0, struct dio_submit *VAR_1,
  struct buffer_head *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->bio) {
  loff_t VAR_4 = VAR_1->cur_page_fs_offset;
  loff_t VAR_5 = VAR_1->logical_offset_in_bio +
   VAR_1->bio->bi_size;
  if (VAR_1->final_block_in_bio != VAR_1->cur_page_block ||
      VAR_4 != VAR_5)
   FUNC_2(VAR_0, VAR_1);




  else if (VAR_1->boundary)
   FUNC_2(VAR_0, VAR_1);
 }

 if (VAR_1->bio == ((void*)0)) {
  VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_1->cur_page_block, VAR_2);
  if (VAR_3)
   goto out;
 }

 if (FUNC_1(VAR_1) != 0) {
  FUNC_2(VAR_0, VAR_1);
  VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_1->cur_page_block, VAR_2);
  if (VAR_3 == 0) {
   VAR_3 = FUNC_1(VAR_1);
   FUNC_0(VAR_3 != 0);
  }
 }
out:
 return VAR_3;
}
