
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
typedef int pa_stream ;
typedef size_t int64_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int mainloop; int * stream; } ;
typedef TYPE_1__ PulseData ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,size_t*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(pa_stream *VAR_1, size_t VAR_2, void *VAR_3)
{
    AVFormatContext *VAR_4 = VAR_3;
    PulseData *VAR_5 = VAR_4->priv_data;
    int64_t VAR_6 = VAR_2;

    if (VAR_1 != VAR_5->stream)
        return;

    FUNC_0(VAR_4, VAR_0, &VAR_6, sizeof(VAR_6));
    FUNC_1(VAR_5->mainloop, 0);
}
