
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ sec_ver; int id; } ;
typedef TYPE_1__ session_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_5__ {scalar_t__ (* init ) (int *) ;scalar_t__ (* new_transport_session ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static esp_err_t FUNC_4(session_t *VAR_8)
{
    if (VAR_8->sec_ver == 0) {
        return VAR_3;
    }

    if (!VAR_7) {
        return VAR_0;
    }

    if (VAR_7->init && (VAR_7->init(&VAR_5) != VAR_3)) {
        return VAR_1;
    }

    uint32_t VAR_9 = VAR_8->id;
    if (VAR_7->new_transport_session &&
        (VAR_7->new_transport_session(VAR_5, VAR_9) != VAR_3)) {
        FUNC_0(VAR_4, "Failed to launch new transport session");
        return VAR_2;
    }

    if (FUNC_1(VAR_6, VAR_9) != VAR_3) {
        FUNC_0(VAR_4, "Failed to open new protocomm session");
        return VAR_2;
    }
    return VAR_3;
}
