
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * out; int error; int * out_end; int * out_start; } ;
typedef TYPE_1__ LZOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_3(LZOContext *VAR_2, int VAR_3, int VAR_4)
{
    register uint8_t *VAR_5 = VAR_2->out;
    FUNC_1(VAR_4 > 0);
    if (VAR_5 - VAR_2->out_start < VAR_3) {
        VAR_2->error |= VAR_0;
        return;
    }
    if (VAR_4 > VAR_2->out_end - VAR_5) {
        VAR_4 = FUNC_0(VAR_2->out_end - VAR_5, 0);
        VAR_2->error |= VAR_1;
    }
    FUNC_2(VAR_5, VAR_3, VAR_4);
    VAR_2->out = VAR_5 + VAR_4;
}
