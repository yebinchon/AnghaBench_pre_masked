
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct buffer_head* FUNC_0 (struct super_block*,int) ;

int FUNC_1(struct super_block *VAR_3, struct buffer_head **VAR_4)
{

 *VAR_4 = FUNC_0(VAR_3, VAR_1 >> VAR_3->s_blocksize_bits);
 if (*VAR_4)
  return 0;


 *VAR_4 = FUNC_0(VAR_3, VAR_2 >> VAR_3->s_blocksize_bits);
 if (*VAR_4)
  return 0;

 return -VAR_0;
}
