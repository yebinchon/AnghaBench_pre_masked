
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__** kids; scalar_t__ copy; } ;
struct TYPE_15__ {TYPE_6__ x; TYPE_2__** syms; } ;
struct TYPE_13__ {TYPE_4__** syms; } ;
struct TYPE_11__ {scalar_t__ name; } ;
struct TYPE_12__ {TYPE_3__ x; } ;
struct TYPE_9__ {scalar_t__ name; } ;
struct TYPE_10__ {TYPE_1__ x; } ;
typedef TYPE_7__* Node ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(Node VAR_1) {
 return VAR_1->x.copy
 && VAR_1->syms[VAR_0]->x.name == VAR_1->x.kids[0]->syms[VAR_0]->x.name;
}
