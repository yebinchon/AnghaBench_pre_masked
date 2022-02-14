
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 struct block_device* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*,void*) ;
 scalar_t__ FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct block_device*,int) ;
 int FUNC_5 (struct block_device*,int) ;
 struct block_device* FUNC_6 (char const*) ;

struct block_device *FUNC_7(const char *VAR_2, fmode_t VAR_3, void *VAR_4)
{
 struct block_device *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_6(VAR_2);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_6 = FUNC_4(VAR_5, VAR_3);
 if (VAR_6)
  return FUNC_0(VAR_6);
 VAR_6 = -VAR_0;
 if ((VAR_3 & VAR_1) && FUNC_3(VAR_5))
  goto blkdev_put;
 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (VAR_6)
  goto blkdev_put;

 return VAR_5;

blkdev_put:
 FUNC_5(VAR_5, VAR_3);
 return FUNC_0(VAR_6);
}
