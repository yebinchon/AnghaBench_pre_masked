
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {unsigned int min_pktsize; void* max_pktsize; void* max_bitrate; void* flags; void* ignore; void* preroll; void* send_time; void* play_time; void* create_time; void* file_size; int guid; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
struct TYPE_6__ {void* packet_size; int * pb; TYPE_3__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFContext ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, int64_t VAR_2)
{
    ASFContext *VAR_3 = VAR_1->priv_data;
    AVIOContext *VAR_4 = VAR_1->pb;

    FUNC_2(VAR_4, &VAR_3->hdr.guid);
    VAR_3->hdr.file_size = FUNC_1(VAR_4);
    VAR_3->hdr.create_time = FUNC_1(VAR_4);
    FUNC_1(VAR_4);
    VAR_3->hdr.play_time = FUNC_1(VAR_4);
    VAR_3->hdr.send_time = FUNC_1(VAR_4);
    VAR_3->hdr.preroll = FUNC_0(VAR_4);
    VAR_3->hdr.ignore = FUNC_0(VAR_4);
    VAR_3->hdr.flags = FUNC_0(VAR_4);
    VAR_3->hdr.min_pktsize = FUNC_0(VAR_4);
    VAR_3->hdr.max_pktsize = FUNC_0(VAR_4);
    if (VAR_3->hdr.min_pktsize >= (1U << 29))
        return VAR_0;
    VAR_3->hdr.max_bitrate = FUNC_0(VAR_4);
    VAR_1->packet_size = VAR_3->hdr.max_pktsize;

    return 0;
}
