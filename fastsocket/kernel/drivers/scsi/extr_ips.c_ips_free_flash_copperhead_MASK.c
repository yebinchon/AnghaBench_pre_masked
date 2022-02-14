
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * flash_data; int flash_busaddr; int flash_len; int pcidev; } ;
typedef TYPE_1__ ips_ha_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(ips_ha_t * VAR_2)
{
 if (VAR_2->flash_data == VAR_0)
  FUNC_1(0, &VAR_1);
 else if (VAR_2->flash_data)
  FUNC_0(VAR_2->pcidev, VAR_2->flash_len, VAR_2->flash_data,
        VAR_2->flash_busaddr);
 VAR_2->flash_data = ((void*)0);
}
