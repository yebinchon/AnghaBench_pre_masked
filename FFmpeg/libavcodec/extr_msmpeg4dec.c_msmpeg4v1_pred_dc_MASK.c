
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int* last_dc; } ;
typedef TYPE_1__ MpegEncContext ;



__attribute__((used)) static inline int FUNC_0(MpegEncContext * VAR_0, int VAR_1,
                                    int32_t **VAR_2)
{
    int VAR_3;

    if (VAR_1 < 4) {
        VAR_3= 0;
    } else {
        VAR_3= VAR_1-3;
    }

    *VAR_2= &VAR_0->last_dc[VAR_3];
    return VAR_0->last_dc[VAR_3];
}
