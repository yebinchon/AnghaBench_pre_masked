
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef int WriterContext ;
struct TYPE_6__ {int str; } ;
typedef TYPE_1__ AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,unsigned int,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (int *,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_6(WriterContext *VAR_1, const char *VAR_2,
                              uint8_t *VAR_3, int VAR_4)
{
    AVBPrint VAR_5;
    int VAR_6 = 0, VAR_7, VAR_8;

    FUNC_3(&VAR_5, 0, VAR_0);
    FUNC_4(&VAR_5, "\n");
    while (VAR_4) {
        FUNC_4(&VAR_5, "%08x: ", VAR_6);
        VAR_7 = FUNC_0(VAR_4, 16);
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
            FUNC_4(&VAR_5, "%02x", VAR_3[VAR_8]);
            if (VAR_8 & 1)
                FUNC_4(&VAR_5, " ");
        }
        FUNC_1(&VAR_5, ' ', 41 - 2 * VAR_8 - VAR_8 / 2);
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
            FUNC_1(&VAR_5, VAR_3[VAR_8] - 32U < 95 ? VAR_3[VAR_8] : '.', 1);
        FUNC_4(&VAR_5, "\n");
        VAR_6 += VAR_7;
        VAR_3 += VAR_7;
        VAR_4 -= VAR_7;
    }
    FUNC_5(VAR_1, VAR_2, VAR_5.str, 0);
    FUNC_2(&VAR_5, ((void*)0));
}
