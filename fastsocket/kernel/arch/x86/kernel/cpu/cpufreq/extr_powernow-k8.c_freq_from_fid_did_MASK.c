
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int x86; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0;

 if (VAR_0.x86 == 0x10)
  VAR_3 = (100 * (VAR_1 + 0x10)) >> VAR_2;
 else if (VAR_0.x86 == 0x11)
  VAR_3 = (100 * (VAR_1 + 8)) >> VAR_2;
 else
  FUNC_0();

 return VAR_3 * 1000;
}
