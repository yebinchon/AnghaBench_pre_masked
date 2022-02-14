
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lanai_vcc {int * vbase; int vci; } ;
typedef enum lanai_vcc_offset { ____Placeholder_lanai_vcc_offset } lanai_vcc_offset ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,int ,unsigned int,unsigned int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static inline void FUNC_3(const struct lanai_vcc *VAR_0,
 u32 VAR_1, enum lanai_vcc_offset VAR_2)
{
 FUNC_0(VAR_0->vbase != ((void*)0), "cardvcc_write: unbound vcc!\n");
 FUNC_0((VAR_1 & ~0xFFFF) == 0,
     "cardvcc_write: bad val 0x%X (vci=%d, addr=0x%02X)\n",
     (unsigned int) VAR_1, VAR_0->vci, (unsigned int) VAR_2);
 FUNC_1("VW vci=%04d 0x%02X > 0x%08X\n",
     VAR_0->vci, (unsigned int) VAR_2, (unsigned int) VAR_1);
 FUNC_2(VAR_1, VAR_0->vbase + VAR_2);
}
