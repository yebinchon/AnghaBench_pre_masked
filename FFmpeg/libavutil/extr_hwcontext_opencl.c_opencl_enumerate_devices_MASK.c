
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* cl_uint ;
typedef int cl_platform_id ;
typedef char const* cl_int ;
typedef int cl_device_id ;
typedef int AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int ,char*,char const*,...) ;
 int * FUNC_3 (char const*,int) ;
 char* FUNC_4 (int ,int ,char const*,int *,char const**) ;

__attribute__((used)) static int FUNC_5(AVHWDeviceContext *VAR_7,
                                    cl_platform_id VAR_8,
                                    const char *VAR_9,
                                    cl_uint *VAR_10,
                                    cl_device_id **VAR_11,
                                    void *VAR_12)
{
    cl_int VAR_13;

    VAR_13 = FUNC_4(VAR_8, VAR_3,
                         0, ((void*)0), VAR_10);
    if (VAR_13 == VAR_2) {
        FUNC_2(VAR_7, VAR_0, "No devices found "
               "on platform \"%s\".\n", VAR_9);
        *VAR_10 = 0;
        return 0;
    } else if (VAR_13 != VAR_4) {
        FUNC_2(VAR_7, VAR_1, "Failed to get number of devices "
               "on platform \"%s\": %d.\n", VAR_9, VAR_13);
        return FUNC_0(VAR_5);
    }
    FUNC_2(VAR_7, VAR_0, "%u OpenCL devices found on "
           "platform \"%s\".\n", *VAR_10, VAR_9);

    *VAR_11 = FUNC_3(*VAR_10, sizeof(**VAR_11));
    if (!*VAR_11)
        return FUNC_0(VAR_6);

    VAR_13 = FUNC_4(VAR_8, VAR_3,
                         *VAR_10, *VAR_11, ((void*)0));
    if (VAR_13 != VAR_4) {
        FUNC_2(VAR_7, VAR_1, "Failed to get list of devices "
               "on platform \"%s\": %d.\n", VAR_9, VAR_13);
        FUNC_1(VAR_11);
        return FUNC_0(VAR_5);
    }

    return 0;
}
