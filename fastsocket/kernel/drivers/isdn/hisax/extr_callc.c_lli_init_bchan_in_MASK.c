
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {int debug; int incoming; TYPE_2__* b_st; int l2_protocol; int l2_active_protocol; } ;
struct TYPE_3__ {int (* l4l3 ) (TYPE_2__*,int,int *) ;} ;
struct TYPE_4__ {TYPE_1__ lli; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (struct Channel*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct Channel*,int) ;
 int FUNC_3 (struct Channel*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,int,int *) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct Channel *VAR_7 = VAR_4->userdata;

 FUNC_0(VAR_4, VAR_3);
 if (VAR_7->debug & 1)
  FUNC_3(VAR_7, 0, "STAT_DCONN");
 FUNC_1(VAR_7, VAR_1);
 VAR_7->l2_active_protocol = VAR_7->l2_protocol;
 VAR_7->incoming = !0;
 FUNC_2(VAR_7, !0);
 VAR_7->b_st->lli.l4l3(VAR_7->b_st, VAR_0 | VAR_2, ((void*)0));
}
