
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer1 {int dch; int (* dcb ) (int ,int ) ;} ;
struct FsmInst {struct layer1* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct layer1 *VAR_5 = VAR_2->userdata;

 FUNC_0(VAR_2, VAR_1);
 VAR_5->dcb(VAR_5->dch, VAR_0);
}
