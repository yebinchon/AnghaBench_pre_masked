
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_3__ {int* qtable; } ;
typedef TYPE_1__ TgqContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,int) ;

__attribute__((used)) static inline void FUNC_2(TgqContext *VAR_0, unsigned char *VAR_1,
                              ptrdiff_t VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_0((VAR_3*VAR_0->qtable[0] + 2056) >> 4);
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
        FUNC_1(VAR_1 + VAR_5 * VAR_2, VAR_4, 8);
}
