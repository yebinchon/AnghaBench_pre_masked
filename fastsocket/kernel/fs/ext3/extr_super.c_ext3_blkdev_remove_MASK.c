
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext3_sb_info {struct block_device* journal_bdev; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*) ;

__attribute__((used)) static int FUNC_1(struct ext3_sb_info *VAR_1)
{
 struct block_device *VAR_2;
 int VAR_3 = -VAR_0;

 VAR_2 = VAR_1->journal_bdev;
 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_2);
  VAR_1->journal_bdev = ((void*)0);
 }
 return VAR_3;
}
