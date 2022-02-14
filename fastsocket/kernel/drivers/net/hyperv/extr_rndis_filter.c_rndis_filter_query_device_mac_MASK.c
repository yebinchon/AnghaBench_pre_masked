
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rndis_device {int hw_mac_adr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rndis_device*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct rndis_device *VAR_2)
{
 u32 VAR_3 = VAR_0;

 return FUNC_0(VAR_2,
          VAR_1,
          VAR_2->hw_mac_adr, &VAR_3);
}
