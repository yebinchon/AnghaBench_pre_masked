
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_3__ {int const* out; int const* in; int error; int const* out_end; int const* in_end; } ;
typedef TYPE_1__ LZOContext ;


 int FUNC_0 (int const*,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const*,int const*,int) ;

__attribute__((used)) static inline void FUNC_4(LZOContext *VAR_2, int VAR_3)
{
    register const uint8_t *VAR_4 = VAR_2->in;
    register uint8_t *VAR_5 = VAR_2->out;
    FUNC_2(VAR_3 >= 0);
    if (VAR_3 > VAR_2->in_end - VAR_4) {
        VAR_3 = FUNC_1(VAR_2->in_end - VAR_4, 0);
        VAR_2->error |= VAR_0;
    }
    if (VAR_3 > VAR_2->out_end - VAR_5) {
        VAR_3 = FUNC_1(VAR_2->out_end - VAR_5, 0);
        VAR_2->error |= VAR_1;
    }







    FUNC_3(VAR_5, VAR_4, VAR_3);
    VAR_2->in = VAR_4 + VAR_3;
    VAR_2->out = VAR_5 + VAR_3;
}
