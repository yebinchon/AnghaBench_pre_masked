
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
typedef int secno ;


 int FUNC_0 (struct quad_buffer_head*) ;
 unsigned int* FUNC_1 (struct super_block*,int,struct quad_buffer_head*,char*) ;
 int FUNC_2 (struct quad_buffer_head*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0, secno VAR_1)
{
 struct quad_buffer_head VAR_2;
 unsigned *VAR_3;
 FUNC_3(VAR_0);
 if (!(VAR_3 = FUNC_1(VAR_0, VAR_1 >> 14, &VAR_2, "aip"))) goto end;
 if (VAR_3[(VAR_1 & 0x3fff) >> 5] & (1 << (VAR_1 & 0x1f))) {
  VAR_3[(VAR_1 & 0x3fff) >> 5] &= ~(1 << (VAR_1 & 0x1f));
  FUNC_2(&VAR_2);
  FUNC_0(&VAR_2);
  FUNC_4(VAR_0);
  return 1;
 }
 FUNC_0(&VAR_2);
 end:
 FUNC_4(VAR_0);
 return 0;
}
