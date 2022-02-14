
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_integrity {unsigned short tuple_size; } ;



__attribute__((used)) static inline unsigned short FUNC_0(struct blk_integrity *VAR_0)
{
 if (VAR_0)
  return VAR_0->tuple_size;

 return 0;
}
