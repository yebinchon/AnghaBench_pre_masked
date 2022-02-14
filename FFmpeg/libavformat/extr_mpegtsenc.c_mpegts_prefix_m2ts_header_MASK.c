
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int tp_extra_header ;
typedef int int64_t ;
struct TYPE_6__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {scalar_t__ m2ts_mode; } ;
typedef TYPE_1__ MpegTSWrite ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_0)
{
    MpegTSWrite *VAR_1 = VAR_0->priv_data;
    if (VAR_1->m2ts_mode) {
        int64_t VAR_2 = FUNC_2(VAR_0->priv_data, VAR_0->pb);
        uint32_t VAR_3 = VAR_2 % 0x3fffffff;
        VAR_3 = FUNC_0(&VAR_3);
        FUNC_1(VAR_0->pb, (unsigned char *) &VAR_3,
                   sizeof(VAR_3));
    }
}
