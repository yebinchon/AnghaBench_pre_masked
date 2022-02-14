
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int name ;
struct TYPE_7__ {int * pb; } ;
typedef int AVStream ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3, AVStream *VAR_4,
                       int (*VAR_5)(AVFormatContext *VAR_6, AVStream *VAR_7,
                                    const char *VAR_8, int VAR_9))
{
    unsigned VAR_10;
    int VAR_11;

    AVIOContext *VAR_12 = VAR_3->pb;
    FUNC_4(VAR_12, 4);
    VAR_10 = FUNC_2(VAR_12);
    FUNC_4(VAR_12, 4);
    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        char VAR_13[17];
        int VAR_14;

        if (FUNC_1(VAR_12))
            return VAR_0;

        FUNC_3(VAR_12, VAR_13, 16);
        VAR_13[sizeof(VAR_13) - 1] = 0;
        VAR_14 = FUNC_2(VAR_12);
        if (VAR_14 < 0) {
            FUNC_0(VAR_3, VAR_2, "entry size %d is invalid\n", VAR_14);
            return VAR_1;
        }
        if (VAR_5(VAR_3, VAR_4, VAR_13, VAR_14) < 0) {
            FUNC_5(VAR_3, "Variable %s", VAR_13);
            FUNC_4(VAR_12, VAR_14);
        }
    }
    return 0;
}
