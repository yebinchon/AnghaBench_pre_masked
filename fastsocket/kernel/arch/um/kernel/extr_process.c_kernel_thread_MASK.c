
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* proc ) (void*) ;void* arg; } ;
struct TYPE_7__ {TYPE_1__ thread; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct TYPE_9__ {int regs; TYPE_3__ request; } ;
struct TYPE_10__ {TYPE_4__ thread; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_0 (unsigned long,int ,int *,int ,int *,int *) ;

int FUNC_1(int (*VAR_3)(void *), void * VAR_4, unsigned long VAR_5)
{
 int VAR_6;

 VAR_2->thread.request.u.thread.proc = VAR_3;
 VAR_2->thread.request.u.thread.arg = VAR_4;
 VAR_6 = FUNC_0(VAR_1 | VAR_0 | VAR_5, 0,
        &VAR_2->thread.regs, 0, ((void*)0), ((void*)0));
 return VAR_6;
}
