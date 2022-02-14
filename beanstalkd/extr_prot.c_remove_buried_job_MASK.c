
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int buried_ct; } ;
struct TYPE_10__ {scalar_t__ state; } ;
struct TYPE_13__ {TYPE_3__* tube; TYPE_1__ r; } ;
struct TYPE_11__ {int buried_ct; } ;
struct TYPE_12__ {TYPE_2__ stat; } ;
typedef TYPE_4__ Job ;


 scalar_t__ VAR_0 ;
 TYPE_9__ VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static Job *
FUNC_1(Job *VAR_2)
{
    if (!VAR_2 || VAR_2->r.state != VAR_0)
        return ((void*)0);
    VAR_2 = FUNC_0(VAR_2);
    if (VAR_2) {
        VAR_1.buried_ct--;
        VAR_2->tube->stat.buried_ct--;
    }
    return VAR_2;
}
