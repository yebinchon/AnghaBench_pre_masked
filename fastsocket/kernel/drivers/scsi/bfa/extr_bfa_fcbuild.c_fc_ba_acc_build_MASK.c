
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fchs_s {int rx_id; int ox_id; } ;
struct fc_ba_acc_s {int rx_id; int ox_id; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_1 (struct fc_ba_acc_s*,int *,int) ;

u16
FUNC_2(struct fchs_s *VAR_1, struct fc_ba_acc_s *VAR_2, u32 VAR_3,
  u32 VAR_4, __be16 VAR_5, u16 VAR_6)
{
 FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);

 FUNC_1(VAR_2, &VAR_0, sizeof(struct fc_ba_acc_s));

 VAR_1->rx_id = VAR_6;

 VAR_2->ox_id = VAR_1->ox_id;
 VAR_2->rx_id = VAR_1->rx_id;

 return sizeof(struct fc_ba_acc_s);
}
