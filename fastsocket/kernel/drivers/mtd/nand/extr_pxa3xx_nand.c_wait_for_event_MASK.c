
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxa3xx_nand_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pxa3xx_nand_info*,int ) ;
 int FUNC_1 (struct pxa3xx_nand_info*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct pxa3xx_nand_info *VAR_4, uint32_t VAR_5)
{
 int VAR_6 = VAR_3;
 uint32_t VAR_7;

 while (VAR_6--) {
  VAR_7 = FUNC_0(VAR_4, VAR_1) & VAR_2;
  if (VAR_7 & VAR_5) {
   FUNC_1(VAR_4, VAR_1, VAR_7);
   return 0;
  }
  FUNC_2(10);
 }

 return -VAR_0;
}
