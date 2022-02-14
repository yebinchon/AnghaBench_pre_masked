
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {int uuid16; } ;
struct TYPE_6__ {TYPE_1__ uuid; } ;
struct TYPE_8__ {int attribute_handle; TYPE_2__ uuid; } ;
struct TYPE_7__ {int remote_bda; } ;


 int FUNC_0 (int ,char*,scalar_t__,int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int ) ;

void FUNC_4(void* VAR_11)
{
    uint16_t VAR_12;
    for(;;) {
        FUNC_2(100 / VAR_9);
        if(FUNC_3(VAR_5, &VAR_12, VAR_8)) {
            if(VAR_6 != ((void*)0)) {
                if(VAR_12 == VAR_2){
                    FUNC_0(VAR_0,"Index = %d,UUID = 0x%04x, handle = %d \n", VAR_12, (VAR_6+VAR_2)->uuid.uuid.uuid16, (VAR_6+VAR_2)->attribute_handle);
                    FUNC_1(VAR_10, VAR_7[VAR_1].remote_bda, (VAR_6+VAR_2)->attribute_handle);
                }else if(VAR_12 == VAR_4){
                    FUNC_0(VAR_0,"Index = %d,UUID = 0x%04x, handle = %d \n", VAR_12, (VAR_6+VAR_4)->uuid.uuid.uuid16, (VAR_6+VAR_4)->attribute_handle);
                    FUNC_1(VAR_10, VAR_7[VAR_1].remote_bda, (VAR_6+VAR_4)->attribute_handle);
                }






            }
        }
    }
}
