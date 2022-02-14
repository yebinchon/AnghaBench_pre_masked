
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int initoff; } ;
typedef TYPE_1__ Node ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
    Node *VAR_2 = *(Node **)VAR_0;
    Node *VAR_3 = *(Node **)VAR_1;
    return VAR_2->initoff - VAR_3->initoff;
}
