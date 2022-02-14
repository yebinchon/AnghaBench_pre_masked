
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
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nes_cm_node*,int *,int ,int *,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct nes_cm_node*,struct sk_buff*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct nes_cm_node *VAR_6, struct sk_buff *VAR_7)
{
 int VAR_8;
 int VAR_9 = VAR_5 | VAR_4;

 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_1);
 if (!VAR_7) {
  FUNC_2(VAR_2, "Failed to get a Free pkt\n");
  return -VAR_0;
 }

 FUNC_1(VAR_7, VAR_6, ((void*)0), 0, ((void*)0), 0, VAR_9);
 VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_3, 0, 1);

 return VAR_8;
}
