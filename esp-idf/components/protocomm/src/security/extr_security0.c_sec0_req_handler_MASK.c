
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ssize_t ;
typedef int protocomm_security_pop_t ;
typedef int protocomm_security_handle_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_12__ {scalar_t__ sec_ver; } ;
struct TYPE_11__ {scalar_t__ ver; } ;
typedef TYPE_1__ SessionData ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_10__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,TYPE_1__*,int const*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_8 (int *,int ,int const*) ;

__attribute__((used)) static esp_err_t FUNC_9(protocomm_security_handle_t VAR_6,
                                  const protocomm_security_pop_t *VAR_7,
                                  uint32_t VAR_8,
                                  const uint8_t *VAR_9, ssize_t VAR_10,
                                  uint8_t **VAR_11, ssize_t *VAR_12,
                                  void *VAR_13)
{
    SessionData *VAR_14;
    SessionData VAR_15;
    esp_err_t VAR_16;

    VAR_14 = FUNC_8(((void*)0), VAR_10, VAR_9);
    if (!VAR_14) {
        FUNC_0(VAR_4, "Unable to unpack setup_req");
        return VAR_0;
    }
    if (VAR_14->sec_ver != VAR_5) {
        FUNC_0(VAR_4, "Security version mismatch. Closing connection");
        FUNC_4(VAR_14, ((void*)0));
        return VAR_0;
    }

    FUNC_6(&VAR_15);
    VAR_16 = FUNC_2(VAR_8, VAR_14, &VAR_15, VAR_7);
    if (VAR_16 != VAR_3) {
        FUNC_0(VAR_4, "Session setup error %d", VAR_16);
        FUNC_4(VAR_14, ((void*)0));
        return VAR_2;
    }

    VAR_15.sec_ver = VAR_14->sec_ver;
    FUNC_4(VAR_14, ((void*)0));

    *VAR_12 = FUNC_5(&VAR_15);
    *VAR_11 = (uint8_t *) FUNC_1(*VAR_12);
    if (!*VAR_11) {
        FUNC_0(VAR_4, "System out of memory");
        return VAR_1;
    }
    FUNC_7(&VAR_15, *VAR_11);

    FUNC_3(VAR_8, &VAR_15);
    return VAR_3;
}
