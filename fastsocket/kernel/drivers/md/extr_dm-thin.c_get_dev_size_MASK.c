
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_inode; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static sector_t FUNC_1(struct block_device *VAR_1)
{
 return FUNC_0(VAR_1->bd_inode) >> VAR_0;
}
