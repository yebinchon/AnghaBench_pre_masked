
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {TYPE_2__* priv_data; int * pb; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {void* frames_per_packet; void* bytes_per_packet; } ;
struct TYPE_8__ {scalar_t__ codec_tag; int bit_rate; int codec_id; void* bits_per_coded_sample; scalar_t__ sample_rate; void* channels; void* block_align; int codec_type; } ;
typedef TYPE_2__ CafContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (void*,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_3)
{
    AVIOContext *VAR_4 = VAR_3->pb;
    CafContext *VAR_5 = VAR_3->priv_data;
    AVStream *VAR_6;
    int VAR_7;


    VAR_6 = FUNC_3(VAR_3, ((void*)0));
    if (!VAR_6)
        return FUNC_0(VAR_1);


    VAR_6->codecpar->codec_type = VAR_0;
    VAR_6->codecpar->sample_rate = FUNC_2(FUNC_5(VAR_4));
    VAR_6->codecpar->codec_tag = FUNC_6(VAR_4);
    VAR_7 = FUNC_4(VAR_4);
    VAR_5->bytes_per_packet = FUNC_4(VAR_4);
    VAR_6->codecpar->block_align = VAR_5->bytes_per_packet;
    VAR_5->frames_per_packet = FUNC_4(VAR_4);
    VAR_6->codecpar->channels = FUNC_4(VAR_4);
    VAR_6->codecpar->bits_per_coded_sample = FUNC_4(VAR_4);


    if (VAR_5->frames_per_packet > 0 && VAR_5->bytes_per_packet > 0) {
        VAR_6->codecpar->bit_rate = (uint64_t)VAR_6->codecpar->sample_rate * (uint64_t)VAR_5->bytes_per_packet * 8
                                 / (uint64_t)VAR_5->frames_per_packet;
    } else {
        VAR_6->codecpar->bit_rate = 0;
    }


    if (VAR_6->codecpar->codec_tag == FUNC_1('l','p','c','m'))
        VAR_6->codecpar->codec_id = FUNC_8(VAR_6->codecpar->bits_per_coded_sample, (VAR_7 ^ 0x2) | 0x4);
    else
        VAR_6->codecpar->codec_id = FUNC_7(VAR_2, VAR_6->codecpar->codec_tag);
    return 0;
}
