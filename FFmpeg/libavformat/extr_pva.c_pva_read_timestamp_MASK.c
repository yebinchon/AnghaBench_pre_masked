
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct AVFormatContext {TYPE_1__* priv_data; int * pb; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ continue_pes; } ;
typedef TYPE_1__ PVAContext ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct AVFormatContext*,scalar_t__*,int*,int*,int ) ;

__attribute__((used)) static int64_t FUNC_4(struct AVFormatContext *VAR_3, int VAR_4,
                                          int64_t *VAR_5, int64_t VAR_6) {
    AVIOContext *VAR_7 = VAR_3->pb;
    PVAContext *VAR_8 = VAR_3->priv_data;
    int VAR_9, VAR_10;
    int64_t VAR_11 = VAR_0;

    VAR_6 = FUNC_0(*VAR_5+VAR_1*8, (uint64_t)*VAR_5+VAR_6);

    while (*VAR_5 < VAR_6) {
        VAR_11 = VAR_0;
        FUNC_1(VAR_7, *VAR_5, VAR_2);

        VAR_8->continue_pes = 0;
        if (FUNC_3(VAR_3, &VAR_11, &VAR_9, &VAR_10, 0)) {
            (*VAR_5)++;
            continue;
        }
        if (VAR_10 - 1 != VAR_4 || VAR_11 == VAR_0) {
            *VAR_5 = FUNC_2(VAR_7) + VAR_9;
            continue;
        }
        break;
    }

    VAR_8->continue_pes = 0;
    return VAR_11;
}
