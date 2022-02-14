
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int ssize_t ;
struct TYPE_15__ {scalar_t__ id; } ;
typedef TYPE_1__ session_t ;
typedef int protocomm_security_pop_t ;
typedef scalar_t__ protocomm_security_handle_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_16__ {scalar_t__ sec_ver; } ;
struct TYPE_14__ {scalar_t__ ver; } ;
typedef TYPE_2__ SessionData ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_13__ VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,TYPE_2__*,TYPE_2__*,int const*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_8 (int *,int ,int const*) ;

__attribute__((used)) static esp_err_t FUNC_9(protocomm_security_handle_t VAR_7,
                                  const protocomm_security_pop_t *VAR_8,
                                  uint32_t VAR_9,
                                  const uint8_t *VAR_10, ssize_t VAR_11,
                                  uint8_t **VAR_12, ssize_t *VAR_13,
                                  void *VAR_14)
{
    session_t *VAR_15 = (session_t *) VAR_7;
    if (!VAR_15) {
        FUNC_0(VAR_5, "Invalid session context data");
        return VAR_0;
    }

    if (VAR_9 != VAR_15->id) {
        FUNC_0(VAR_5, "Invalid session ID : %d (expected %d)", VAR_9, VAR_15->id);
        return VAR_1;
    }

    SessionData *VAR_16;
    SessionData VAR_17;
    esp_err_t VAR_18;

    VAR_16 = FUNC_8(((void*)0), VAR_11, VAR_10);
    if (!VAR_16) {
        FUNC_0(VAR_5, "Unable to unpack setup_req");
        return VAR_0;
    }
    if (VAR_16->sec_ver != VAR_6) {
        FUNC_0(VAR_5, "Security version mismatch. Closing connection");
        FUNC_4(VAR_16, ((void*)0));
        return VAR_0;
    }

    FUNC_6(&VAR_17);
    VAR_18 = FUNC_2(VAR_15, VAR_9, VAR_16, &VAR_17, VAR_8);
    if (VAR_18 != VAR_4) {
        FUNC_0(VAR_5, "Session setup error %d", VAR_18);
        FUNC_4(VAR_16, ((void*)0));
        return VAR_3;
    }

    VAR_17.sec_ver = VAR_16->sec_ver;
    FUNC_4(VAR_16, ((void*)0));

    *VAR_13 = FUNC_5(&VAR_17);
    *VAR_12 = (uint8_t *) FUNC_1(*VAR_13);
    if (!*VAR_12) {
        FUNC_0(VAR_5, "System out of memory");
        return VAR_2;
    }
    FUNC_7(&VAR_17, *VAR_12);

    FUNC_3(VAR_15, VAR_9, &VAR_17);
    return VAR_4;
}
