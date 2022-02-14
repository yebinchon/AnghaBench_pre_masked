
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int sec_inst; TYPE_1__* sec; } ;
typedef TYPE_2__ protocomm_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_4__ {scalar_t__ (* close_transport_session ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;

esp_err_t FUNC_2(protocomm_t *VAR_3, uint32_t VAR_4)
{
    if (!VAR_3) {
        return VAR_0;
    }

    if (VAR_3->sec && VAR_3->sec->close_transport_session) {
        esp_err_t VAR_5 = VAR_3->sec->close_transport_session(VAR_3->sec_inst, VAR_4);
        if (VAR_5 != VAR_1) {
            FUNC_0(VAR_2, "Error while closing session with ID: %d", VAR_4);
            return VAR_5;
        }
    }
    return VAR_1;
}
