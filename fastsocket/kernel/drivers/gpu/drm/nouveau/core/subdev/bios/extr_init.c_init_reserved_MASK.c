
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvbios_init {int offset; int bios; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct nvbios_init *VAR_0)
{
 u8 VAR_1 = FUNC_0(VAR_0->bios, VAR_0->offset);
 FUNC_1("RESERVED\t0x%02x\n", VAR_1);
 VAR_0->offset += 1;
}
