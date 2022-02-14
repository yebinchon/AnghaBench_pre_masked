
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int codec_id; } ;
typedef int MppCodingType ;
typedef TYPE_1__ AVCodecContext ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static MppCodingType FUNC_0(AVCodecContext *VAR_5)
{
    switch (VAR_5->codec_id) {
    case 131: return VAR_0;
    case 130: return VAR_1;
    case 129: return VAR_3;
    case 128: return VAR_4;
    default: return VAR_2;
    }
}
