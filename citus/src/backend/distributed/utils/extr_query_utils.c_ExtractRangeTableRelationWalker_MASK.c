
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int walkerMode; int ** rangeTableList; } ;
typedef int Node ;
typedef int List ;
typedef TYPE_1__ ExtractRangeTableWalkerContext ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

bool
FUNC_1(Node *VAR_1, List **VAR_2)
{
 ExtractRangeTableWalkerContext VAR_3;

 VAR_3.rangeTableList = VAR_2;
 VAR_3.walkerMode = VAR_0;

 return FUNC_0(VAR_1, &VAR_3);
}
