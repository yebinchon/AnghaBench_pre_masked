
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {TYPE_2__* d_st; scalar_t__ leased; scalar_t__ chan; TYPE_3__* cs; scalar_t__ incoming; int l2_protocol; int l2_active_protocol; int dial_timer; int drel_timer; } ;
struct TYPE_6__ {int (* cardmsg ) (TYPE_3__*,int ,void*) ;} ;
struct TYPE_4__ {int (* l4l3 ) (TYPE_2__*,int,struct Channel*) ;} ;
struct TYPE_5__ {TYPE_1__ lli; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct FsmInst*,int,void*) ;
 int FUNC_3 (TYPE_3__*,int ,void*) ;
 int FUNC_4 (TYPE_2__*,int,struct Channel*) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct Channel *VAR_7 = VAR_4->userdata;

 FUNC_1(&VAR_7->drel_timer, 60);
 FUNC_1(&VAR_7->dial_timer, 73);
 VAR_7->l2_active_protocol = VAR_7->l2_protocol;
 VAR_7->incoming = 0;
 VAR_7->cs->cardmsg(VAR_7->cs, VAR_1, (void *) (long)VAR_7->chan);
 if (VAR_7->leased) {
  FUNC_2(VAR_4, VAR_5, VAR_6);
 } else {
  FUNC_0(VAR_4, VAR_3);
  VAR_7->d_st->lli.l4l3(VAR_7->d_st, VAR_0 | VAR_2, VAR_7);
 }
}
