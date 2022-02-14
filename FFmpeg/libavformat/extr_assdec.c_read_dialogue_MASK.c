
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_8__ {int readorder; } ;
struct TYPE_7__ {int len; char* str; } ;
typedef TYPE_1__ AVBPrint ;
typedef TYPE_2__ ASSContext ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int const,int const*) ;
 int FUNC_3 (int const*,char*,int*,int*,int*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_4(ASSContext *VAR_0, AVBPrint *VAR_1, const uint8_t *VAR_2,
                         int64_t *VAR_3, int *VAR_4)
{
    int VAR_5 = 0;
    int64_t VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;

    if (FUNC_3(VAR_2, "Dialogue: %*[^,],%d:%d:%d%*c%d,%d:%d:%d%*c%d,%n",
               &VAR_7, &VAR_8, &VAR_9, &VAR_10,
               &VAR_11, &VAR_12, &VAR_13, &VAR_14, &VAR_5) >= 8 && VAR_5 > 0) {





        const int VAR_15 = FUNC_0(VAR_2 + 10);

        VAR_6 = (VAR_11*3600LL + VAR_12*60LL + VAR_13) * 100LL + VAR_14;
        *VAR_3 = (VAR_7*3600LL + VAR_8*60LL + VAR_9) * 100LL + VAR_10;
        *VAR_4 = VAR_6 - *VAR_3;

        FUNC_1(VAR_1);
        FUNC_2(VAR_1, "%u,%d,%s", VAR_0->readorder++, VAR_15, VAR_2 + VAR_5);


        while (VAR_1->len > 0 &&
               VAR_1->str[VAR_1->len - 1] == '\r' ||
               VAR_1->str[VAR_1->len - 1] == '\n')
            VAR_1->str[--VAR_1->len] = 0;
        return 0;
    }
    return -1;
}
