
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct TYPE_3__ {scalar_t__* sndcount; struct sk_buff_head* bqueue; } ;
typedef TYPE_1__ isdnloop_card ;


 int FUNC_0 (struct sk_buff_head*) ;

__attribute__((used)) static void
FUNC_1(isdnloop_card * VAR_0, int VAR_1)
{
 struct sk_buff_head *VAR_2 = &VAR_0->bqueue[VAR_1];

 FUNC_0(VAR_2);
 VAR_0->sndcount[VAR_1] = 0;
}
