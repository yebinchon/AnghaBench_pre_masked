
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_4__ {float max; float min; scalar_t__ opt1; } ;
struct TYPE_5__ {scalar_t__ timestamp; scalar_t__ param_units; int * param_key; TYPE_1__ param_opts; int * instance_ptr; int member_0; } ;
typedef TYPE_2__ characteristic_descriptor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,char*,char*,int,char*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int,void*) ;
 int FUNC_8 (int,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void *VAR_6)
{
    float VAR_7;
    uint64_t VAR_8 = 0;
    uint16_t VAR_9 = 0;
    bool VAR_10 = 0;
    bool VAR_11 = 0;
    characteristic_descriptor_t VAR_12 = { 0 };

    while (1) {
        VAR_10 = 0;
        for (int VAR_13 = 0; VAR_13 < (VAR_1); VAR_13++)
        {

            FUNC_0(FUNC_6(VAR_13, &VAR_12));
            FUNC_3(VAR_12.param_key != ((void*)0));
            FUNC_3(VAR_12.instance_ptr != ((void*)0));

            VAR_8 = FUNC_5();
            VAR_7 = *(float*)VAR_12.instance_ptr;

            if (((VAR_7 > VAR_12.param_opts.max) ||
                    (VAR_7 < VAR_12.param_opts.min)) &&
                    (VAR_13 != VAR_0)) {
                VAR_10 = 1;
            }
            if (VAR_8 > (VAR_12.timestamp + VAR_3)) {


                VAR_7 = 0;
                esp_err_t VAR_14 = FUNC_7(VAR_13, (void*)&VAR_7);
                if (VAR_14 != VAR_2) {
                    FUNC_1(VAR_4, "Update failed for cid: %u, %s(%s) = %d, %s",
                                                (uint16_t)VAR_13,
                                                (char*)VAR_12.param_key,
                                                (char*)VAR_12.param_units,
                                                *(int*)VAR_12.instance_ptr,
                                                (char*)FUNC_4(VAR_14));
                } else {

                    if (VAR_13 == VAR_0) {

                        VAR_11 = (*(uint16_t*)(VAR_12.instance_ptr)
                                            & (uint16_t)(VAR_12.param_opts.opt1));
                        const char* VAR_15 = VAR_11 ? "ON" : "OFF";
                        FUNC_2(VAR_4, "cid: %u, (%s) = %s", (uint16_t)VAR_13,
                                                    (char*)VAR_12.param_key,
                                                    (const char*)VAR_15);
                    } else {

                        FUNC_2(VAR_4, "cid: %u, %s(%s) = %.2f", (uint16_t)VAR_13,
                                                (char*)VAR_12.param_key,
                                                (char*)VAR_12.param_units,
                                                (float)VAR_7);
                    }
                }
            }
        }

        if (!VAR_10) {
            if (VAR_11 == 1) {
                FUNC_2(VAR_4, "The values within the limit, then release relay.");
                VAR_9 = 0;


                (void)FUNC_8(VAR_0, &VAR_9);
                VAR_11 = 0;
            }
        } else {
            if (!VAR_11) {
                FUNC_2(VAR_4, "The value exceeds limit, then set relay.");
                VAR_9 = 0x00FF;
                (void)FUNC_8(VAR_0, &VAR_9);
                VAR_11 = 1;
            }
        }

        FUNC_9(VAR_5);
    }
    FUNC_10(((void*)0));
}
