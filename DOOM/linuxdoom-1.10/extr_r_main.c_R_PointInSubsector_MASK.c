
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int subsector_t ;
struct TYPE_4__ {int* children; } ;
typedef TYPE_1__ node_t ;
typedef int fixed_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

subsector_t*
FUNC_1
( fixed_t VAR_4,
  fixed_t VAR_5 )
{
    node_t* VAR_6;
    int VAR_7;
    int VAR_8;


    if (!VAR_2)
 return VAR_3;

    VAR_8 = VAR_2-1;

    while (! (VAR_8 & VAR_0) )
    {
 VAR_6 = &VAR_1[VAR_8];
 VAR_7 = FUNC_0 (VAR_4, VAR_5, VAR_6);
 VAR_8 = VAR_6->children[VAR_7];
    }

    return &VAR_3[VAR_8 & ~VAR_0];
}
