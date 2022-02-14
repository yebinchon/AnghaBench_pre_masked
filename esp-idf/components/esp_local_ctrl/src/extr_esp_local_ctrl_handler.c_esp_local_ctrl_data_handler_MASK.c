
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ssize_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_10__ {scalar_t__ msg; } ;
typedef TYPE_1__ LocalCtrlMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,void**) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*,void**) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_8 (int *,int ,int const*) ;
 scalar_t__ FUNC_9 (int ) ;

esp_err_t FUNC_10(uint32_t VAR_6, const uint8_t *VAR_7, ssize_t VAR_8,
                                      uint8_t **VAR_9, ssize_t *VAR_10, void *VAR_11)
{
    void *VAR_12 = ((void*)0);
    LocalCtrlMessage *VAR_13 = FUNC_8(((void*)0), VAR_8, VAR_7);
    if (!VAR_13) {
        FUNC_0(VAR_5, "Unable to unpack payload data");
        return VAR_0;
    }

    LocalCtrlMessage VAR_14;
    FUNC_6(&VAR_14);
    VAR_14.msg = VAR_13->msg + 1;

    esp_err_t VAR_15 = FUNC_3(VAR_13, &VAR_14, &VAR_12);
    if (VAR_15 != VAR_4) {
        FUNC_0(VAR_5, "command dispatcher failed");
        FUNC_2(&VAR_14, &VAR_12);
        FUNC_4(VAR_13, ((void*)0));
        return VAR_2;
    }

    FUNC_4(VAR_13, ((void*)0));

    *VAR_10 = FUNC_5(&VAR_14);
    if (*VAR_10 <= 0) {
        FUNC_0(VAR_5, "Invalid encoding for response");
        FUNC_2(&VAR_14, &VAR_12);
        return VAR_2;
    }

    *VAR_9 = (uint8_t *) FUNC_9(*VAR_10);
    if (!*VAR_9) {
        FUNC_0(VAR_5, "System out of memory");
        FUNC_2(&VAR_14, &VAR_12);
        return VAR_1;
    }

    FUNC_7(&VAR_14, *VAR_9);
    FUNC_2(&VAR_14, &VAR_12);
    FUNC_1(VAR_5, *VAR_9, *VAR_10, VAR_3);
    return VAR_4;
}
