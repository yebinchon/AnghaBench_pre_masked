
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int present; void* active_format_description; } ;
typedef TYPE_1__ H264SEIAFD ;
typedef int GetBitContext ;


 int VAR_0 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(H264SEIAFD *VAR_1, GetBitContext *VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_3-- < 1)
        return VAR_0;
    FUNC_1(VAR_2, 1);
    VAR_4 = FUNC_0(VAR_2, 1);
    FUNC_1(VAR_2, 6);

    if (VAR_4) {
        if (VAR_3-- < 1)
            return VAR_0;
        FUNC_1(VAR_2, 4);
        VAR_1->active_format_description = FUNC_0(VAR_2, 4);
        VAR_1->present = 1;
    }

    return 0;
}
