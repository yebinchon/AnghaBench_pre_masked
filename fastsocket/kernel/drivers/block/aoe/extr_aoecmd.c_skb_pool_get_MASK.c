
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct aoedev {int skbpool; } ;
struct TYPE_2__ {int dataref; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (int *) ;
 struct sk_buff* FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct aoedev *VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_3(&VAR_2->skbpool);

 if (VAR_3 && FUNC_1(&FUNC_5(VAR_3)->dataref) == 1) {
  FUNC_0(VAR_3, &VAR_2->skbpool);
  return VAR_3;
 }
 if (FUNC_4(&VAR_2->skbpool) < VAR_1 &&
     (VAR_3 = FUNC_2(VAR_0)))
  return VAR_3;

 return ((void*)0);
}
