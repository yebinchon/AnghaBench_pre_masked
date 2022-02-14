
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sl; int jobs_out; int atime; } ;
typedef TYPE_1__ queue ;
struct TYPE_8__ {int flags; int state; } ;
typedef TYPE_2__ job ;
struct TYPE_9__ {int unixtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;

job *FUNC_2(queue *VAR_3, unsigned long *VAR_4) {
    if (FUNC_0(VAR_3->sl) == 0) return ((void*)0);
    job *VAR_5 = FUNC_1(VAR_3->sl);
    VAR_5->state = VAR_1;
    VAR_5->flags |= VAR_0;
    VAR_3->atime = VAR_2.unixtime;
    VAR_3->jobs_out++;
    if (VAR_4) *VAR_4 = FUNC_0(VAR_3->sl);
    return VAR_5;
}
