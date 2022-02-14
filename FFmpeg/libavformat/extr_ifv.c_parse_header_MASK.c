
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef long long uint32_t ;
struct TYPE_6__ {int pb; int metadata; TYPE_1__* priv_data; } ;
struct TYPE_5__ {long long sample_rate; int is_audio_present; long long total_vframes; long long total_aframes; void* height; void* width; } ;
typedef TYPE_1__ IFVContext ;
typedef TYPE_2__ AVFormatContext ;


 long long FUNC_0 (char,char,char,unsigned char) ;
 void* FUNC_1 (int ) ;
 long long FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,char*,long long) ;
 int FUNC_5 (TYPE_2__*,char*,long long) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_0)
{
    IFVContext *VAR_1 = VAR_0->priv_data;
    uint32_t VAR_2;
    uint32_t VAR_3;

    FUNC_3(VAR_0->pb, 0x34);
    FUNC_4(&VAR_0->metadata, "creation_time", FUNC_2(VAR_0->pb) * 1000000LL);
    FUNC_3(VAR_0->pb, 0x24);

    VAR_1->width = FUNC_1(VAR_0->pb);
    VAR_1->height = FUNC_1(VAR_0->pb);

    FUNC_3(VAR_0->pb, 0x8);
    VAR_3 = FUNC_2(VAR_0->pb);

    if (VAR_3 != FUNC_0('H','2','6','4'))
        FUNC_5(VAR_0, "Unknown video codec %x", VAR_3);

    FUNC_3(VAR_0->pb, 0x2c);
    VAR_1->sample_rate = FUNC_2(VAR_0->pb);
    VAR_2 = FUNC_2(VAR_0->pb);

    if (VAR_2 == FUNC_0('G','R','A','W')) {
        VAR_1->is_audio_present = 1;
    } else if (VAR_2 == FUNC_0('P','C','M','U')) {
        VAR_1->is_audio_present = 0;
    } else {
        FUNC_5(VAR_0, "Unknown audio codec %x", VAR_2);
    }

    FUNC_3(VAR_0->pb, 0x44);
    VAR_1->total_vframes = FUNC_2(VAR_0->pb);
    VAR_1->total_aframes = FUNC_2(VAR_0->pb);

    return 0;
}
