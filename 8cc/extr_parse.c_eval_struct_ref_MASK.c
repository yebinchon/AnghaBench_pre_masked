
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; TYPE_1__* ty; struct TYPE_6__* struc; } ;
struct TYPE_5__ {int offset; } ;
typedef TYPE_2__ Node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_1(Node *VAR_1, int VAR_2) {
    if (VAR_1->kind == VAR_0)
        return FUNC_1(VAR_1->struc, VAR_1->ty->offset + VAR_2);
    return FUNC_0(VAR_1, ((void*)0)) + VAR_2;
}
