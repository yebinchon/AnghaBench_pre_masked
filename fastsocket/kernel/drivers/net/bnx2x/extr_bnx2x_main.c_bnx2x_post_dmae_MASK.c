
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dmae_command {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*,int,int) ;
 int* VAR_1 ;

void FUNC_1(struct bnx2x *VAR_2, struct dmae_command *VAR_3, int VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_5 = (VAR_0 + sizeof(struct dmae_command) * VAR_4);
 for (VAR_6 = 0; VAR_6 < (sizeof(struct dmae_command)/4); VAR_6++) {
  FUNC_0(VAR_2, VAR_5 + VAR_6*4, *(((u32 *)VAR_3) + VAR_6));
 }
 FUNC_0(VAR_2, VAR_1[VAR_4], 1);
}
