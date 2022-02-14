
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int PCIO; } ;
struct riva_par {TYPE_1__ riva; } ;
struct riva_i2c_chan {int ddc_base; struct riva_par* par; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(void* VAR_0, int VAR_1)
{
 struct riva_i2c_chan *VAR_2 = VAR_0;
 struct riva_par *VAR_3 = VAR_2->par;
 u32 VAR_4;

 FUNC_1(VAR_3->riva.PCIO, 0x3d4, VAR_2->ddc_base + 1);
 VAR_4 = FUNC_0(VAR_3->riva.PCIO, 0x3d5) & 0xf0;

 if (VAR_1)
  VAR_4 |= 0x20;
 else
  VAR_4 &= ~0x20;

 FUNC_1(VAR_3->riva.PCIO, 0x3d4, VAR_2->ddc_base + 1);
 FUNC_1(VAR_3->riva.PCIO, 0x3d5, VAR_4 | 0x1);
}
