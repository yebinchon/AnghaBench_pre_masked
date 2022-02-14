
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int i2c_cmd_handle_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {TYPE_3__* data; TYPE_2__* register_address; TYPE_1__* chip_address; int end; } ;
struct TYPE_7__ {int count; int* ival; } ;
struct TYPE_6__ {int* ival; scalar_t__ count; } ;
struct TYPE_5__ {int* ival; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,char**,void**) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int,int ) ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_13(int VAR_12, char **VAR_13)
{
    int VAR_14 = FUNC_2(VAR_12, VAR_13, (void **)&VAR_9);
    if (VAR_14 != 0) {
        FUNC_3(VAR_11, VAR_9.end, VAR_13[0]);
        return 0;
    }


    int VAR_15 = VAR_9.chip_address->ival[0];

    int VAR_16 = 0;
    if (VAR_9.register_address->count) {
        VAR_16 = VAR_9.register_address->ival[0];
    }

    int VAR_17 = VAR_9.data->count;

    FUNC_9();
    FUNC_7(VAR_8, VAR_5, VAR_3, VAR_4, 0);
    i2c_cmd_handle_t VAR_18 = FUNC_4();
    FUNC_10(VAR_18);
    FUNC_12(VAR_18, VAR_15 << 1 | VAR_7, VAR_0);
    if (VAR_9.register_address->count) {
        FUNC_12(VAR_18, VAR_16, VAR_0);
    }
    for (int VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
        FUNC_12(VAR_18, VAR_9.data->ival[VAR_19], VAR_0);
    }
    FUNC_11(VAR_18);
    esp_err_t VAR_20 = FUNC_8(VAR_8, VAR_18, 1000 / VAR_10);
    FUNC_5(VAR_18);
    if (VAR_20 == VAR_2) {
        FUNC_0(VAR_6, "Write OK");
    } else if (VAR_20 == VAR_1) {
        FUNC_1(VAR_6, "Bus is busy");
    } else {
        FUNC_1(VAR_6, "Write Failed");
    }
    FUNC_6(VAR_8);
    return 0;
}
