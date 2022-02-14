
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* need_parsing; TYPE_1__* codecpar; } ;
struct TYPE_6__ {int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_7) {
    AVStream *VAR_8;

    if (!(VAR_8 = FUNC_2(VAR_7, ((void*)0))))
        return FUNC_0(VAR_6);
    VAR_8->codecpar->codec_type = VAR_2;
    VAR_8->codecpar->codec_id = VAR_5;
    VAR_8->need_parsing = VAR_3;
    FUNC_3(VAR_8, 32, 1, 90000);
    FUNC_1(VAR_8, 0, 0, 0, 0, VAR_0);

    if (!(VAR_8 = FUNC_2(VAR_7, ((void*)0))))
        return FUNC_0(VAR_6);
    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = VAR_4;
    VAR_8->need_parsing = VAR_3;
    FUNC_3(VAR_8, 33, 1, 90000);
    FUNC_1(VAR_8, 0, 0, 0, 0, VAR_0);


    return 0;
}
