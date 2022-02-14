
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_3__ {int type; char** possible_devices; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_4 (int,char const*,char*,int *,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_5(enum AVHWDeviceType VAR_2)
{
    enum AVHWDeviceType VAR_3;
    const char *VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_4 = FUNC_2(VAR_2);
    if (!VAR_4) {
        FUNC_3(VAR_0, "No name available for device type %d.\n", VAR_2);
        return -1;
    }

    VAR_3 = FUNC_1(VAR_4);
    if (VAR_3 != VAR_2) {
        FUNC_3(VAR_0, "Type %d maps to name %s maps to type %d.\n",
               VAR_2, VAR_4, VAR_3);
        return -1;
    }

    VAR_7 = 0;

    VAR_8 = FUNC_4(VAR_2, VAR_4, ((void*)0), ((void*)0), 0);
    if (VAR_8 < 0) {
        FUNC_3(VAR_0, "Test failed for %s with default options.\n", VAR_4);
        return -1;
    }
    if (VAR_8 == 0) {
        FUNC_3(VAR_0, "Test passed for %s with default options.\n", VAR_4);
        ++VAR_7;
    }

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
        if (VAR_1[VAR_5].type != VAR_2)
            continue;

        for (VAR_6 = 0; VAR_1[VAR_5].possible_devices[VAR_6]; VAR_6++) {
            VAR_8 = FUNC_4(VAR_2, VAR_4,
                              VAR_1[VAR_5].possible_devices[VAR_6],
                              ((void*)0), 0);
            if (VAR_8 < 0) {
                FUNC_3(VAR_0, "Test failed for %s with device %s.\n",
                       VAR_4, VAR_1[VAR_5].possible_devices[VAR_6]);
                return -1;
            }
            if (VAR_8 == 0) {
                FUNC_3(VAR_0, "Test passed for %s with device %s.\n",
                        VAR_4, VAR_1[VAR_5].possible_devices[VAR_6]);
                ++VAR_7;
            }
        }
    }

    return !VAR_7;
}
