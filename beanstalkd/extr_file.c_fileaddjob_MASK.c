
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* fprev; struct TYPE_6__* fnext; TYPE_2__* file; } ;
struct TYPE_7__ {TYPE_1__ jlist; } ;
typedef TYPE_1__ Job ;
typedef TYPE_2__ File ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(File *VAR_0, Job *VAR_1)
{
    Job *VAR_2;

    VAR_2 = &VAR_0->jlist;
    if (!VAR_2->fprev) VAR_2->fprev = VAR_2;
    VAR_1->file = VAR_0;
    VAR_1->fprev = VAR_2->fprev;
    VAR_1->fnext = VAR_2;
    VAR_2->fprev->fnext = VAR_1;
    VAR_2->fprev = VAR_1;
    FUNC_0(VAR_0);
}
