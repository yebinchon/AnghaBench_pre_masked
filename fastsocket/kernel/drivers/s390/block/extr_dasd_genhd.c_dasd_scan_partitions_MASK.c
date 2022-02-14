
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_block {struct block_device* bdev; int gdp; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct block_device* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct block_device*,int ) ;
 int FUNC_2 (struct block_device*,int ,int ) ;

int FUNC_3(struct dasd_block *VAR_3)
{
 struct block_device *VAR_4;

 VAR_4 = FUNC_0(VAR_3->gdp, 0);
 if (!VAR_4 || FUNC_1(VAR_4, VAR_2) < 0)
  return -VAR_1;




 FUNC_2(VAR_4, VAR_0, 0);
 VAR_3->bdev = VAR_4;
 return 0;
}
