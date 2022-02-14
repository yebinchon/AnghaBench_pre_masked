
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sym_tcb {TYPE_1__* starget; } ;
struct sym_hcb {struct sym_tcb* target; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sym_hcb *VAR_0, int VAR_1, char *VAR_2, u_char *VAR_3)
{
 struct sym_tcb *VAR_4 = &VAR_0->target[VAR_1];
 FUNC_0(&VAR_4->starget->dev, "%s: ", VAR_2);

 FUNC_2(VAR_3);
 FUNC_1("\n");
}
