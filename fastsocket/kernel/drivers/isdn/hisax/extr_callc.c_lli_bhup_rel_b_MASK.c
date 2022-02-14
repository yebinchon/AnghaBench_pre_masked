
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FsmInst {struct Channel* userdata; } ;
struct Channel {int debug; scalar_t__ data_open; } ;


 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (struct Channel*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct Channel*,int ,char*) ;
 int FUNC_3 (struct Channel*) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct Channel *VAR_5 = VAR_2->userdata;

 FUNC_0(VAR_2, VAR_1);
 VAR_5->data_open = 0;
 if (VAR_5->debug & 1)
  FUNC_2(VAR_5, 0, "STAT_BHUP");
 FUNC_1(VAR_5, VAR_0);
 FUNC_3(VAR_5);
}
