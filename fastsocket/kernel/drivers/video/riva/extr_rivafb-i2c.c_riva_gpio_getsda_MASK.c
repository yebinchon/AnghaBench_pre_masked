
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
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(void* VAR_0)
{
 struct riva_i2c_chan *VAR_1 = VAR_0;
 struct riva_par *VAR_2 = VAR_1->par;
 u32 VAR_3 = 0;

 FUNC_1(VAR_2->riva.PCIO, 0x3d4, VAR_1->ddc_base);
 if (FUNC_0(VAR_2->riva.PCIO, 0x3d5) & 0x08)
  VAR_3 = 1;

 return VAR_3;
}
