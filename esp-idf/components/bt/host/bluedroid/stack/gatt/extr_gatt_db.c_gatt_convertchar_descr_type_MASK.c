
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int uuid16; } ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_9__ {TYPE_2__ uu; TYPE_1__ member_1; int member_0; } ;
typedef TYPE_3__ tBT_UUID ;
typedef int UINT8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_3__,TYPE_3__) ;

UINT8 FUNC_1(tBT_UUID *VAR_10)
{
    tBT_UUID VAR_11 = {VAR_9, {VAR_8}};

    if (FUNC_0(VAR_11, * VAR_10)) {
        return VAR_2;
    }

    VAR_11.uu.uuid16 ++;
    if (FUNC_0(VAR_11, * VAR_10)) {
        return VAR_6;
    }

    VAR_11.uu.uuid16 ++;
    if (FUNC_0(VAR_11, * VAR_10)) {
        return VAR_1;
    }

    VAR_11.uu.uuid16 ++;
    if (FUNC_0(VAR_11, * VAR_10)) {
        return VAR_4;
    }

    VAR_11.uu.uuid16 ++;
    if (FUNC_0(VAR_11, * VAR_10)) {
        return VAR_3;
    }

    VAR_11.uu.uuid16 ++;
    if (FUNC_0(VAR_11, * VAR_10)) {
        return VAR_0;
    }

    VAR_11.uu.uuid16 ++;
    if (FUNC_0(VAR_11, * VAR_10)) {
        return VAR_7;
    }


    return VAR_5;
}
