
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mtd_info {int dummy; } ;
struct bf5xx_nand_platform {scalar_t__ page_size; } ;
struct bf5xx_nand_info {int device; struct bf5xx_nand_platform* platform; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,int *,int) ;
 struct bf5xx_nand_info* FUNC_6 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_0,
  const u_char *VAR_1, u_char *VAR_2)
{
 struct bf5xx_nand_info *VAR_3 = FUNC_6(VAR_0);
 struct bf5xx_nand_platform *VAR_4 = VAR_3->platform;
 u16 VAR_5 = (VAR_4->page_size ? 512 : 256);
 u16 VAR_6, VAR_7;
 u32 VAR_8[2];
 u8 *VAR_9;


 VAR_6 = FUNC_0();
 VAR_7 = FUNC_1();

 VAR_8[0] = (VAR_6 & 0x7ff) | ((VAR_7 & 0x7ff) << 11);

 FUNC_4(VAR_3->device, "returning ecc 0x%08x\n", VAR_8[0]);


 VAR_9 = (u8 *) VAR_8;
 FUNC_5(VAR_2, VAR_9, 3);


 if (VAR_5 == 512) {
  VAR_6 = FUNC_2();
  VAR_7 = FUNC_3();
  VAR_8[1] = (VAR_6 & 0x7ff) | ((VAR_7 & 0x7ff) << 11);




  VAR_9 = (u8 *) (VAR_8 + 1);
  FUNC_5((VAR_2 + 3), VAR_9, 3);
  FUNC_4(VAR_3->device, "returning ecc 0x%08x\n", VAR_8[1]);
 }

 return 0;
}
