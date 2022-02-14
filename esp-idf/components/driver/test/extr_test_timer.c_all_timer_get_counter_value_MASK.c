
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(uint64_t VAR_5, bool VAR_6,
                                        uint64_t *VAR_7)
{
    esp_err_t VAR_8;
    uint64_t VAR_9;
    VAR_8 = FUNC_1(VAR_3, VAR_1, &VAR_9);
    FUNC_0(VAR_8 == VAR_0);
    if (VAR_6 == 1) {
        FUNC_0(VAR_5 == VAR_9);
    } else {
        FUNC_0(VAR_5 != VAR_9);
        if (VAR_7 != ((void*)0)) {
            VAR_7[0] = VAR_9;
        }
    }
    VAR_8 = FUNC_1(VAR_3, VAR_2, &VAR_9);
    FUNC_0(VAR_8 == VAR_0);
    if (VAR_6) {
        FUNC_0(VAR_5 == VAR_9);
    } else {
        FUNC_0(VAR_5 != VAR_9);
        if (VAR_7 != ((void*)0)) {
            VAR_7[1] = VAR_9;
        }
    }
    VAR_8 = FUNC_1(VAR_4, VAR_1, &VAR_9);
    FUNC_0(VAR_8 == VAR_0);
    if (VAR_6) {
        FUNC_0(VAR_5 == VAR_9);
    } else {
        FUNC_0(VAR_5 != VAR_9);
        if (VAR_7 != ((void*)0)) {
            VAR_7[2] = VAR_9;
        }
    }
    VAR_8 = FUNC_1(VAR_4, VAR_2, &VAR_9);
    FUNC_0(VAR_8 == VAR_0);
    if (VAR_6) {
        FUNC_0(VAR_5 == VAR_9);
    } else {
        FUNC_0(VAR_5 != VAR_9);
        if (VAR_7 != ((void*)0)) {
            VAR_7[3] = VAR_9;
        }
    }
}
