
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* layer ) (struct PStack*,int,void*) ;} ;
struct PStack {TYPE_1__ ma; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct PStack*,int,void*) ;

__attribute__((used)) static void
FUNC_1(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct PStack *VAR_5 = VAR_2->userdata;

 VAR_5->ma.layer(VAR_5, VAR_1 | VAR_0, VAR_4);
}
