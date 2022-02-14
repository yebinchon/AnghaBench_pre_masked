
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {int proc; TYPE_2__* d_st; scalar_t__ leased; } ;
struct TYPE_4__ {int (* l4l3 ) (TYPE_2__*,int,int ) ;} ;
struct TYPE_5__ {TYPE_1__ lli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct FsmInst*,int,void*) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_5, int VAR_6, void *VAR_7)
{
 struct Channel *VAR_8 = VAR_5->userdata;

 if (VAR_8->leased) {
  FUNC_1(VAR_5, VAR_6, VAR_7);
 } else {
  FUNC_0(VAR_5, VAR_4);



  VAR_8->d_st->lli.l4l3(VAR_8->d_st, VAR_1 | VAR_3, VAR_8->proc);
 }
}
