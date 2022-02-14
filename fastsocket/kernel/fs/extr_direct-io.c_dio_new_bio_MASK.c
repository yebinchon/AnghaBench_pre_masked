
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_submit {int blkbits; int pages_in_io; scalar_t__ boundary; } ;
struct dio {int dummy; } ;
struct buffer_head {int b_bdev; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dio*,struct dio_submit*,int ,int,int) ;
 int FUNC_3 (struct dio*,struct dio_submit*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static inline int FUNC_5(struct dio *VAR_1, struct dio_submit *VAR_2,
  sector_t VAR_3, struct buffer_head *VAR_4)
{
 sector_t VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 if (VAR_6)
  goto out;
 VAR_5 = VAR_3 << (VAR_2->blkbits - 9);
 VAR_7 = FUNC_4(VAR_2->pages_in_io, FUNC_1(VAR_4->b_bdev));
 VAR_7 = FUNC_4(VAR_7, VAR_0);
 FUNC_0(VAR_7 <= 0);
 FUNC_2(VAR_1, VAR_2, VAR_4->b_bdev, VAR_5, VAR_7);
 VAR_2->boundary = 0;
out:
 return VAR_6;
}
