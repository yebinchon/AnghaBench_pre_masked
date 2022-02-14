
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ WavPackEncodeContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(WavPackEncodeContext *VAR_1,
                       int32_t *VAR_2, int32_t *VAR_3,
                       int VAR_4)
{
    int VAR_5;

    if (VAR_1->flags & VAR_0) {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
            FUNC_0(VAR_1, &VAR_2[VAR_5]);
    } else {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            FUNC_0(VAR_1, &VAR_2[VAR_5]);
            FUNC_0(VAR_1, &VAR_3[VAR_5]);
        }
    }
}
