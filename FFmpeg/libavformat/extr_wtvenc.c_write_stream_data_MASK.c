
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int * pb; } ;
struct TYPE_13__ {int index; TYPE_1__* codecpar; } ;
struct TYPE_12__ {int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int,int,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_3, AVStream *VAR_4)
{
    AVIOContext *VAR_5 = VAR_3->pb;
    int VAR_6;

    FUNC_4(VAR_3, &VAR_2, 0x80000000 | (VAR_4->index + VAR_1));
    FUNC_1(VAR_5, 0x00000001);
    FUNC_1(VAR_5, VAR_4->index + VAR_1);
    FUNC_1(VAR_5, 0x00000001);
    FUNC_5(VAR_5, 8);

    VAR_6 = FUNC_6(VAR_3, VAR_4);
    if (VAR_6 < 0) {
        FUNC_0(VAR_3, VAR_0, "write stream codec info failed codec_type(0x%x)\n", VAR_4->codecpar->codec_type);
        return -1;
    }
    FUNC_3(VAR_3);

    FUNC_2(VAR_4, 64, 1, 10000000);

    return 0;
}
