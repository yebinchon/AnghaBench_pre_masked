
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {int dummy; } ;
struct FsmInst {struct isac* userdata; } ;


 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct isac*,int ) ;

__attribute__((used)) static void FUNC_2(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct isac *VAR_5 = VAR_2->userdata;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_5, VAR_0);
}
