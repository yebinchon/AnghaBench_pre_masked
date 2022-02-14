
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_nodes; int nodes_list; } ;
typedef scalar_t__ FTC_Node ;
typedef int FTC_MruNode ;
typedef TYPE_1__* FTC_Manager ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
  FUNC_1( FTC_Node VAR_0,
                       FTC_Manager VAR_1 )
  {
    void *VAR_2 = &VAR_1->nodes_list;


    FUNC_0( (FTC_MruNode*)VAR_2,
                        (FTC_MruNode)VAR_0 );
    VAR_1->num_nodes--;
  }
