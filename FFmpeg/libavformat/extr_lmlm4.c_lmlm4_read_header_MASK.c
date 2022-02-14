
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* need_parsing; TYPE_1__* codecpar; } ;
struct TYPE_5__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_6)
{
    AVStream *VAR_7;

    if (!(VAR_7 = FUNC_1(VAR_6, ((void*)0))))
        return FUNC_0(VAR_5);
    VAR_7->codecpar->codec_type = VAR_1;
    VAR_7->codecpar->codec_id = VAR_4;
    VAR_7->need_parsing = VAR_2;
    FUNC_2(VAR_7, 64, 1001, 30000);

    if (!(VAR_7 = FUNC_1(VAR_6, ((void*)0))))
        return FUNC_0(VAR_5);
    VAR_7->codecpar->codec_type = VAR_0;
    VAR_7->codecpar->codec_id = VAR_3;
    VAR_7->need_parsing = VAR_2;


    return 0;
}
