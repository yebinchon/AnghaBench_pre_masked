
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int current_frame; int is_cfr; } ;
typedef TYPE_2__ VSContext ;
struct TYPE_7__ {TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_5__ {int duration; } ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    VSContext *VAR_5 = VAR_1->priv_data;

    if (!VAR_5->is_cfr)
        return FUNC_0(VAR_0);

    VAR_5->current_frame = FUNC_2(FUNC_1(0, VAR_3), VAR_1->streams[0]->duration);
    return 0;
}
