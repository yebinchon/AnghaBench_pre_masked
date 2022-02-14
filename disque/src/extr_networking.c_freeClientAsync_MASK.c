
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {int clients_to_close; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_2__ VAR_1 ;

void FUNC_1(client *VAR_2) {
    if (VAR_2->flags & VAR_0) return;
    VAR_2->flags |= VAR_0;
    FUNC_0(VAR_1.clients_to_close,VAR_2);
}
