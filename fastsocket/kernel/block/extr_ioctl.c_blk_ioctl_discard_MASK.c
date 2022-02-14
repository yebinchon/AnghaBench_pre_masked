
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct block_device {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct block_device*,int,int,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_2, uint64_t VAR_3,
        uint64_t VAR_4)
{
 if (VAR_3 & 511)
  return -VAR_0;
 if (VAR_4 & 511)
  return -VAR_0;
 VAR_3 >>= 9;
 VAR_4 >>= 9;

 if (VAR_3 + VAR_4 > (FUNC_1(VAR_2->bd_inode) >> 9))
  return -VAR_0;
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1, 0);
}
