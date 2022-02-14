
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* read_mode; } ;
typedef TYPE_1__ esp_flash_t ;
typedef void* esp_flash_io_mode_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,int) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_8(esp_flash_t* VAR_6)
{
    bool VAR_7;
    if (VAR_6 == ((void*)0)) {
        VAR_6 = VAR_5;
    }
    esp_flash_io_mode_t VAR_8 = VAR_6->read_mode;
    esp_err_t VAR_9 = FUNC_6(VAR_6, &VAR_7);
    FUNC_4(VAR_9);

    bool VAR_10 = FUNC_5(VAR_6);

    for (int VAR_11 = 0; VAR_11 < 4; VAR_11 ++) {
        FUNC_2(VAR_4, "write qe: %d->%d", VAR_7, !VAR_7);
        VAR_7 = !VAR_7;
        VAR_6->read_mode = VAR_7? VAR_2: VAR_3;
        VAR_9 = FUNC_7(VAR_6, VAR_7);
        if (VAR_10 && !VAR_7 && VAR_9 == VAR_0) {

            VAR_9 = VAR_1;
        }
        FUNC_4(VAR_9);

        bool VAR_12;
        VAR_9 = FUNC_6(VAR_6, &VAR_12);
        FUNC_4(VAR_9);
        FUNC_0(VAR_4, "qe read: %d", VAR_12);
        if (VAR_7 != VAR_12 && !VAR_7 && VAR_10) {
            FUNC_1(VAR_4, "cannot clear QE bit, this may be normal for Winbond chips.");
            VAR_6->read_mode = VAR_8;
            return;
        }
        FUNC_3(VAR_7, VAR_12);
    }

    VAR_6->read_mode = VAR_8;
}
