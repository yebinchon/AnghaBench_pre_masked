
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int (* msg_handler ) (struct sk_buff*) ;void (* event_handler ) (struct notifier_block*,unsigned long,void*) ;scalar_t__ refcnt; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_1__* VAR_6 ;

int
FUNC_3(u8 VAR_7,
 int (*VAR_8)(struct sk_buff *),
 void (*VAR_9)(struct notifier_block *, unsigned long, void *))
{
 unsigned long VAR_10;
 int VAR_11 = 0;

 if (VAR_7 >= VAR_2)
  return -VAR_1;

 FUNC_1(&VAR_4, VAR_10);

 if (VAR_5 & VAR_3) {
  FUNC_2(&VAR_4, VAR_10);
  FUNC_0(1);
  FUNC_1(&VAR_4, VAR_10);
 }

 if (VAR_6[VAR_7].msg_handler || VAR_6[VAR_7].event_handler) {
  VAR_11 = -VAR_0;
  goto register_out;
 }

 VAR_6[VAR_7].msg_handler = VAR_8;
 VAR_6[VAR_7].event_handler = VAR_9;
 VAR_6[VAR_7].flags = 0;
 VAR_6[VAR_7].refcnt = 0;

register_out:
 FUNC_2(&VAR_4, VAR_10);

 return VAR_11;
}
