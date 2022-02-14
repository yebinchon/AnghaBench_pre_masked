
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sl; } ;
typedef TYPE_1__ queue ;
struct TYPE_7__ {scalar_t__ state; int id; int queue; } ;
typedef TYPE_2__ job ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;

int FUNC_4(job *VAR_6) {
    if (VAR_6->state != VAR_4) return VAR_0;
    queue *VAR_7 = FUNC_0(VAR_6->queue);
    if (!VAR_7) return VAR_0;
    FUNC_1(FUNC_3(VAR_7->sl,VAR_6));
    VAR_6->state = VAR_3;
    FUNC_2(VAR_5,"DE-QUEUED %.*s", VAR_2, VAR_6->id);
    return VAR_1;
}
