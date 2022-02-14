
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ksum; } ;
typedef TYPE_1__ APERice ;
typedef int APEContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 unsigned int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static inline int FUNC_5(APEContext *VAR_3, APERice *VAR_4)
{
    unsigned int VAR_5, VAR_6;
    int VAR_7, VAR_8;

    VAR_8 = VAR_4->ksum >> 5;
    if (VAR_8 == 0)
        VAR_8 = 1;

    VAR_6 = FUNC_3(VAR_3, VAR_1, VAR_2);

    if (VAR_6 == (VAR_0 - 1)) {
        VAR_6 = (unsigned)FUNC_0(VAR_3, 16) << 16;
        VAR_6 |= FUNC_0(VAR_3, 16);
    }

    if (VAR_8 < 0x10000) {
        VAR_7 = FUNC_1(VAR_3, VAR_8);
        FUNC_2(VAR_3, 1, VAR_7);
    } else {
        int VAR_9 = VAR_8, VAR_10;
        int VAR_11 = 0;

        while (VAR_9 & ~0xFFFF) {
            VAR_9 >>= 1;
            VAR_11++;
        }
        VAR_9 = FUNC_1(VAR_3, VAR_9 + 1);
        FUNC_2(VAR_3, 1, VAR_9);
        VAR_10 = FUNC_1(VAR_3, 1 << VAR_11);
        FUNC_2(VAR_3, 1, VAR_10);

        VAR_7 = (VAR_9 << VAR_11) + VAR_10;
    }

    VAR_5 = VAR_7 + VAR_6 * VAR_8;

    FUNC_4(VAR_4, VAR_5);


    return ((VAR_5 >> 1) ^ ((VAR_5 & 1) - 1)) + 1;
}
