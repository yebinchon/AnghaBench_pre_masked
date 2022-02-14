
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
typedef int csum ;
typedef int __be32 ;


 int FUNC_0 (struct adapter*,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const) ;

int FUNC_2(struct adapter *VAR_1, const u8 *VAR_2,
      unsigned int VAR_3)
{
 u32 VAR_4;
 unsigned int VAR_5;
 const __be32 *VAR_6 = (const __be32 *)VAR_2;


 for (VAR_4 = 0, VAR_5 = 0; VAR_5 < VAR_3 / sizeof(VAR_4); VAR_5++)
  VAR_4 += FUNC_1(VAR_6[VAR_5]);
 if (VAR_4 != 0xffffffff) {
  FUNC_0(VAR_1, "corrupted protocol SRAM image, checksum %u\n",
         VAR_4);
  return -VAR_0;
 }

 return 0;
}
