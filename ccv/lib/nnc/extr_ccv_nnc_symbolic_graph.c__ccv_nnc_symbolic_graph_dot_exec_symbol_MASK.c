
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cmd; } ;
struct TYPE_5__ {char* name; TYPE_1__ cmd; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_symbol_info_t ;
typedef int FILE ;


 int const VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int const) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static void FUNC_4(const int VAR_1, const ccv_nnc_graph_exec_symbol_info_t* const VAR_2, const int VAR_3, FILE* VAR_4)
{
 if (VAR_3 == VAR_0)
  FUNC_2('{', VAR_4);
 if (VAR_2->name)
  FUNC_3(VAR_2->name, VAR_4);
 else
  FUNC_1(VAR_4, "node%d", VAR_1);
 if (VAR_3 == VAR_0)
 {
  FUNC_3("|Command: ", VAR_4);
  FUNC_3(FUNC_0(VAR_2->cmd.cmd), VAR_4);
  FUNC_2('}', VAR_4);
 }
}
