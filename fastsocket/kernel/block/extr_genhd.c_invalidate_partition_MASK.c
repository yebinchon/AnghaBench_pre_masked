
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct block_device {int dummy; } ;


 int FUNC_0 (struct block_device*,int) ;
 struct block_device* FUNC_1 (struct gendisk*,int) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct block_device*) ;

int FUNC_4(struct gendisk *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 struct block_device *VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_3);
  VAR_2 = FUNC_0(VAR_3, 1);
  FUNC_2(VAR_3);
 }
 return VAR_2;
}
