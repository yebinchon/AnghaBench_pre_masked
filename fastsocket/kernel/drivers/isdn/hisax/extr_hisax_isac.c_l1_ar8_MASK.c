
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {int timer; } ;
struct FsmInst {struct isac* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct isac*,int ) ;

__attribute__((used)) static void FUNC_2(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct isac *VAR_6 = VAR_3->userdata;

 FUNC_0(&VAR_6->timer, VAR_2, VAR_0, ((void*)0), 2);
 FUNC_1(VAR_6, VAR_1);
}
