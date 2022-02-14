
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {struct sk_buff* next; scalar_t__ len; } ;
struct nes_qp {int cm_node; int pau_list; } ;
struct nes_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,int *,int *,int *,int *) ;
 int FUNC_2 (struct nes_device*,struct sk_buff*,int ) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*,int *) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct nes_device *VAR_1, struct nes_qp *VAR_2,
     struct sk_buff *VAR_3, u32 VAR_4, u32 *VAR_5,
     u16 *VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 u32 VAR_9;
 bool VAR_10;
 struct sk_buff *VAR_11;

 if (VAR_3) {

  if (VAR_3->next == (struct sk_buff *)&VAR_2->pau_list)
   goto out;
  VAR_3 = VAR_3->next;
  VAR_10 = 0;
 } else {

  if (FUNC_5(&VAR_2->pau_list))
   goto out;
  VAR_3 = FUNC_4(&VAR_2->pau_list);
  VAR_10 = 1;
 }

 while (1) {
  VAR_9 = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_9 == VAR_4) {
   if (VAR_3->len || VAR_10)
    break;
  } else if (FUNC_0(VAR_9, VAR_4)) {
   goto out;
  }

  if (VAR_3->next == (struct sk_buff *)&VAR_2->pau_list)
   goto out;

  VAR_11 = VAR_3;
  VAR_3 = VAR_3->next;
  FUNC_6(VAR_11, &VAR_2->pau_list);
  FUNC_2(VAR_1, VAR_11, VAR_0);
  FUNC_3(VAR_2->cm_node);
 }
 return VAR_3;

out:
 return ((void*)0);
}
