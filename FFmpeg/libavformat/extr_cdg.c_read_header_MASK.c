
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int pb; } ;
struct TYPE_10__ {int den; } ;
struct TYPE_12__ {int duration; TYPE_1__ time_base; TYPE_2__* codecpar; } ;
struct TYPE_11__ {int codec_id; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_5)
{
    AVStream *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_2(VAR_5, ((void*)0));
    if (!VAR_6)
        return FUNC_0(VAR_4);

    VAR_6->codecpar->codec_type = VAR_0;
    VAR_6->codecpar->codec_id = VAR_1;


    FUNC_4(VAR_6, 32, 1, 300);

    VAR_7 = FUNC_3(VAR_5->pb);
    if (VAR_7 < 0) {
        FUNC_1(VAR_5, VAR_2, "Cannot calculate duration as file size cannot be determined\n");
    } else
        VAR_6->duration = (VAR_7 * VAR_6->time_base.den) / (VAR_3 * 300);

    return 0;
}
