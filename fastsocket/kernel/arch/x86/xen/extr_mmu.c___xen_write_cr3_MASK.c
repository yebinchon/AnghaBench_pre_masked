
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multicall_space {int mc; struct mmuext_op* args; } ;
struct TYPE_2__ {unsigned long mfn; } ;
struct mmuext_op {TYPE_1__ arg1; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct mmuext_op*,int,int *,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 struct multicall_space FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned long) ;
 unsigned long FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,void*) ;

__attribute__((used)) static void FUNC_7(bool VAR_5, unsigned long VAR_6)
{
 struct mmuext_op *VAR_7;
 struct multicall_space VAR_8;
 unsigned long VAR_9;

 if (VAR_6)
  VAR_9 = FUNC_5(FUNC_1(VAR_6));
 else
  VAR_9 = 0;

 FUNC_2(VAR_9 == 0 && VAR_5);

 VAR_8 = FUNC_3(sizeof(*VAR_7));

 VAR_7 = VAR_8.args;
 VAR_7->cmd = VAR_5 ? VAR_1 : VAR_2;
 VAR_7->arg1.mfn = VAR_9;

 FUNC_0(VAR_8.mc, VAR_7, 1, ((void*)0), VAR_0);

 if (VAR_5) {
  FUNC_4(VAR_4, VAR_6);



  FUNC_6(VAR_3, (void *)VAR_6);
 }
}
