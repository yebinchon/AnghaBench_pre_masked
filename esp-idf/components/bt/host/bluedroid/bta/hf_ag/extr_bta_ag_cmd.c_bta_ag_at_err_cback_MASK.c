
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int app_id; int handle; } ;
struct TYPE_10__ {scalar_t__* str; scalar_t__ num; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_AG_VAL ;
struct TYPE_11__ {int features; int app_id; } ;
typedef TYPE_3__ tBTA_AG_SCB ;
typedef int tBTA_AG ;
struct TYPE_12__ {int (* p_cback ) (int ,int *) ;} ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__*,int,char*,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__ VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(tBTA_AG_SCB *VAR_5, BOOLEAN VAR_6, char *VAR_7)
{
    tBTA_AG_VAL VAR_8;

    if(VAR_6 && (!FUNC_5(VAR_7))) {
        FUNC_0("Empty AT cmd string received");
        FUNC_4(VAR_5);
        return;
    }


    if (VAR_6 && (VAR_5->features & VAR_3)) {
        VAR_8.hdr.handle = FUNC_2(VAR_5);
        VAR_8.hdr.app_id = VAR_5->app_id;
        VAR_8.num = 0;
        FUNC_1(VAR_8.str, sizeof(VAR_8.str), VAR_7, VAR_0);
        VAR_8.str[VAR_0] = 0;
        (*VAR_4.p_cback)(VAR_1, (tBTA_AG *) &VAR_8);
    } else {
        FUNC_3(VAR_5, VAR_2);
    }
}
