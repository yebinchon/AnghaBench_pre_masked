
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; } ;
typedef TYPE_1__ LZOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_1(LZOContext *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = VAR_3 & VAR_4;
    if (!VAR_5) {
        while (!(VAR_3 = FUNC_0(VAR_2))) {
            if (VAR_5 >= VAR_1 - 1000) {
                VAR_2->error |= VAR_0;
                break;
            }
            VAR_5 += 255;
        }
        VAR_5 += VAR_4 + VAR_3;
    }
    return VAR_5;
}
