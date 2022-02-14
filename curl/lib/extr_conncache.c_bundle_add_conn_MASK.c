
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {struct connectbundle* bundle; int bundle_node; } ;
struct TYPE_2__ {int tail; } ;
struct connectbundle {int num_connections; TYPE_1__ conn_list; } ;


 int FUNC_0 (TYPE_1__*,int ,struct connectdata*,int *) ;

__attribute__((used)) static void FUNC_1(struct connectbundle *VAR_0,
                            struct connectdata *VAR_1)
{
  FUNC_0(&VAR_0->conn_list, VAR_0->conn_list.tail, VAR_1,
                         &VAR_1->bundle_node);
  VAR_1->bundle = VAR_0;
  VAR_0->num_connections++;
}
