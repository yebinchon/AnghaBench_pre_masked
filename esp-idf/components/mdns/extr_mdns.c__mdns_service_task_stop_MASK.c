
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int portTickType ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ mdns_action_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int action_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__**,int ) ;

__attribute__((used)) static esp_err_t FUNC_5(void)
{
    FUNC_0();
    if (VAR_4) {
        mdns_action_t VAR_7;
        mdns_action_t * VAR_8 = &VAR_7;
        VAR_7.type = VAR_0;
        if (FUNC_4(VAR_2->action_queue, &VAR_8, (portTickType)0) != VAR_5) {
            FUNC_3(VAR_4);
            VAR_4 = ((void*)0);
        }
        while (VAR_4) {
            FUNC_2(10 / VAR_6);
        }
    }
    FUNC_1(VAR_3);
    VAR_3 = ((void*)0);
    return VAR_1;
}
