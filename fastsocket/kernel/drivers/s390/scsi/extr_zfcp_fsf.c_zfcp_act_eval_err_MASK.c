
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct zfcp_adapter {TYPE_1__* ccw_device; } ;
struct TYPE_2__ {int dev; } ;


 size_t FUNC_0 (char const**) ;
 int FUNC_1 (int *,char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_2(struct zfcp_adapter *VAR_0, u32 VAR_1)
{
 u16 VAR_2 = VAR_1 >> 16;
 u16 VAR_3 = VAR_1 & 0xffff;
 const char *VAR_4[] = { "unknown", "OS", "WWPN", "DID", "LUN" };

 if (VAR_2 && VAR_2 < FUNC_0(VAR_4))
  FUNC_1(&VAR_0->ccw_device->dev,
    "Access denied according to ACT rule type %s, "
    "rule %d\n", VAR_4[VAR_2], VAR_3);
}
