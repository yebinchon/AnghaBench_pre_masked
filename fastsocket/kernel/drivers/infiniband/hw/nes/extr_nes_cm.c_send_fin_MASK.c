
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nes_cm_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nes_cm_node*,int *,int ,int *,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct nes_cm_node*,struct sk_buff*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct nes_cm_node *VAR_5, struct sk_buff *VAR_6)
{
 int VAR_7;


 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_0);

 if (!VAR_6) {
  FUNC_2(VAR_1, "Failed to get a Free pkt\n");
  return -1;
 }

 FUNC_1(VAR_6, VAR_5, ((void*)0), 0, ((void*)0), 0, VAR_3 | VAR_4);
 VAR_7 = FUNC_3(VAR_5, VAR_6, VAR_2, 1, 0);

 return VAR_7;
}
