
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ handle; scalar_t__ len; scalar_t__ value; scalar_t__ offset; } ;
typedef TYPE_1__ tGATT_VALUE ;
typedef int tGATT_TCB ;
typedef int tGATT_EXEC_FLAG ;
struct TYPE_7__ {scalar_t__ counter; int status; scalar_t__ p_attr_buf; } ;
typedef TYPE_2__ tGATT_CLCB ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;

BOOLEAN FUNC_3(tGATT_TCB *VAR_6, tGATT_CLCB *VAR_7, tGATT_VALUE *VAR_8)
{
    tGATT_VALUE *VAR_9 = (tGATT_VALUE *)VAR_7->p_attr_buf;
    BOOLEAN VAR_10 = VAR_0;
    tGATT_EXEC_FLAG VAR_11 = VAR_3;

    FUNC_0("gatt_check_write_long_terminate ");

    if (VAR_8 != ((void*)0)) {
        if (VAR_8->handle != VAR_9->handle ||
                VAR_8->len != VAR_7->counter ||
                FUNC_2(VAR_8->value, VAR_9->value + VAR_9->offset, VAR_8->len)) {

            VAR_7->status = VAR_1;
            VAR_11 = VAR_2;
            VAR_10 = VAR_5;
        } else {
            VAR_7->status = VAR_4;

            if ((VAR_9->offset += VAR_8->len) >= VAR_9->len) {
                VAR_10 = VAR_5;
            }
        }
    }
    if (VAR_10) {
        FUNC_1 (VAR_6, VAR_7, VAR_11);
        return VAR_5;
    }
    return VAR_0;
}
