
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ multi_payloads_present; int pb; } ;
struct TYPE_7__ {int num; int seq; } ;
struct TYPE_6__ {TYPE_3__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFStream ;
typedef TYPE_3__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_3, ASFStream *VAR_4,
                               int64_t VAR_5, int VAR_6,
                               int VAR_7, int VAR_8, int VAR_9)
{
    ASFContext *VAR_10 = VAR_3->priv_data;
    AVIOContext *VAR_11 = &VAR_10->pb;
    int VAR_12;

    VAR_12 = VAR_4->num;
    if (VAR_9 & VAR_2)
        VAR_12 |= VAR_1;
    FUNC_0(VAR_11, VAR_12);

    FUNC_0(VAR_11, VAR_4->seq);
    FUNC_2(VAR_11, VAR_7);






    FUNC_0(VAR_11, VAR_0);

    FUNC_2(VAR_11, VAR_6);
    FUNC_2(VAR_11, (uint32_t) VAR_5);

    if (VAR_10->multi_payloads_present) {
        FUNC_1(VAR_11, VAR_8);
    }
}
