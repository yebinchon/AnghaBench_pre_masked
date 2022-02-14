
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_2__ {scalar_t__ ram; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(uint32 VAR_1, uint32 VAR_2)
{

  *(uint16 *)(VAR_0.ram + (VAR_1 & 0xfffe)) = (VAR_2 | (VAR_2 << 8));
}
