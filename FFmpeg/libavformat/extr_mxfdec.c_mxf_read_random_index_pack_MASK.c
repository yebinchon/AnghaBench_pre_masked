
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_16__ {int seekable; } ;
struct TYPE_15__ {TYPE_6__* pb; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int next_klv; int length; int key; } ;
struct TYPE_13__ {int run_in; int footer_partition; } ;
typedef TYPE_1__ MXFContext ;
typedef TYPE_2__ KLVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int,int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_6__*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_9(AVFormatContext *VAR_5)
{
    MXFContext *VAR_6 = VAR_5->priv_data;
    uint32_t VAR_7;
    int64_t VAR_8, VAR_9, VAR_10;
    KLVPacket VAR_11;

    if (!(VAR_5->pb->seekable & VAR_0))
        return;

    VAR_8 = FUNC_6(VAR_5->pb);
    VAR_9 = ((VAR_8 - VAR_6->run_in) / 105) * 12 + 28;
    VAR_9 = FUNC_0(VAR_9, VAR_2);


    VAR_10 = 16+1+24+4;


    FUNC_5(VAR_5->pb, VAR_8 - 4, VAR_3);
    VAR_7 = FUNC_3(VAR_5->pb);

    if (VAR_7 < VAR_10 || VAR_7 > VAR_9)
        goto end;
    FUNC_5(VAR_5->pb, VAR_8 - VAR_7, VAR_3);
    if (FUNC_8(&VAR_11, VAR_5->pb) < 0 ||
        !FUNC_1(VAR_11.key, VAR_4))
        goto end;
    if (VAR_11.next_klv != VAR_8 || VAR_11.length <= 4 || (VAR_11.length - 4) % 12) {
        FUNC_2(VAR_5, VAR_1, "Invalid RIP KLV length\n");
        goto end;
    }

    FUNC_7(VAR_5->pb, VAR_11.length - 12);
    VAR_6->footer_partition = FUNC_4(VAR_5->pb);


    if (VAR_6->run_in + VAR_6->footer_partition >= VAR_8) {
        FUNC_2(VAR_5, VAR_1, "bad FooterPartition in RIP - ignoring\n");
        VAR_6->footer_partition = 0;
    }

end:
    FUNC_5(VAR_5->pb, VAR_6->run_in, VAR_3);
}
