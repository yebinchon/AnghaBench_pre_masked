
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cl_uint ;
typedef int cl_platform_id ;
typedef scalar_t__ cl_int ;
typedef int AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int ,char*,scalar_t__) ;
 int * FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(AVHWDeviceContext *VAR_5,
                                      cl_uint *VAR_6,
                                      cl_platform_id **VAR_7,
                                      void *VAR_8)
{
    cl_int VAR_9;

    VAR_9 = FUNC_4(0, ((void*)0), VAR_6);
    if (VAR_9 != VAR_2) {
        FUNC_2(VAR_5, VAR_1, "Failed to get number of "
               "OpenCL platforms: %d.\n", VAR_9);
        return FUNC_0(VAR_3);
    }
    FUNC_2(VAR_5, VAR_0, "%u OpenCL platforms found.\n",
           *VAR_6);

    *VAR_7 = FUNC_3(*VAR_6, sizeof(**VAR_7));
    if (!*VAR_7)
        return FUNC_0(VAR_4);

    VAR_9 = FUNC_4(*VAR_6, *VAR_7, ((void*)0));
    if (VAR_9 != VAR_2) {
        FUNC_2(VAR_5, VAR_1, "Failed to get list of OpenCL "
               "platforms: %d.\n", VAR_9);
        FUNC_1(VAR_7);
        return FUNC_0(VAR_3);
    }

    return 0;
}
