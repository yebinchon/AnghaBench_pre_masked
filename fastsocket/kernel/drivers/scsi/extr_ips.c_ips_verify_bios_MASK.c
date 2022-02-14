
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ io_addr; TYPE_1__* pcidev; } ;
typedef TYPE_2__ ips_ha_t ;
struct TYPE_4__ {scalar_t__ revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(ips_ha_t * VAR_3, char *VAR_4, uint32_t VAR_5,
  uint32_t VAR_6)
{
 uint8_t VAR_7;
 int VAR_8;

 FUNC_0("ips_verify_bios", 1);


 FUNC_2(0, VAR_3->io_addr + VAR_0);
 if (VAR_3->pcidev->revision == VAR_2)
  FUNC_3(25);

 if (FUNC_1(VAR_3->io_addr + VAR_1) != 0x55)
  return (1);

 FUNC_2(1, VAR_3->io_addr + VAR_0);
 if (VAR_3->pcidev->revision == VAR_2)
  FUNC_3(25);
 if (FUNC_1(VAR_3->io_addr + VAR_1) != 0xAA)
  return (1);

 VAR_7 = 0xff;
 for (VAR_8 = 2; VAR_8 < VAR_5; VAR_8++) {

  FUNC_2(VAR_8 + VAR_6, VAR_3->io_addr + VAR_0);
  if (VAR_3->pcidev->revision == VAR_2)
   FUNC_3(25);

  VAR_7 = (uint8_t) VAR_7 + FUNC_1(VAR_3->io_addr + VAR_1);
 }

 if (VAR_7 != 0)

  return (1);
 else

  return (0);
}
