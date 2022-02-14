
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_event {int priv; } ;


 int FUNC_0 (int ,int const,int const,int) ;
 int FUNC_1 (int ,int const,int const) ;

void
FUNC_2(struct nouveau_event *VAR_0, int VAR_1)
{
 const u32 VAR_2 = VAR_1 < 16 ? 0xdc00 : 0xdc80;
 const u32 VAR_3 = 0x00010001 << (VAR_1 & 0xf);
 FUNC_1(VAR_0->priv, VAR_2 + 0x08, VAR_3);
 FUNC_0(VAR_0->priv, VAR_2 + 0x00, VAR_3, 0x00000000);
}
