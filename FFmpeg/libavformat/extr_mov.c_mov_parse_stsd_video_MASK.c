
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ int64_t ;
typedef int codec_name ;
struct TYPE_8__ {TYPE_1__* codecpar; int metadata; } ;
struct TYPE_7__ {int has_palette; int palette; } ;
struct TYPE_6__ {int width; int height; scalar_t__ codec_tag; int bits_per_coded_sample; int codec_id; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef int MOVContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,scalar_t__*,int ) ;
 unsigned int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int *,int *,unsigned int,scalar_t__*,int) ;
 int FUNC_10 (scalar_t__*,char*,int) ;

__attribute__((used)) static void FUNC_11(MOVContext *VAR_2, AVIOContext *VAR_3,
                                 AVStream *VAR_4, MOVStreamContext *VAR_5)
{
    uint8_t VAR_6[32] = { 0 };
    int64_t VAR_7;
    unsigned int VAR_8;



    VAR_7 = FUNC_7(VAR_3) - 16;

    FUNC_3(VAR_3);
    FUNC_3(VAR_3);
    FUNC_4(VAR_3);
    FUNC_4(VAR_3);
    FUNC_4(VAR_3);

    VAR_4->codecpar->width = FUNC_3(VAR_3);
    VAR_4->codecpar->height = FUNC_3(VAR_3);

    FUNC_4(VAR_3);
    FUNC_4(VAR_3);
    FUNC_4(VAR_3);
    FUNC_3(VAR_3);

    VAR_8 = FUNC_2(VAR_3);
    if (VAR_8 > 31)
        VAR_8 = 31;
    FUNC_9(VAR_2, VAR_3, VAR_8, VAR_6, sizeof(VAR_6));
    if (VAR_8 < 31)
        FUNC_6(VAR_3, 31 - VAR_8);

    if (VAR_6[0])
        FUNC_1(&VAR_4->metadata, "encoder", VAR_6, 0);


    if (!FUNC_10(VAR_6, "Planar Y'CbCr 8-bit 4:2:0", 25)) {
        VAR_4->codecpar->codec_tag = FUNC_0('I', '4', '2', '0');
        VAR_4->codecpar->width &= ~1;
        VAR_4->codecpar->height &= ~1;
    }

    if (VAR_4->codecpar->codec_tag == FUNC_0('H','2','6','3') &&
        !FUNC_10(VAR_6, "Sorenson H263", 13))
        VAR_4->codecpar->codec_id = VAR_0;

    VAR_4->codecpar->bits_per_coded_sample = FUNC_3(VAR_3);

    FUNC_5(VAR_3, VAR_7, VAR_1);

    if (FUNC_8(VAR_4->codecpar->codec_id, VAR_3, VAR_5->palette)) {
        VAR_4->codecpar->bits_per_coded_sample &= 0x1F;
        VAR_5->has_palette = 1;
    }
}
