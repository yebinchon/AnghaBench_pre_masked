
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
typedef int boundary ;
struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int,int,int) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_5)
{
    AVStream *VAR_6;
    char VAR_7[70 + 2 + 1] = {0};
    int64_t VAR_8 = FUNC_3(VAR_5->pb);
    int VAR_9;

    do {
        VAR_9 = FUNC_5(VAR_5->pb, VAR_7, sizeof(VAR_7));
        if (VAR_9 < 0)
            return VAR_9;
    } while (!VAR_7[0]);

    if (FUNC_6(VAR_7, "--", 2))
        return VAR_0;

    VAR_6 = FUNC_1(VAR_5, ((void*)0));
    if (!VAR_6)
        return FUNC_0(VAR_3);

    VAR_6->codecpar->codec_type = VAR_1;
    VAR_6->codecpar->codec_id = VAR_2;

    FUNC_4(VAR_6, 60, 1, 25);

    FUNC_2(VAR_5->pb, VAR_8, VAR_4);

    return 0;
}
