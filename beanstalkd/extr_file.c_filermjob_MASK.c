
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* w; } ;
struct TYPE_12__ {scalar_t__ walused; TYPE_5__* file; TYPE_2__* fprev; TYPE_3__* fnext; } ;
struct TYPE_11__ {TYPE_2__* fprev; } ;
struct TYPE_10__ {TYPE_3__* fnext; } ;
struct TYPE_9__ {int alive; } ;
typedef TYPE_4__ Job ;
typedef TYPE_5__ File ;


 int FUNC_0 (TYPE_5__*) ;

void
FUNC_1(File *VAR_0, Job *VAR_1)
{
    if (!VAR_0) return;
    if (VAR_0 != VAR_1->file) return;
    VAR_1->fnext->fprev = VAR_1->fprev;
    VAR_1->fprev->fnext = VAR_1->fnext;
    VAR_1->fnext = 0;
    VAR_1->fprev = 0;
    VAR_1->file = ((void*)0);
    VAR_0->w->alive -= VAR_1->walused;
    VAR_1->walused = 0;
    FUNC_0(VAR_0);
}
