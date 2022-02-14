
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* children; int * bbox; } ;
typedef TYPE_1__ node_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3 (int VAR_4)
{
    node_t* VAR_5;
    int VAR_6;


    if (VAR_4 & VAR_0)
    {
 if (VAR_4 == -1)
     FUNC_2 (0);
 else
     FUNC_2 (VAR_4&(~VAR_0));
 return;
    }

    VAR_5 = &VAR_1[VAR_4];


    VAR_6 = FUNC_1 (VAR_2, VAR_3, VAR_5);


    FUNC_3 (VAR_5->children[VAR_6]);


    if (FUNC_0 (VAR_5->bbox[VAR_6^1]))
 FUNC_3 (VAR_5->children[VAR_6^1]);
}
