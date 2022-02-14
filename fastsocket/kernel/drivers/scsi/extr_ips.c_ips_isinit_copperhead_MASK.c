
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ io_addr; } ;
typedef TYPE_1__ ips_ha_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(ips_ha_t * VAR_4)
{
 uint8_t VAR_5;
 uint8_t VAR_6;

 FUNC_0("ips_isinit_copperhead", 1);

 VAR_6 = FUNC_1(VAR_4->io_addr + VAR_2);
 VAR_5 = FUNC_1(VAR_4->io_addr + VAR_3);

 if (((VAR_6 & VAR_1) == 0) && ((VAR_5 & VAR_0) == 0))
  return (0);
 else
  return (1);
}
