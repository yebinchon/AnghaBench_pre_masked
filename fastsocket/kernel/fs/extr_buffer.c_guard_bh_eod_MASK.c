
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct buffer_head {int b_page; scalar_t__ b_size; } ;
struct bio {unsigned int bi_sector; unsigned int bi_size; TYPE_2__* bi_io_vec; TYPE_1__* bi_bdev; } ;
typedef unsigned int sector_t ;
struct TYPE_4__ {unsigned int bv_len; } ;
struct TYPE_3__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(int VAR_3, struct bio *VAR_4, struct buffer_head *VAR_5)
{
 sector_t VAR_6;
 unsigned VAR_7;

 VAR_6 = FUNC_2(VAR_4->bi_bdev->bd_inode) >> 9;
 if (!VAR_6)
  return;






 if (FUNC_7(VAR_4->bi_sector >= VAR_6))
  return;

 VAR_6 -= VAR_4->bi_sector;
 VAR_7 = VAR_4->bi_size;
 if (FUNC_5((VAR_7 >> 9) <= VAR_6))
  return;


 VAR_7 = VAR_6 << 9;


 VAR_4->bi_size = VAR_7;
 VAR_4->bi_io_vec[0].bv_len = VAR_7;


 if ((VAR_3 & VAR_2) == VAR_1) {
  void *VAR_8 = FUNC_3(VAR_5->b_page, VAR_0);
  FUNC_6(VAR_8 + FUNC_0(VAR_5) + VAR_7, 0, VAR_5->b_size - VAR_7);
  FUNC_4(VAR_8, VAR_0);
  FUNC_1(VAR_5->b_page);
 }
}
