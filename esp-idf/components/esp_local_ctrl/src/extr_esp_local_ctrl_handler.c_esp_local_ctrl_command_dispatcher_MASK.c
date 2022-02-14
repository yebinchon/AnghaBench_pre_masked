
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {scalar_t__ (* command_handler ) (TYPE_1__*,TYPE_1__*,void**) ;} ;
struct TYPE_7__ {int msg; } ;
typedef TYPE_1__ LocalCtrlMessage ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*,void**) ;

__attribute__((used)) static esp_err_t FUNC_3(LocalCtrlMessage *VAR_4,
                                                   LocalCtrlMessage *VAR_5,
                                                   void **VAR_6)
{
    int VAR_7 = FUNC_1(VAR_4->msg);
    if (VAR_7 < 0) {
        FUNC_0(VAR_2, "Invalid command handler lookup");
        return VAR_0;
    }

    esp_err_t VAR_8 = VAR_3[VAR_7].command_handler(VAR_4, VAR_5, VAR_6);
    if (VAR_8 != VAR_1) {
        FUNC_0(VAR_2, "Error executing command handler");
        return VAR_8;
    }

    return VAR_1;
}
