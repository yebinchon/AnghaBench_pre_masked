
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;
struct TYPE_3__ {int scantable; } ;
typedef int PutBitContext ;
typedef TYPE_1__ ProresContext ;


 int FUNC_0 (int *,int *,int,int,int ,int const*) ;
 int FUNC_1 (int *,int *,int,int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(ProresContext *VAR_0, PutBitContext *VAR_1,
                              const uint16_t *VAR_2, ptrdiff_t VAR_3,
                              int VAR_4, int16_t *VAR_5,
                              int VAR_6, int VAR_7,
                              const int16_t *VAR_8)
{
    int VAR_9, VAR_10;

    VAR_10 = FUNC_3(VAR_1);
    VAR_9 = VAR_4 * VAR_6;

    FUNC_1(VAR_1, VAR_5, VAR_9, VAR_8[0]);
    FUNC_0(VAR_1, VAR_5, VAR_9, VAR_7,
               VAR_0->scantable, VAR_8);
    FUNC_2(VAR_1);

    return (FUNC_3(VAR_1) - VAR_10) >> 3;
}
