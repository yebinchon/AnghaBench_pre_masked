
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * uuid128; int uuid32; int uuid16; } ;
struct TYPE_6__ {scalar_t__ len; TYPE_1__ uu; } ;
typedef TYPE_2__ tBT_UUID ;
typedef int UINT8 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;

BOOLEAN FUNC_3 (tBT_UUID VAR_4, tBT_UUID VAR_5)
{
    UINT8 VAR_6[VAR_0], VAR_7[VAR_0];
    UINT8 *VAR_8, *VAR_9;


    if (VAR_4.len == 0 || VAR_5.len == 0) {
        return VAR_3;
    }


    if (VAR_4.len == VAR_1 && VAR_5.len == VAR_1) {
        return VAR_4.uu.uuid16 == VAR_5.uu.uuid16;
    }


    if (VAR_4.len == VAR_2 && VAR_5.len == VAR_2) {
        return VAR_4.uu.uuid32 == VAR_5.uu.uuid32;
    }


    if (VAR_4.len == VAR_1) {

        FUNC_0(VAR_6, VAR_4.uu.uuid16);
        VAR_8 = VAR_6;
    } else if (VAR_4.len == VAR_2) {
        FUNC_1(VAR_6, VAR_4.uu.uuid32);
        VAR_8 = VAR_6;
    } else {
        VAR_8 = VAR_4.uu.uuid128;
    }

    if (VAR_5.len == VAR_1) {

        FUNC_0(VAR_7, VAR_5.uu.uuid16);
        VAR_9 = VAR_7;
    } else if (VAR_5.len == VAR_2) {

        FUNC_1(VAR_7, VAR_5.uu.uuid32);
        VAR_9 = VAR_7;
    } else {
        VAR_9 = VAR_5.uu.uuid128;
    }

    return (FUNC_2(VAR_8, VAR_9, VAR_0) == 0);
}
