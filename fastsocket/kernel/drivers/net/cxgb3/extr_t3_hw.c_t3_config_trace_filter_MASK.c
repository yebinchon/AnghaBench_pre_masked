
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_params {int sport; int sip; int dport; int dip; int proto; int vlan; int intf; int sport_mask; int sip_mask; int dport_mask; int dip_mask; int proto_mask; int vlan_mask; int intf_mask; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int,int) ;

void FUNC_2(struct adapter *VAR_3,
       const struct trace_params *VAR_4, int VAR_5,
       int VAR_6, int VAR_7)
{
 u32 VAR_8, VAR_9[4], VAR_10[4];

 VAR_9[0] = VAR_4->sport | (VAR_4->sip << 16);
 VAR_9[1] = (VAR_4->sip >> 16) | (VAR_4->dport << 16);
 VAR_9[2] = VAR_4->dip;
 VAR_9[3] = VAR_4->proto | (VAR_4->vlan << 8) | (VAR_4->intf << 20);

 VAR_10[0] = VAR_4->sport_mask | (VAR_4->sip_mask << 16);
 VAR_10[1] = (VAR_4->sip_mask >> 16) | (VAR_4->dport_mask << 16);
 VAR_10[2] = VAR_4->dip_mask;
 VAR_10[3] = VAR_4->proto_mask | (VAR_4->vlan_mask << 8) | (VAR_4->intf_mask << 20);

 if (VAR_6)
  VAR_9[3] |= (1 << 29);
 if (VAR_7)
  VAR_9[3] |= (1 << 28);

 VAR_8 = VAR_5 ? VAR_1 : VAR_2;
 FUNC_1(VAR_3, VAR_8++, VAR_9[0]);
 FUNC_1(VAR_3, VAR_8++, VAR_10[0]);
 FUNC_1(VAR_3, VAR_8++, VAR_9[1]);
 FUNC_1(VAR_3, VAR_8++, VAR_10[1]);
 FUNC_1(VAR_3, VAR_8++, VAR_9[2]);
 FUNC_1(VAR_3, VAR_8++, VAR_10[2]);
 FUNC_1(VAR_3, VAR_8++, VAR_9[3]);
 FUNC_1(VAR_3, VAR_8, VAR_10[3]);
 FUNC_0(VAR_3, VAR_0);
}
