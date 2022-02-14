
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int * pb; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2, AVStream * VAR_3)
{
    AVIOContext *VAR_4 = VAR_2->pb;
    int VAR_5;
    FUNC_3(VAR_2, &VAR_1, 0x80000000 | 0x01);

    FUNC_1(VAR_4, 0x01);
    FUNC_4(VAR_4, 4);
    FUNC_4(VAR_4, 4);

    VAR_5 = FUNC_5(VAR_2, VAR_3);
    if (VAR_5 < 0) {
        FUNC_0(VAR_2, VAR_0, "write stream codec info failed codec_type(0x%x)\n", VAR_3->codecpar->codec_type);
        return -1;
    }

    FUNC_2(VAR_2);
    return 0;
}
