
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int app_id; int handle; } ;
struct TYPE_9__ {size_t num; scalar_t__* str; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_AG_VAL ;
struct TYPE_10__ {int app_id; } ;
typedef TYPE_3__ tBTA_AG_SCB ;
typedef int tBTA_AG ;
typedef int UINT8 ;
typedef size_t UINT16 ;
struct TYPE_11__ {int (* p_cback ) (int ,int *) ;} ;
typedef scalar_t__ INT16 ;


 int FUNC_0 (char*,size_t,int ,scalar_t__,char*) ;
 int FUNC_1 (scalar_t__*,int,char*,size_t) ;
 size_t VAR_0 ;
 TYPE_6__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(tBTA_AG_SCB *VAR_3, UINT16 VAR_4, UINT8 VAR_5,
                                char *VAR_6, INT16 VAR_7)
{
    tBTA_AG_VAL VAR_8;
    FUNC_0("AT cmd:%d arg_type:%d arg:%d arg:%s", VAR_4, VAR_5, VAR_7, VAR_6);


    FUNC_3(VAR_3);
    VAR_8.hdr.handle = FUNC_2(VAR_3);
    VAR_8.hdr.app_id = VAR_3->app_id;
    VAR_8.num = (UINT16) VAR_7;
    FUNC_1(VAR_8.str, sizeof(VAR_8.str), VAR_6, VAR_0);
    VAR_8.str[VAR_0] = 0;

    (*VAR_1.p_cback)(VAR_2[VAR_4], (tBTA_AG *) &VAR_8);
}
