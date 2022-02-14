
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {TYPE_2__* pb; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int seekable; } ;
struct TYPE_9__ {int duration; } ;
typedef TYPE_1__ SMJPEGMuxContext ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3)
{
    SMJPEGMuxContext *VAR_4 = VAR_3->priv_data;
    AVIOContext *VAR_5 = VAR_3->pb;
    int64_t VAR_6;

    if (VAR_5->seekable & VAR_0) {
        VAR_6 = FUNC_1(VAR_5);
        FUNC_0(VAR_5, 12, VAR_1);
        FUNC_2(VAR_5, VAR_4->duration);
        FUNC_0(VAR_5, VAR_6, VAR_1);
    }

    FUNC_3(VAR_5, VAR_2);

    return 0;
}
