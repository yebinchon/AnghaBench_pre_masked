
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int WriterContext ;
struct TYPE_5__ {int str; } ;
typedef TYPE_1__ AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char const*,...) ;
 int FUNC_6 (int *,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_7(WriterContext *VAR_1, const char *VAR_2,
                                  uint8_t *VAR_3, int VAR_4, const char *VAR_5,
                                  int VAR_6, int VAR_7, int VAR_8)
{
    AVBPrint VAR_9;
    int VAR_10 = 0, VAR_11, VAR_12;

    FUNC_4(&VAR_9, 0, VAR_0);
    FUNC_5(&VAR_9, "\n");
    while (VAR_4) {
        FUNC_5(&VAR_9, "%08x: ", VAR_10);
        VAR_11 = FUNC_2(VAR_4, VAR_6);
        for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
            if (VAR_7 == 1) FUNC_5(&VAR_9, VAR_5, *VAR_3);
            else if (VAR_7 == 2) FUNC_5(&VAR_9, VAR_5, FUNC_0(VAR_3));
            else if (VAR_7 == 4) FUNC_5(&VAR_9, VAR_5, FUNC_1(VAR_3));
            VAR_3 += VAR_7;
            VAR_4 --;
        }
        FUNC_5(&VAR_9, "\n");
        VAR_10 += VAR_8;
    }
    FUNC_6(VAR_1, VAR_2, VAR_9.str, 0);
    FUNC_3(&VAR_9, ((void*)0));
}
