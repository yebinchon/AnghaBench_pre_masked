
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ tGATT_STATUS ;
struct TYPE_7__ {int handle; int offset; scalar_t__ is_long; } ;
typedef TYPE_2__ tGATT_READ_REQ ;
struct TYPE_6__ {int value; scalar_t__ len; int handle; int offset; } ;
struct TYPE_8__ {TYPE_1__ attr_value; } ;
typedef TYPE_3__ tGATTS_RSP ;
typedef int tGATTS_REQ_TYPE ;
typedef scalar_t__ UINT16 ;


 scalar_t__ FUNC_0 (int ,scalar_t__*,int **) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,scalar_t__) ;

tGATT_STATUS FUNC_3 (tGATTS_REQ_TYPE VAR_3, tGATT_READ_REQ *VAR_4, tGATTS_RSP *VAR_5)
{
    tGATT_STATUS VAR_6 = VAR_1;
    FUNC_1(VAR_3);

    if (VAR_4->is_long) {
        VAR_5->attr_value.offset = VAR_4->offset;
    }

    VAR_5->attr_value.handle = VAR_4->handle;
    UINT16 VAR_7 = 0;
    uint8_t *VAR_8;
    VAR_6 = FUNC_0(VAR_4->handle, &VAR_7, &VAR_8);
    if(VAR_6 == VAR_2 && VAR_7 > 0 && VAR_8) {
        if(VAR_7 > VAR_0) {
            VAR_7 = VAR_0;
        }
        VAR_5->attr_value.len = VAR_7;
        FUNC_2(VAR_5->attr_value.value, VAR_8, VAR_7);
    }

    return VAR_6;
}
