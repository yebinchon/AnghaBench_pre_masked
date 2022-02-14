
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int order; } ;
struct TYPE_5__ {scalar_t__ max_hints; TYPE_2__* hints; } ;
typedef TYPE_1__* PSH_Hint_Table ;
typedef TYPE_2__* PSH_Hint ;
typedef scalar_t__ FT_UInt ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
  FUNC_1( PSH_Hint_Table VAR_0 )
  {
    FT_UInt VAR_1 = VAR_0->max_hints;
    PSH_Hint VAR_2 = VAR_0->hints;


    for ( ; VAR_1 > 0; VAR_1--, VAR_2++ )
    {
      FUNC_0( VAR_2 );
      VAR_2->order = -1;
    }
  }
