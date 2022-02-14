
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ size; } ;
struct sst25l_flash {int lock; TYPE_2__* spi; TYPE_1__ mtd; } ;
struct mtd_info {int erasesize; } ;
struct erase_info {scalar_t__ addr; scalar_t__ len; int state; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct erase_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sst25l_flash*,int) ;
 int FUNC_5 (struct sst25l_flash*) ;
 struct sst25l_flash* FUNC_6 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_3, struct erase_info *VAR_4)
{
 struct sst25l_flash *VAR_5 = FUNC_6(VAR_3);
 uint32_t VAR_6, VAR_7;
 int VAR_8;


 if (VAR_4->addr + VAR_4->len > VAR_5->mtd.size)
  return -VAR_0;

 if ((uint32_t)VAR_4->len % VAR_3->erasesize)
  return -VAR_0;

 if ((uint32_t)VAR_4->addr % VAR_3->erasesize)
  return -VAR_0;

 VAR_6 = VAR_4->addr;
 VAR_7 = VAR_6 + VAR_4->len;

 FUNC_2(&VAR_5->lock);

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8) {
  FUNC_3(&VAR_5->lock);
  return VAR_8;
 }

 while (VAR_6 < VAR_7) {
  VAR_8 = FUNC_4(VAR_5, VAR_6);
  if (VAR_8) {
   FUNC_3(&VAR_5->lock);
   VAR_4->state = VAR_2;
   FUNC_0(&VAR_5->spi->dev, "Erase failed\n");
   return VAR_8;
  }

  VAR_6 += VAR_3->erasesize;
 }

 FUNC_3(&VAR_5->lock);

 VAR_4->state = VAR_1;
 FUNC_1(VAR_4);
 return 0;
}
