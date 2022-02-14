
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cl_int ;
typedef int cl_event ;
typedef int AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(AVHWFramesContext *VAR_3,
                              cl_event *VAR_4, int VAR_5)
{
    cl_int VAR_6;
    int VAR_7;

    VAR_6 = FUNC_3(VAR_5, VAR_4);
    if (VAR_6 != VAR_1) {
        FUNC_1(VAR_3, VAR_0, "Failed to wait for event "
               "completion: %d.\n", VAR_6);
        return FUNC_0(VAR_2);
    }

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        VAR_6 = FUNC_2(VAR_4[VAR_7]);
        if (VAR_6 != VAR_1) {
            FUNC_1(VAR_3, VAR_0, "Failed to release "
                   "event: %d.\n", VAR_6);
        }
    }

    return 0;
}
