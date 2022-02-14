
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_q_skb_arr {int len; scalar_t__ os_skbs; scalar_t__ index; int arr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ehea_q_skb_arr *VAR_1, int VAR_2)
{
 int VAR_3 = sizeof(void *) * VAR_2;

 VAR_1->arr = FUNC_1(VAR_3);
 if (!VAR_1->arr)
  return -VAR_0;

 FUNC_0(VAR_1->arr, 0, VAR_3);

 VAR_1->len = VAR_2;
 VAR_1->index = 0;
 VAR_1->os_skbs = 0;

 return 0;
}
