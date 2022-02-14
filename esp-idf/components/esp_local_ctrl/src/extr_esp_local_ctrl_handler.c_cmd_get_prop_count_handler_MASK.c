
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_8__ {size_t count; int status; } ;
struct TYPE_7__ {TYPE_2__* resp_get_prop_count; int payload_case; } ;
typedef TYPE_1__ LocalCtrlMessage ;


 int FUNC_0 (int ,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static esp_err_t FUNC_5(LocalCtrlMessage *VAR_5,
                                            LocalCtrlMessage *VAR_6, void **VAR_7)
{
    FUNC_1(VAR_2, VAR_4);
    FUNC_4(VAR_4);

    size_t VAR_8 = 0;
    VAR_4->status = FUNC_2(FUNC_3(&VAR_8));
    VAR_4->count = VAR_8;
    VAR_6->payload_case = VAR_1;
    VAR_6->resp_get_prop_count = VAR_4;
    FUNC_0(VAR_3, "Got properties count %d", VAR_8);
    return VAR_0;
}
