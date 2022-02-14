
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {TYPE_2__** streams; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int cur_dts; } ;
struct TYPE_5__ {int paranoia; } ;
typedef TYPE_1__ CDIOContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3,
                     int VAR_4)
{
    CDIOContext *VAR_5 = VAR_1->priv_data;
    AVStream *VAR_6 = VAR_1->streams[0];

    FUNC_0(VAR_5->paranoia, VAR_3, VAR_0);
    VAR_6->cur_dts = VAR_3;
    return 0;
}
