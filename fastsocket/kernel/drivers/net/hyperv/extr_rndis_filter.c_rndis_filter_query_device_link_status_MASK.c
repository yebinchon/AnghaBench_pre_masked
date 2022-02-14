
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rndis_device {int link_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct rndis_device*,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct rndis_device *VAR_1)
{
 u32 VAR_2 = sizeof(u32);
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1,
          VAR_0,
          &VAR_3, &VAR_2);
 VAR_1->link_state = (VAR_3 != 0) ? 1 : 0;

 return VAR_4;
}
