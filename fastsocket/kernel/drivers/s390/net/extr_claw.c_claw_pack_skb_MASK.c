
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {char* cb; int len; int users; int data; } ;
struct TYPE_2__ {int tx_packets; } ;
struct claw_privbk {TYPE_1__ stats; struct claw_env* p_env; struct chbk* channel; } ;
struct claw_env {scalar_t__ packing; int write_size; } ;
struct chbk {int collect_queue; } ;


 int FUNC_0 (int,int ,char*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int VAR_2 ;

__attribute__((used)) static struct sk_buff *
FUNC_10(struct claw_privbk *VAR_3)
{
 struct sk_buff *VAR_4,*VAR_5;
 struct chbk *VAR_6 = &VAR_3->channel[VAR_1];
 struct claw_env *VAR_7 = VAR_3->p_env;
 int VAR_8,VAR_9,VAR_10;

 VAR_4 = ((void*)0);
 VAR_8 = 0;
 FUNC_0(4, VAR_2, "PackSKBe");
 if (!FUNC_8(&VAR_6->collect_queue)) {

  VAR_5 = FUNC_6(&VAR_6->collect_queue);
  if (VAR_5)
   FUNC_4(VAR_5);
  else
   return ((void*)0);
  if (VAR_7->packing != VAR_0)
   return VAR_5;

  VAR_4 = FUNC_3(VAR_7->write_size);
  if (VAR_4 == ((void*)0)) {
   FUNC_2(&VAR_5->users);
   FUNC_9(&VAR_6->collect_queue,VAR_5);
   return ((void*)0);
  }

  VAR_9 = 1;
  VAR_10 = 0;
  VAR_4->cb[1] = 'P';
  while ((VAR_9) && (VAR_5 != ((void*)0))) {
   if (VAR_5->len+VAR_10 <= VAR_7->write_size-8) {
    FUNC_5(FUNC_7(VAR_4,VAR_5->len),
     VAR_5->data,VAR_5->len);
    VAR_3->stats.tx_packets++;
    VAR_10 += VAR_5->len;
    VAR_8++;
    FUNC_4(VAR_5);
    VAR_5 = FUNC_6(&VAR_6->collect_queue);
    if (VAR_5)
     FUNC_1(&VAR_5->users);
   } else {
    VAR_9 = 0;
    FUNC_2(&VAR_5->users);
    FUNC_9(&VAR_6->collect_queue,VAR_5);
   }
  }
 }
 FUNC_0(4, VAR_2, "PackSKBx");
 return VAR_4;
}
