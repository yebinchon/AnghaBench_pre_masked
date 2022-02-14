
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FsmInst {struct Channel* userdata; } ;
struct Channel {int debug; } ;


 int FUNC_0 (struct Channel*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct Channel*,int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_1, int VAR_2, void *VAR_3)
{
 struct Channel *VAR_4 = VAR_1->userdata;

 if (VAR_4->debug & 1)
  FUNC_1(VAR_4, 0, "STAT_DHUP");
 FUNC_0(VAR_4, VAR_0);
}
