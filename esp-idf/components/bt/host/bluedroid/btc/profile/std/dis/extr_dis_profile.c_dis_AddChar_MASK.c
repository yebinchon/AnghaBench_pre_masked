
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int uuid; } ;
typedef TYPE_2__ tDIS_DB_ENTRY ;
typedef int UINT16 ;
struct TYPE_9__ {int enabled; int service_handle; TYPE_2__* dis_attr; } ;
struct TYPE_6__ {int uuid16; } ;
struct TYPE_8__ {TYPE_1__ uu; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_7 ;
 TYPE_3__ VAR_8 ;

void FUNC_2(UINT16 VAR_9)
{


    tDIS_DB_ENTRY *VAR_10 = &VAR_5.dis_attr[0];
    while (VAR_6 != 0 && VAR_7 < VAR_0) {
        VAR_8.uu.uuid16 = VAR_10->uuid = VAR_4[VAR_7];
        FUNC_0(VAR_5.service_handle, &VAR_8, VAR_2,
                               VAR_1);
        VAR_10 ++;
        VAR_7 ++;
        VAR_6 >>= 1;
    }

    FUNC_1(VAR_5.service_handle);
    VAR_5.enabled = VAR_3;
}
