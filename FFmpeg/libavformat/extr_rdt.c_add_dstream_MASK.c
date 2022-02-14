
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int first_dts; TYPE_1__* codecpar; int id; } ;
struct TYPE_6__ {int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 TYPE_2__* FUNC_0 (int *,int *) ;

__attribute__((used)) static AVStream *
FUNC_1(AVFormatContext *VAR_0, AVStream *VAR_1)
{
    AVStream *VAR_2;

    if (!(VAR_2 = FUNC_0(VAR_0, ((void*)0))))
        return ((void*)0);
    VAR_2->id = VAR_1->id;
    VAR_2->codecpar->codec_type = VAR_1->codecpar->codec_type;
    VAR_2->first_dts = VAR_1->first_dts;

    return VAR_2;
}
