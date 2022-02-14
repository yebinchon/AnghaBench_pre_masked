
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int b_size; int b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct buffer_head* FUNC_4 (struct super_block*,unsigned long) ;
 struct buffer_head* FUNC_5 (struct super_block*,unsigned long) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_1, unsigned long VAR_2,
     struct super_block *VAR_3)
{
 struct buffer_head *VAR_4, *VAR_5;

 VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_5(VAR_3, VAR_2);
 FUNC_3(VAR_5->b_data, VAR_4->b_data, VAR_4->b_size);
 FUNC_2(VAR_5);
 FUNC_0(VAR_4);
 FUNC_1(VAR_5);
 return 0;
}
