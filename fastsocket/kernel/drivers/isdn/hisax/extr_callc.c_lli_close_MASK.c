
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct FsmInst {struct Channel* userdata; } ;
struct Channel {scalar_t__ chan; TYPE_1__* cs; scalar_t__ Flags; } ;
struct TYPE_2__ {int (* cardmsg ) (TYPE_1__*,int ,void*) ;} ;


 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,void*) ;

__attribute__((used)) static inline void
FUNC_2(struct FsmInst *VAR_2)
{
 struct Channel *VAR_3 = VAR_2->userdata;

 FUNC_0(VAR_2, VAR_1);
 VAR_3->Flags = 0;
 VAR_3->cs->cardmsg(VAR_3->cs, VAR_0, (void *) (long)VAR_3->chan);
}
