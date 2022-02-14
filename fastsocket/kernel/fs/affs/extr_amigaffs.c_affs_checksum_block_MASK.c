
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct super_block {int s_blocksize; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;

u32
FUNC_1(struct super_block *VAR_0, struct buffer_head *VAR_1)
{
 __be32 *VAR_2 = (__be32 *)VAR_1->b_data;
 u32 VAR_3;
 int VAR_4;

 VAR_3 = 0;
 for (VAR_4 = VAR_0->s_blocksize / sizeof(__be32); VAR_4 > 0; VAR_4--)
  VAR_3 += FUNC_0(*VAR_2++);
 return VAR_3;
}
