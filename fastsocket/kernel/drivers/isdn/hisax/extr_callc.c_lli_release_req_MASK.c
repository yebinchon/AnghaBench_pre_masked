
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {int proc; TYPE_2__* d_st; scalar_t__ leased; } ;
struct TYPE_3__ {int (* l4l3 ) (TYPE_2__*,int,int ) ;} ;
struct TYPE_4__ {TYPE_1__ lli; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct FsmInst*,struct Channel*) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct Channel *VAR_6 = VAR_3->userdata;

 if (VAR_6->leased) {
  FUNC_1(VAR_3, VAR_6);
 } else {
  FUNC_0(VAR_3, VAR_2);
  VAR_6->d_st->lli.l4l3(VAR_6->d_st, VAR_0 | VAR_1,
   VAR_6->proc);
 }
}
