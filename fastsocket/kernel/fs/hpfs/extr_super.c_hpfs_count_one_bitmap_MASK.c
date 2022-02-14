
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
typedef int secno ;


 int FUNC_0 (struct quad_buffer_head*) ;
 unsigned int* FUNC_1 (struct super_block*,int ,struct quad_buffer_head*,int) ;

unsigned FUNC_2(struct super_block *VAR_0, secno VAR_1)
{
 struct quad_buffer_head VAR_2;
 unsigned *VAR_3;
 unsigned VAR_4, VAR_5;
 if (!(VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_2, 4))) return 0;
 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < 2048 / sizeof(unsigned); VAR_4++) {
  unsigned VAR_6;
  if (!VAR_3[VAR_4]) continue;
  for (VAR_6 = VAR_3[VAR_4]; VAR_6; VAR_6>>=1) VAR_5 += VAR_6 & 1;
 }
 FUNC_0(&VAR_2);
 return VAR_5;
}
