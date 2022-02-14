
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_integrity {int sector_size; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct blk_integrity *VAR_0,
          unsigned int VAR_1)
{

 if (VAR_0->sector_size == 4096)
  return VAR_1 >>= 3;

 return VAR_1;
}
