
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_16__ {int id3v2_version; TYPE_2__* pict_list; } ;
struct TYPE_15__ {int metadata_header_padding; int metadata; int * pb; } ;
struct TYPE_14__ {struct TYPE_14__* next; int pkt; } ;
struct TYPE_13__ {int member_0; } ;
typedef TYPE_1__ ID3v2EncContext ;
typedef TYPE_2__ AVPacketList ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AIFFOutputContext ;


 int VAR_0 ;
 int FUNC_0 (char,char,char,char) ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_2, AIFFOutputContext *VAR_3)
{
    int VAR_4;
    uint64_t VAR_5, VAR_6, VAR_7;
    ID3v2EncContext VAR_8 = { 0 };
    AVIOContext *VAR_9 = VAR_2->pb;
    AVPacketList *VAR_10 = VAR_3->pict_list;

    if (!VAR_2->metadata && !VAR_3->pict_list)
        return 0;

    FUNC_5(VAR_9, FUNC_0('I', 'D', '3', ' '));
    FUNC_4(VAR_9, 0);
    VAR_5 = FUNC_2(VAR_9);

    FUNC_7(&VAR_8, VAR_9, VAR_3->id3v2_version, VAR_0);
    FUNC_9(VAR_2, &VAR_8);
    while (VAR_10) {
        if ((VAR_4 = FUNC_8(VAR_2, &VAR_8, &VAR_10->pkt)) < 0)
            return VAR_4;
        VAR_10 = VAR_10->next;
    }
    FUNC_6(&VAR_8, VAR_9, VAR_2->metadata_header_padding);

    VAR_6 = FUNC_2(VAR_9);
    VAR_7 = VAR_6 - VAR_5;


    FUNC_1(VAR_9, VAR_5 - 4, VAR_1);
    FUNC_4(VAR_9, VAR_7);
    FUNC_1(VAR_9, VAR_6, VAR_1);

    if (VAR_7 & 1)
        FUNC_3(VAR_9, 0);

    return 0;
}
