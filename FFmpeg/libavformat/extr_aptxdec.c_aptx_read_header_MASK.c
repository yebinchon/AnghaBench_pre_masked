
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* codecpar; } ;
struct TYPE_4__ {int bits_per_coded_sample; int frame_size; int block_align; int codec_id; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_4)
{
    AVStream *VAR_5 = FUNC_1(VAR_4);
    if (!VAR_5)
        return FUNC_0(VAR_3);
    VAR_5->codecpar->codec_id = VAR_2;
    VAR_5->codecpar->bits_per_coded_sample = 4;
    VAR_5->codecpar->block_align = VAR_0;
    VAR_5->codecpar->frame_size = VAR_1;
    return 0;
}
