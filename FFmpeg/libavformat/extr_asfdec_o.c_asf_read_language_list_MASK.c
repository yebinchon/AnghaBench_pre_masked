
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_7__ {int offset; TYPE_1__* asf_sd; } ;
struct TYPE_6__ {int * pb; TYPE_3__* priv_data; } ;
struct TYPE_5__ {int langs; } ;
typedef int GUIDParseTable ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, const GUIDParseTable *VAR_2)
{
    ASFContext *VAR_3 = VAR_1->priv_data;
    AVIOContext *VAR_4 = VAR_1->pb;
    int VAR_5, VAR_6;
    uint64_t VAR_7 = FUNC_3(VAR_4);
    uint16_t VAR_8 = FUNC_2(VAR_4);

    if (VAR_8 < VAR_0) {
        for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
            size_t VAR_9;
            VAR_9 = FUNC_1(VAR_4);
            if (!VAR_9)
                VAR_9 = 6;
            if ((VAR_6 = FUNC_4(VAR_4, VAR_9, VAR_3->asf_sd[VAR_5].langs,
                                      sizeof(VAR_3->asf_sd[VAR_5].langs))) < 0) {
                return VAR_6;
            }
        }
    }

    FUNC_0(VAR_4, VAR_3->offset, VAR_7);
    return 0;
}
