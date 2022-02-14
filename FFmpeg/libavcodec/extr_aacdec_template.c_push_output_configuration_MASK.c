
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* oc; } ;
struct TYPE_4__ {scalar_t__ status; } ;
typedef TYPE_2__ AACContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(AACContext *VAR_2) {
    int VAR_3 = 0;

    if (VAR_2->oc[1].status == VAR_0 || VAR_2->oc[0].status == VAR_1) {
        VAR_2->oc[0] = VAR_2->oc[1];
        VAR_3 = 1;
    }
    VAR_2->oc[1].status = VAR_1;
    return VAR_3;
}
