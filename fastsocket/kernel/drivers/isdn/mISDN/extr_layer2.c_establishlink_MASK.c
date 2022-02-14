
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct layer2 {int flag; int t203; scalar_t__ rc; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct layer2*) ;
 int FUNC_1 (struct layer2*) ;
 int FUNC_2 (struct FsmInst*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct layer2*,int) ;
 int FUNC_5 (struct layer2*,int *,int,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct FsmInst *VAR_6)
{
 struct layer2 *VAR_7 = VAR_6->userdata;
 u_char VAR_8;

 FUNC_0(VAR_7);
 VAR_7->rc = 0;
 VAR_8 = (FUNC_7(VAR_1, &VAR_7->flag) ? VAR_4 : VAR_3) | 0x10;
 FUNC_5(VAR_7, ((void*)0), VAR_8, VAR_0);
 FUNC_3(&VAR_7->t203, 1);
 FUNC_4(VAR_7, 1);
 FUNC_6(VAR_2, &VAR_7->flag);
 FUNC_1(VAR_7);
 FUNC_2(VAR_6, VAR_5);
}
