
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct igb_adapter {int netdev; TYPE_1__* vf_data; } ;
struct TYPE_2__ {scalar_t__ num_vf_mc_hashes; int pf_qos; scalar_t__ pf_vlan; int last_nack; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct igb_adapter*,size_t) ;
 int FUNC_1 (int ,size_t,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct igb_adapter*,size_t,int) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_4(struct igb_adapter *VAR_2, u32 VAR_3)
{

 VAR_2->vf_data[VAR_3].flags &= VAR_0;
 VAR_2->vf_data[VAR_3].last_nack = VAR_1;


 FUNC_3(VAR_2, VAR_3, 1);


 FUNC_0(VAR_2, VAR_3);
 if (VAR_2->vf_data[VAR_3].pf_vlan)
  FUNC_1(VAR_2->netdev, VAR_3,
        VAR_2->vf_data[VAR_3].pf_vlan,
        VAR_2->vf_data[VAR_3].pf_qos);
 else
  FUNC_0(VAR_2, VAR_3);


 VAR_2->vf_data[VAR_3].num_vf_mc_hashes = 0;


 FUNC_2(VAR_2->netdev);
}
