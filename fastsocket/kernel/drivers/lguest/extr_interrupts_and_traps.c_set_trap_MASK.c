
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lg_cpu {int dummy; } ;
struct desc_struct {int a; int b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct lg_cpu*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct lg_cpu *VAR_2, struct desc_struct *VAR_3,
       unsigned int VAR_4, u32 VAR_5, u32 VAR_6)
{
 u8 VAR_7 = FUNC_1(VAR_5, VAR_6);


 if (!FUNC_0(VAR_5, VAR_6)) {
  VAR_3->a = VAR_3->b = 0;
  return;
 }


 if (VAR_7 != 0xE && VAR_7 != 0xF)
  FUNC_2(VAR_2, "bad IDT type %i", VAR_7);







 VAR_3->a = ((VAR_1|VAR_0)<<16) | (VAR_5&0x0000FFFF);
 VAR_3->b = (VAR_6&0xFFFFEF00);
}
