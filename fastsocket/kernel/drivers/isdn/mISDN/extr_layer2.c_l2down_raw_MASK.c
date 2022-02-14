
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mISDNhead {scalar_t__ prim; } ;
struct layer2 {int down_id; int down_queue; int flag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct layer2*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct mISDNhead* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct layer2 *VAR_2, struct sk_buff *VAR_3)
{
 struct mISDNhead *VAR_4 = FUNC_2(VAR_3);

 if (VAR_4->prim == VAR_1) {
  if (FUNC_4(VAR_0, &VAR_2->flag)) {
   FUNC_3(&VAR_2->down_queue, VAR_3);
   return 0;
  }
  VAR_2->down_id = FUNC_1(VAR_3);
 }
 return FUNC_0(VAR_2, VAR_3);
}
