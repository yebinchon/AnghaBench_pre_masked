
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {struct block_device* bdev; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*,int) ;

__attribute__((used)) static void FUNC_3(struct md_rdev *VAR_2)
{
 struct block_device *VAR_3 = VAR_2->bdev;
 VAR_2->bdev = ((void*)0);
 if (!VAR_3)
  FUNC_0();
 FUNC_1(VAR_3);
 FUNC_2(VAR_3, VAR_0|VAR_1);
}
