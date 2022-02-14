
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bulklen; int flags; scalar_t__ multibulklen; scalar_t__ reqtype; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(client *VAR_2) {
    FUNC_0(VAR_2);
    VAR_2->reqtype = 0;
    VAR_2->multibulklen = 0;
    VAR_2->bulklen = -1;




    VAR_2->flags &= ~VAR_0;
    if (VAR_2->flags & VAR_1) {
        VAR_2->flags |= VAR_0;
        VAR_2->flags &= ~VAR_1;
    }
}
