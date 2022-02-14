
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* uus1_data; scalar_t__ remote_operation; scalar_t__ invoke_id; } ;
struct TYPE_4__ {TYPE_1__ ni1; } ;
struct l3_process {TYPE_2__ prot; } ;
struct PStack {int dummy; } ;


 struct l3_process* FUNC_0 (struct PStack*,int) ;

__attribute__((used)) static struct l3_process
*FUNC_1(struct PStack *VAR_0, int VAR_1)
{ struct l3_process *VAR_2;

   if (!(VAR_2 = FUNC_0(VAR_0, VAR_1)))
     return(((void*)0));

   VAR_2->prot.ni1.invoke_id = 0;
   VAR_2->prot.ni1.remote_operation = 0;
   VAR_2->prot.ni1.uus1_data[0] = '\0';

   return(VAR_2);
}
