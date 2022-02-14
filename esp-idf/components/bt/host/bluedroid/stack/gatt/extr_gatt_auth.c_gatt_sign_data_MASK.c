
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int * value; int handle; } ;
typedef TYPE_1__ tGATT_VALUE ;
struct TYPE_9__ {TYPE_4__* p_tcb; scalar_t__ p_attr_buf; } ;
typedef TYPE_2__ tGATT_CLCB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_10__ {int payload_size; int peer_bda; } ;
typedef int BOOLEAN ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static BOOLEAN FUNC_10 (tGATT_CLCB *VAR_8)
{
    tGATT_VALUE *VAR_9 = (tGATT_VALUE *)VAR_8->p_attr_buf;
    UINT8 *VAR_10 = ((void*)0), *VAR_11;
    UINT16 VAR_12 = VAR_8->p_tcb->payload_size;
    BOOLEAN VAR_13 = VAR_1;
    UINT8 *VAR_14;


    FUNC_7(VAR_8->p_tcb, VAR_5);

    VAR_10 = (UINT8 *)FUNC_9((UINT16)(VAR_9->len + 3));

    if (VAR_10 != ((void*)0)) {
        VAR_11 = VAR_10;
        FUNC_3(VAR_11, VAR_7);
        FUNC_2(VAR_11, VAR_9->handle);
        FUNC_0(VAR_11, VAR_9->value, VAR_9->len);


        if ((VAR_12 - VAR_2 - 3) < VAR_9->len) {
            VAR_9->len = VAR_12 - VAR_2 - 3;
        }

        VAR_14 = VAR_9->value + VAR_9->len;
        if (FUNC_1(VAR_8->p_tcb->peer_bda,
                                 VAR_10,
                                 (UINT16)(VAR_9->len + 3),
                                 VAR_14)) {
            VAR_9->len += VAR_0;
            FUNC_6(VAR_8->p_tcb, VAR_3);

            FUNC_4(VAR_8, VAR_6);

        } else {
            FUNC_5(VAR_8, VAR_4, ((void*)0));
        }

        FUNC_8(VAR_10);
    }

    return VAR_13;
}
