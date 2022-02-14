
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pb; int * priv_data; } ;
typedef int IPMVEContext ;
typedef int AVPacket ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_12,
                               AVPacket *VAR_13)
{
    IPMVEContext *VAR_14 = VAR_12->priv_data;
    AVIOContext *VAR_15 = VAR_12->pb;
    int VAR_16;

    for (;;) {
    VAR_16 = FUNC_1(VAR_14, VAR_15, VAR_13);
    if (VAR_16 == VAR_2)
        VAR_16 = VAR_1;
    else if (VAR_16 == VAR_4)
        VAR_16 = FUNC_0(VAR_10);
    else if (VAR_16 == VAR_7)
        VAR_16 = FUNC_0(VAR_11);
    else if (VAR_16 == VAR_3 || VAR_16 == VAR_8)
        VAR_16 = VAR_0;
    else if (VAR_16 == VAR_9)
        VAR_16 = 0;
    else if (VAR_16 == VAR_6 || VAR_16 == VAR_5)
        continue;
    else
        continue;

    return VAR_16;
    }
}
