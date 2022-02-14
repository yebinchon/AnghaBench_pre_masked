
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_7__ {int buf; } ;
typedef TYPE_1__ PutBitContext ;


 int FUNC_0 (TYPE_1__*,int *,int,int*,int const*) ;
 int FUNC_1 (TYPE_1__*,int *,int,int*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *,unsigned int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(int16_t *VAR_0, int VAR_1, uint8_t *VAR_2, unsigned VAR_3, int *VAR_4, int VAR_5,
                              const uint8_t VAR_6[64])
{
    int VAR_7;
    PutBitContext VAR_8;

    VAR_7 = VAR_1 << (2 - VAR_5);
    FUNC_3(&VAR_8, VAR_2, VAR_3);

    FUNC_1(&VAR_8, VAR_0, VAR_7, VAR_4);
    FUNC_0(&VAR_8, VAR_0, VAR_7, VAR_4, VAR_6);

    FUNC_2(&VAR_8);
    return FUNC_4(&VAR_8) - VAR_8.buf;
}
