
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {int timer; } ;
struct FsmInst {struct isac* userdata; } ;


 int FUNC_0 (struct isac*,int,int *) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct isac*,int ) ;

__attribute__((used)) static void FUNC_4(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct isac *VAR_7 = VAR_4->userdata;

 FUNC_2(&VAR_7->timer, 0);
 FUNC_1(VAR_4, VAR_3);
 FUNC_3(VAR_7, VAR_1);
 FUNC_0(VAR_7, VAR_2 | VAR_0, ((void*)0));
}
