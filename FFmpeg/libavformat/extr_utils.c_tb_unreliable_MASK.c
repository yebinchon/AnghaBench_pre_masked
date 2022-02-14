
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long den; long long num; } ;
struct TYPE_5__ {scalar_t__ codec_tag; scalar_t__ codec_id; TYPE_1__ time_base; } ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_4)
{
    if (VAR_4->time_base.den >= 101LL * VAR_4->time_base.num ||
        VAR_4->time_base.den < 5LL * VAR_4->time_base.num ||


        VAR_4->codec_tag == FUNC_0("mp4v") ||
        VAR_4->codec_id == VAR_3 ||
        VAR_4->codec_id == VAR_0 ||
        VAR_4->codec_id == VAR_2 ||
        VAR_4->codec_id == VAR_1)
        return 1;
    return 0;
}
