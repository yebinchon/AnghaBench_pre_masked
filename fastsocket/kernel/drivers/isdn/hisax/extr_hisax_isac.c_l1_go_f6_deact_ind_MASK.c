
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {int dummy; } ;
struct FsmInst {struct isac* userdata; } ;


 int FUNC_0 (struct isac*,int,int *) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct isac *VAR_6 = VAR_3->userdata;

 FUNC_1(VAR_3, VAR_2);
 FUNC_0(VAR_6, VAR_1 | VAR_0, ((void*)0));
}
