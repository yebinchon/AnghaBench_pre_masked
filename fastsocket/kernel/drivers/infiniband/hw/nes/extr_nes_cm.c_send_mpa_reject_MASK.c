
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nes_cm_node {int state; } ;
struct ietf_mpa_v1 {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nes_cm_node*,int **,int *,int *,int ) ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct nes_cm_node*,int *,int ,int *,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct nes_cm_node*,struct sk_buff*,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct nes_cm_node *VAR_9)
{
 struct sk_buff *VAR_10 = ((void*)0);
 u8 VAR_11 = 0;
 u8 *VAR_12 = &VAR_11;
 u8 **VAR_13 = &VAR_12;
 u16 VAR_14 = 0;
 struct ietf_mpa_v1 *VAR_15;

 VAR_10 = FUNC_1(VAR_2);
 if (!VAR_10) {
  FUNC_3(VAR_5, "Failed to get a Free pkt\n");
  return -VAR_0;
 }


 FUNC_0(VAR_9, VAR_13, &VAR_14, ((void*)0), VAR_3);
 VAR_15 = (struct ietf_mpa_v1 *)*VAR_13;
 VAR_15->flags |= VAR_1;
 FUNC_2(VAR_10, VAR_9, ((void*)0), 0, *VAR_13, VAR_14, VAR_7 | VAR_8);

 VAR_9->state = VAR_4;
 return FUNC_4(VAR_9, VAR_10, VAR_6, 1, 0);
}
