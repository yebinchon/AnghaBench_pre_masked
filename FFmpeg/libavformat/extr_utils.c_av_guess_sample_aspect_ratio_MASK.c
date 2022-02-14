
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int member_1; scalar_t__ num; scalar_t__ den; int member_0; } ;
struct TYPE_11__ {TYPE_3__ sample_aspect_ratio; } ;
struct TYPE_9__ {TYPE_1__* codecpar; TYPE_3__ sample_aspect_ratio; } ;
struct TYPE_8__ {TYPE_3__ sample_aspect_ratio; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVRational ;
typedef TYPE_4__ AVFrame ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__,scalar_t__,int ) ;

AVRational FUNC_1(AVFormatContext *VAR_1, AVStream *VAR_2, AVFrame *VAR_3)
{
    AVRational VAR_4 = {0, 1};
    AVRational VAR_5 = VAR_2 ? VAR_2->sample_aspect_ratio : VAR_4;
    AVRational VAR_6 = VAR_2 && VAR_2->codecpar ? VAR_2->codecpar->sample_aspect_ratio : VAR_4;
    AVRational VAR_7 = VAR_3 ? VAR_3->sample_aspect_ratio : VAR_6;

    FUNC_0(&VAR_5.num, &VAR_5.den,
               VAR_5.num, VAR_5.den, VAR_0);
    if (VAR_5.num <= 0 || VAR_5.den <= 0)
        VAR_5 = VAR_4;

    FUNC_0(&VAR_7.num, &VAR_7.den,
               VAR_7.num, VAR_7.den, VAR_0);
    if (VAR_7.num <= 0 || VAR_7.den <= 0)
        VAR_7 = VAR_4;

    if (VAR_5.num)
        return VAR_5;
    else
        return VAR_7;
}
