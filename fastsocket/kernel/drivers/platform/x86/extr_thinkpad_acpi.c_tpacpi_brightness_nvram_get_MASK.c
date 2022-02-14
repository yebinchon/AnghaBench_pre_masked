
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ bright_16levels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 u8 VAR_4;

 VAR_4 = (FUNC_0(VAR_0)
    & VAR_1)
    >> VAR_2;
 VAR_4 &= (VAR_3.bright_16levels) ? 0x0f : 0x07;

 return VAR_4;
}
