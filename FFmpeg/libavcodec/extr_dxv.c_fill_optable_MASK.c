
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val1; int val2; int next; } ;
typedef TYPE_1__ OpcodeTable ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int*,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(unsigned *VAR_1, OpcodeTable *VAR_2, int VAR_3)
{
    unsigned VAR_4[256] = { 0 };
    unsigned VAR_5 = 0;
    int VAR_6, VAR_7, VAR_8, VAR_9 = 2, VAR_10 = 0;

    VAR_4[0] = VAR_1[0];
    for (VAR_8 = 0; VAR_8 < VAR_3 - 1; VAR_8++, VAR_4[VAR_8] = VAR_6) {
        VAR_6 = VAR_1[VAR_8 + 1] + VAR_4[VAR_8];
    }

    if (!VAR_4[0]) {
        do {
            VAR_10++;
        } while (!VAR_4[VAR_10]);
    }

    VAR_9 = 2;
    for (VAR_8 = 1024; VAR_8 > 0; VAR_8--) {
        for (VAR_2[VAR_5].val1 = VAR_10; VAR_10 < 256 && VAR_9 > VAR_4[VAR_10]; VAR_10++);
        VAR_5 = (VAR_5 - 383) & 0x3FF;
        VAR_9++;
    }

    if (VAR_3 > 0)
        FUNC_1(&VAR_4[0], VAR_1, 4 * VAR_3);

    for (VAR_8 = 0; VAR_8 < 1024; VAR_8++) {
        VAR_6 = VAR_2[VAR_8].val1;
        VAR_7 = VAR_4[VAR_6];
        VAR_4[VAR_6]++;
        VAR_5 = 31 - FUNC_0(VAR_7);
        if (VAR_5 > 10)
            return VAR_0;
        VAR_2[VAR_8].val2 = 10 - VAR_5;
        VAR_2[VAR_8].next = (VAR_7 << VAR_2[VAR_8].val2) - 1024;
    }

    return 0;
}
