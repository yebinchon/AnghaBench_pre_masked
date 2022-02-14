
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int const u32 ;
struct nv50_disp_priv {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 TYPE_1__* FUNC_0 (struct nv50_disp_priv*) ;

__attribute__((used)) static inline u32
FUNC_1(struct nv50_disp_priv *VAR_0, u8 VAR_1)
{
 static const u8 VAR_2[] = { 24, 16, 8, 0 };
 static const u8 VAR_3[] = { 16, 8, 0, 24 };
 if (FUNC_0(VAR_0)->chipset == 0xaf)
  return VAR_2[VAR_1];
 return VAR_3[VAR_1];
}
