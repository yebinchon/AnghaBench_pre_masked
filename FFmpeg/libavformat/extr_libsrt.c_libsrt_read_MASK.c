
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int flags; int interrupt_callback; int rw_timeout; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int fd; int eid; } ;
typedef TYPE_2__ SRTContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    SRTContext *VAR_4 = VAR_1->priv_data;
    int VAR_5;

    if (!(VAR_1->flags & VAR_0)) {
        VAR_5 = FUNC_1(VAR_1, VAR_4->eid, VAR_4->fd, 0, VAR_1->rw_timeout, &VAR_1->interrupt_callback);
        if (VAR_5)
            return VAR_5;
    }

    VAR_5 = FUNC_2(VAR_4->fd, VAR_2, VAR_3);
    if (VAR_5 < 0) {
        VAR_5 = FUNC_0(VAR_1);
    }

    return VAR_5;
}
