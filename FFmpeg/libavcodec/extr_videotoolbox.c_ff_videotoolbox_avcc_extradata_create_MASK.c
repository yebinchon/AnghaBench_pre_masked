
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int * sps; } ;
typedef TYPE_5__ VTContext ;
struct TYPE_15__ {TYPE_6__* priv_data; TYPE_1__* internal; } ;
struct TYPE_12__ {TYPE_3__* sps; TYPE_2__* pps; } ;
struct TYPE_14__ {TYPE_4__ ps; } ;
struct TYPE_11__ {int data_size; int* data; } ;
struct TYPE_10__ {int data_size; int* data; } ;
struct TYPE_9__ {TYPE_5__* hwaccel_priv_data; } ;
typedef TYPE_6__ H264Context ;
typedef int * CFDataRef ;
typedef TYPE_7__ AVCodecContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 int VAR_0 ;
 int FUNC_6 (int *,int*,int) ;

CFDataRef FUNC_7(AVCodecContext *VAR_1)
{
    VTContext *VAR_2 = VAR_1->internal->hwaccel_priv_data;
    H264Context *VAR_3 = VAR_1->priv_data;
    CFDataRef VAR_4 = ((void*)0);
    uint8_t *VAR_5;
    int VAR_6 = 6 + 2 + VAR_3->ps.sps->data_size + 3 + VAR_3->ps.pps->data_size;
    uint8_t *VAR_7 = FUNC_5(VAR_6);
    if (!VAR_7)
        return ((void*)0);

    VAR_5 = VAR_7;

    FUNC_0(VAR_5 + 0, 1);
    FUNC_0(VAR_5 + 1, VAR_3->ps.sps->data[1]);
    FUNC_0(VAR_5 + 2, VAR_3->ps.sps->data[2]);
    FUNC_0(VAR_5 + 3, VAR_3->ps.sps->data[3]);
    FUNC_0(VAR_5 + 4, 0xff);
    FUNC_0(VAR_5 + 5, 0xe1);
    FUNC_1(VAR_5 + 6, VAR_3->ps.sps->data_size);
    FUNC_6(VAR_5 + 8, VAR_3->ps.sps->data, VAR_3->ps.sps->data_size);
    VAR_5 += 8 + VAR_3->ps.sps->data_size;
    FUNC_0(VAR_5 + 0, 1);
    FUNC_1(VAR_5 + 1, VAR_3->ps.pps->data_size);
    FUNC_6(VAR_5 + 3, VAR_3->ps.pps->data, VAR_3->ps.pps->data_size);

    VAR_5 += 3 + VAR_3->ps.pps->data_size;
    FUNC_3(VAR_5 - VAR_7 == VAR_6);



    if (VAR_2)
        FUNC_6(VAR_2->sps, VAR_3->ps.sps->data + 1, 3);

    VAR_4 = FUNC_2(VAR_0, VAR_7, VAR_6);
    FUNC_4(VAR_7);
    return VAR_4;
}
