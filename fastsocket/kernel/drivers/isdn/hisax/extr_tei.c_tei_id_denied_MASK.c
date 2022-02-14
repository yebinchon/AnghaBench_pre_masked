
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned int* data; } ;
struct TYPE_4__ {int (* printdebug ) (TYPE_2__*,char*,int,int) ;} ;
struct TYPE_3__ {TYPE_2__ tei_m; scalar_t__ debug; } ;
struct PStack {TYPE_1__ ma; } ;
struct FsmInst {struct PStack* userdata; } ;


 int FUNC_0 (TYPE_2__*,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct FsmInst *VAR_0, int VAR_1, void *VAR_2)
{
 struct PStack *VAR_3 = VAR_0->userdata;
 struct sk_buff *VAR_4 = VAR_2;
 int VAR_5, VAR_6;

 VAR_5 = ((unsigned int) VAR_4->data[1] << 8) + VAR_4->data[2];
 VAR_6 = VAR_4->data[4] >> 1;
 if (VAR_3->ma.debug)
  VAR_3->ma.tei_m.printdebug(&VAR_3->ma.tei_m,
   "identity denied ri %d tei %d", VAR_5, VAR_6);
}
