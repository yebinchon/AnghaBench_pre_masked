
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__** syms; } ;
struct TYPE_5__ {scalar_t__ wildcard; } ;
struct TYPE_6__ {TYPE_1__ x; } ;
typedef TYPE_3__* Node ;


 int VAR_0 ;
 size_t VAR_1 ;

int FUNC_0(Node VAR_2) {
 return VAR_2->syms[VAR_1]->x.wildcard ? 0 : VAR_0;
}
