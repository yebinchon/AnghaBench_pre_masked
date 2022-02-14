
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int protocomm_security_pop_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,char*,int ,void*) ;
 int * FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,char*,int *,int const*) ;
 scalar_t__ FUNC_4 (int *,char*,int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static esp_err_t FUNC_5(uint8_t VAR_10, const protocomm_security_pop_t *VAR_11)
{
    VAR_6 = FUNC_2();
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_2, "Failed to create new protocomm instance");
        return VAR_0;
    }

    if (VAR_10 == 0) {
        if (FUNC_3(VAR_6, "test-sec", &VAR_4, ((void*)0)) != VAR_1) {
            FUNC_0(VAR_2, "Failed to set Security0");
            return VAR_0;
        }
        VAR_9 = &VAR_4;
    } else if (VAR_10 == 1) {
        if (FUNC_3(VAR_6, "test-sec", &VAR_5, VAR_11) != VAR_1) {
            FUNC_0(VAR_2, "Failed to set Security1");
            return VAR_0;
        }
        VAR_9 = &VAR_5;
    }

    if (FUNC_4(VAR_6, "test-ver", VAR_3) != VAR_1) {
        FUNC_0(VAR_2, "Failed to set version");
        return VAR_0;
    }

    if (FUNC_1(VAR_6, "test-ep",
                               VAR_8,
                               (void *) &VAR_7) != VAR_1) {
        FUNC_0(VAR_2, "Failed to set test-ep endpoint handler");
        return VAR_0;
    }
    return VAR_1;
}
