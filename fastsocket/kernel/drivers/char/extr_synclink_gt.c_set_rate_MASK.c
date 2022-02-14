
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slgt_info {unsigned int base_clock; } ;


 int VAR_0 ;
 int FUNC_0 (struct slgt_info*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct slgt_info *VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4 = VAR_1->base_clock;







 if (VAR_2) {
  VAR_3 = VAR_4/VAR_2;
  if (!(VAR_4 % VAR_2) && VAR_3)
   VAR_3--;
  FUNC_0(VAR_1, VAR_0, (unsigned short)VAR_3);
 }
}
