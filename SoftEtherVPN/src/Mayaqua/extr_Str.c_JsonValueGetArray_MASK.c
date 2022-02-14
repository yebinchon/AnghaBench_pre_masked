
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * array; } ;
struct TYPE_6__ {TYPE_1__ value; } ;
typedef TYPE_2__ JSON_VALUE ;
typedef int JSON_ARRAY ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

JSON_ARRAY * FUNC_1(JSON_VALUE *VAR_1) {
 return FUNC_0(VAR_1) == VAR_0 ? VAR_1->value.array : ((void*)0);
}
