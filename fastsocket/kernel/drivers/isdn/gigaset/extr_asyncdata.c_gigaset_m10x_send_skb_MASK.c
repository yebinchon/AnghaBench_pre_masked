
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; } ;
struct bc_state {scalar_t__ proto2; TYPE_1__* cs; int squeue; } ;
struct TYPE_2__ {int lock; int write_tasklet; scalar_t__ connected; int dev; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct bc_state *VAR_3, struct sk_buff *VAR_4)
{
 unsigned VAR_5 = VAR_4->len;
 unsigned long VAR_6;

 if (VAR_3->proto2 == VAR_2)
  VAR_4 = FUNC_0(VAR_4, VAR_1, 0);
 else
  VAR_4 = FUNC_2(VAR_4, VAR_1, 0);
 if (!VAR_4) {
  FUNC_1(VAR_3->cs->dev,
   "unable to allocate memory for encoding!\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_3->squeue, VAR_4);
 FUNC_4(&VAR_3->cs->lock, VAR_6);
 if (VAR_3->cs->connected)
  FUNC_6(&VAR_3->cs->write_tasklet);
 FUNC_5(&VAR_3->cs->lock, VAR_6);

 return VAR_5;
}
