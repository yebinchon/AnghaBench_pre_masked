
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvidia_par {int dummy; } ;
struct nvidia_i2c_chan {int ddc_base; struct nvidia_par* par; } ;


 int FUNC_0 (struct nvidia_par*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct nvidia_i2c_chan *VAR_1 = VAR_0;
 struct nvidia_par *VAR_2 = VAR_1->par;
 u32 VAR_3 = 0;

 if (FUNC_0(VAR_2, VAR_1->ddc_base) & 0x08)
  VAR_3 = 1;

 return VAR_3;
}
