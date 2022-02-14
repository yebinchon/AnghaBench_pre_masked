
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_submit {int cur_page_len; scalar_t__ cur_page_offset; int blkbits; scalar_t__ cur_page_block; scalar_t__ final_block_in_bio; int cur_page; int pages_in_io; int bio; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct dio_submit *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->bio, VAR_1->cur_page,
   VAR_1->cur_page_len, VAR_1->cur_page_offset);
 if (VAR_2 == VAR_1->cur_page_len) {



  if ((VAR_1->cur_page_len + VAR_1->cur_page_offset) == VAR_0)
   VAR_1->pages_in_io--;
  FUNC_1(VAR_1->cur_page);
  VAR_1->final_block_in_bio = VAR_1->cur_page_block +
   (VAR_1->cur_page_len >> VAR_1->blkbits);
  VAR_2 = 0;
 } else {
  VAR_2 = 1;
 }
 return VAR_2;
}
