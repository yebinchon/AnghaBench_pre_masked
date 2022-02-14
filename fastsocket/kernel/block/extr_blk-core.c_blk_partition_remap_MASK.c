
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {scalar_t__ start_sect; } ;
struct block_device {int bd_dev; struct block_device* bd_contains; struct hd_struct* bd_part; } ;
struct bio {scalar_t__ bi_sector; struct block_device* bi_bdev; } ;


 int FUNC_0 (struct block_device*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,struct bio*,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct bio *VAR_0)
{
 struct block_device *VAR_1 = VAR_0->bi_bdev;

 if (FUNC_1(VAR_0) && VAR_1 != VAR_1->bd_contains) {
  struct hd_struct *VAR_2 = VAR_1->bd_part;

  VAR_0->bi_sector += VAR_2->start_sect;
  VAR_0->bi_bdev = VAR_1->bd_contains;

  FUNC_2(FUNC_0(VAR_0->bi_bdev), VAR_0,
        VAR_1->bd_dev,
        VAR_0->bi_sector - VAR_2->start_sect);
 }
}
