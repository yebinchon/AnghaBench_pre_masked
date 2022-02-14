
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct amd64_pvt {scalar_t__ ext_model; int dclr0; } ;
struct TYPE_2__ {int x86; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static unsigned long FUNC_1(struct amd64_pvt *VAR_4)
{
 u8 VAR_5;
 unsigned long VAR_6 = VAR_0;

 VAR_5 = (VAR_3.x86 > 0xf || VAR_4->ext_model >= VAR_2)
  ? 19
  : 17;

 if (VAR_4->dclr0 & FUNC_0(VAR_5))
  VAR_6 = VAR_1;

 return VAR_6;
}
