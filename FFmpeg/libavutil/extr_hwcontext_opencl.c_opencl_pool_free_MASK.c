
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ cl_int ;
struct TYPE_3__ {int nb_planes; int * planes; } ;
typedef TYPE_1__ AVOpenCLFrameDescriptor ;
typedef int AVHWFramesContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*,int,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, uint8_t *VAR_3)
{
    AVHWFramesContext *VAR_4 = VAR_2;
    AVOpenCLFrameDescriptor *VAR_5 = (AVOpenCLFrameDescriptor*)VAR_3;
    cl_int VAR_6;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_5->nb_planes; VAR_7++) {
        VAR_6 = FUNC_2(VAR_5->planes[VAR_7]);
        if (VAR_6 != VAR_1) {
            FUNC_1(VAR_4, VAR_0, "Failed to release plane %d: "
                   "%d.\n", VAR_7, VAR_6);
        }
    }

    FUNC_0(VAR_5);
}
