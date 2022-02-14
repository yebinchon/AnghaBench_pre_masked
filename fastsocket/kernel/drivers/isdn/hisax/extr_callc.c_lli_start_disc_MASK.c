
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FsmInst {struct Channel* userdata; } ;
struct Channel {scalar_t__ leased; } ;


 int FUNC_0 (struct FsmInst*,int,void*) ;
 int FUNC_1 (struct FsmInst*,struct Channel*) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_0, int VAR_1, void *VAR_2)
{
 struct Channel *VAR_3 = VAR_0->userdata;

 if (VAR_3->leased) {
  FUNC_1(VAR_0, VAR_3);
 } else {
  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
