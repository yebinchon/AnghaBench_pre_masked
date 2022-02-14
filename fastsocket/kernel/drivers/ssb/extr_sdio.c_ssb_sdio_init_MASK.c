
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {scalar_t__ bustype; int sdio_sbaddr; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct ssb_bus *VAR_1)
{
 if (VAR_1->bustype != VAR_0)
  return 0;

 VAR_1->sdio_sbaddr = ~0;

 return 0;
}
