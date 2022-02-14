
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct desc_struct {int b; int a; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct desc_struct *VAR_3,
         int VAR_4,
         const unsigned long VAR_5,
         const struct desc_struct *VAR_6)
{

 u32 VAR_7 = 0x8e00;





 if (VAR_4 == VAR_2)
  VAR_7 |= (VAR_0 << 13);
 else if (VAR_6)




  VAR_7 |= (VAR_6->b & 0x6000);


 VAR_3->a = (VAR_1<<16) | (VAR_5&0x0000FFFF);
 VAR_3->b = (VAR_5&0xFFFF0000) | VAR_7;
}
