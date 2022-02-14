
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {TYPE_4__* proc; TYPE_3__* d_st; int drel_timer; scalar_t__ leased; } ;
struct TYPE_7__ {int cause; } ;
struct TYPE_10__ {TYPE_1__ para; } ;
struct TYPE_8__ {int (* l4l3 ) (TYPE_3__*,int,TYPE_4__*) ;} ;
struct TYPE_9__ {TYPE_2__ lli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int,int ,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct FsmInst*,int,void*) ;
 int FUNC_3 (struct FsmInst*,struct Channel*) ;
 int FUNC_4 (TYPE_3__*,int,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,int,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_6(struct FsmInst *VAR_5, int VAR_6, void *VAR_7)
{
 struct Channel *VAR_8 = VAR_5->userdata;

 if (VAR_8->leased) {
  FUNC_3(VAR_5, VAR_8);
  return;
 }

 if (VAR_8->proc)
  VAR_8->proc->para.cause = 0x15;
 VAR_8->d_st->lli.l4l3(VAR_8->d_st, VAR_1 | VAR_3, VAR_8->proc);
 FUNC_2(VAR_5, VAR_6, VAR_7);





}
