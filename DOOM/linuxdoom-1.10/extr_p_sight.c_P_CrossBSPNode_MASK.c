
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* children; } ;
typedef TYPE_1__ node_t ;
typedef int divline_t ;
typedef int boolean ;
struct TYPE_5__ {int y; int x; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *) ;
 TYPE_1__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

boolean FUNC_2 (int VAR_5)
{
    node_t* VAR_6;
    int VAR_7;

    if (VAR_5 & VAR_0)
    {
 if (VAR_5 == -1)
     return FUNC_0 (0);
 else
     return FUNC_0 (VAR_5&(~VAR_0));
    }

    VAR_6 = &VAR_1[VAR_5];


    VAR_7 = FUNC_1 (VAR_2.x, VAR_2.y, (divline_t *)VAR_6);
    if (VAR_7 == 2)
 VAR_7 = 0;


    if (!FUNC_2 (VAR_6->children[VAR_7]) )
 return 0;


    if (VAR_7 == FUNC_1 (VAR_3, VAR_4,(divline_t *)VAR_6))
    {

 return 1;
    }


    return FUNC_2 (VAR_6->children[VAR_7^1]);
}
