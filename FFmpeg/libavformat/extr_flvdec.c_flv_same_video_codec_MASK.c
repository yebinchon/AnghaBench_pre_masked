
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int codec_tag; int codec_id; } ;
typedef TYPE_1__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;

__attribute__((used)) static int FUNC_0(AVCodecParameters *VAR_7, int VAR_8)
{
    int VAR_9 = VAR_8 & VAR_6;

    if (!VAR_7->codec_id && !VAR_7->codec_tag)
        return 1;

    switch (VAR_9) {
    case 133:
        return VAR_7->codec_id == VAR_2;
    case 131:
        return VAR_7->codec_id == VAR_0;
    case 130:
        return VAR_7->codec_id == VAR_1;
    case 129:
        return VAR_7->codec_id == VAR_5;
    case 128:
        return VAR_7->codec_id == VAR_4;
    case 132:
        return VAR_7->codec_id == VAR_3;
    default:
        return VAR_7->codec_tag == VAR_9;
    }
}
