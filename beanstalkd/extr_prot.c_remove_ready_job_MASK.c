
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int urgent_ct; } ;
struct TYPE_8__ {scalar_t__ state; scalar_t__ pri; } ;
struct TYPE_11__ {TYPE_2__* tube; TYPE_1__ r; int heap_index; } ;
struct TYPE_10__ {int urgent_ct; } ;
struct TYPE_9__ {TYPE_3__ stat; int ready; } ;
typedef TYPE_4__ Job ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_7__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static Job *
FUNC_1(Job *VAR_4)
{
    if (!VAR_4 || VAR_4->r.state != VAR_0)
        return ((void*)0);
    FUNC_0(&VAR_4->tube->ready, VAR_4->heap_index);
    VAR_3--;
    if (VAR_4->r.pri < VAR_1) {
        VAR_2.urgent_ct--;
        VAR_4->tube->stat.urgent_ct--;
    }
    return VAR_4;
}
