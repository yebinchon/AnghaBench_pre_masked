
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tg3 {TYPE_1__* dev; int * napi; } ;
struct sk_buff {struct sk_buff* next; } ;
struct TYPE_6__ {int gso_segs; } ;
struct TYPE_5__ {int features; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct sk_buff*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct tg3 *VAR_3, struct sk_buff *VAR_4)
{
 struct sk_buff *VAR_5, *VAR_6;
 u32 VAR_7 = FUNC_5(VAR_4)->gso_segs * 3;


 if (FUNC_9(FUNC_8(&VAR_3->napi[0]) <= VAR_7)) {
  FUNC_2(VAR_3->dev);






  FUNC_6();
  if (FUNC_8(&VAR_3->napi[0]) <= VAR_7)
   return VAR_0;

  FUNC_3(VAR_3->dev);
 }

 VAR_5 = FUNC_4(VAR_4, VAR_3->dev->features & ~VAR_2);
 if (FUNC_0(VAR_5))
  goto tg3_tso_bug_end;

 do {
  VAR_6 = VAR_5;
  VAR_5 = VAR_5->next;
  VAR_6->next = ((void*)0);
  FUNC_7(VAR_6, VAR_3->dev);
 } while (VAR_5);

tg3_tso_bug_end:
 FUNC_1(VAR_4);

 return VAR_1;
}
