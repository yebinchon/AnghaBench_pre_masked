
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int need_parsing; TYPE_1__* codecpar; } ;
struct TYPE_5__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4)
{
    AVStream *VAR_5 = FUNC_1(VAR_4, ((void*)0));

    if (!VAR_5)
        return FUNC_0(VAR_3);

    VAR_5->codecpar->codec_type = VAR_0;
    VAR_5->codecpar->codec_id = VAR_2;
    VAR_5->need_parsing = VAR_1;

    FUNC_2(VAR_5, 64, 1, 100);

    return 0;
}
