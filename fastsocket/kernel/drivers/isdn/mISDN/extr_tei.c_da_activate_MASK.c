
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct manager {int datimer; } ;
struct FsmInst {scalar_t__ state; struct manager* userdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct manager *VAR_5 = VAR_2->userdata;

 if (VAR_2->state == VAR_1)
  FUNC_1(&VAR_5->datimer, 1);
 FUNC_0(VAR_2, VAR_0);
}
