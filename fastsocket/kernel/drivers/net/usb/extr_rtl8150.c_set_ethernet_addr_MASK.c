
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {TYPE_1__* netdev; } ;
typedef TYPE_2__ rtl8150_t ;
typedef int node_id ;
struct TYPE_5__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int,int *) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static inline void FUNC_2(rtl8150_t * VAR_1)
{
 u8 VAR_2[6];

 FUNC_0(VAR_1, VAR_0, sizeof(VAR_2), VAR_2);
 FUNC_1(VAR_1->netdev->dev_addr, VAR_2, sizeof(VAR_2));
}
