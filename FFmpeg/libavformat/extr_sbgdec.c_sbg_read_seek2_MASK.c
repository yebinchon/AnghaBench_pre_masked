
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {TYPE_1__** streams; } ;
struct TYPE_4__ {int cur_dts; int time_base; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2, int VAR_3,
                          int64_t VAR_4, int64_t VAR_5, int64_t VAR_6, int VAR_7)
{
    if (VAR_7 || VAR_3 > 0)
        return FUNC_0(VAR_1);
    if (VAR_3 < 0)
        VAR_5 = FUNC_1(VAR_5, VAR_0, VAR_2->streams[0]->time_base);
    VAR_2->streams[0]->cur_dts = VAR_5;
    return 0;
}
