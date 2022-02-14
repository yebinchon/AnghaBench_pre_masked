
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_block_manager {int bufio; scalar_t__ read_only; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct dm_block_manager *VAR_1)
{
 if (VAR_1->read_only)
  return -VAR_0;

 return FUNC_0(VAR_1->bufio);
}
