
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ fd; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {int clients_pending_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_2__ VAR_6 ;

int FUNC_2(client *VAR_7) {

    if (VAR_7->flags & (VAR_2|VAR_3)) return VAR_4;
    if (VAR_7->flags & VAR_0) return VAR_4;
    if (VAR_7->fd <= 0) return VAR_4;





    if (!FUNC_0(VAR_7) &&
        !(VAR_7->flags & VAR_1))
    {






        VAR_7->flags |= VAR_1;
        FUNC_1(VAR_6.clients_pending_write,VAR_7);
    }


    return VAR_5;
}
