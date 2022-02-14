
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_table {int recv_msg; int inuse; } ;
typedef TYPE_1__* ipmi_smi_t ;
struct TYPE_3__ {struct seq_table* seq_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(ipmi_smi_t VAR_2)
{
 int VAR_3;
 struct seq_table *VAR_4;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = &(VAR_2->seq_table[VAR_3]);
  if (!VAR_4->inuse)
   continue;
  FUNC_0(VAR_4->recv_msg, VAR_0);
 }
}
