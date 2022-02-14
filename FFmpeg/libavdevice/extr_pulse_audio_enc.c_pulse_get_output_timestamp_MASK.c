
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ pa_usec_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ timestamp; int mainloop; int stream; } ;
typedef TYPE_1__ PulseData ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_0, int VAR_1, int64_t *VAR_2, int64_t *VAR_3)
{
    PulseData *VAR_4 = VAR_0->priv_data;
    pa_usec_t VAR_5;
    int VAR_6;
    FUNC_2(VAR_4->mainloop);
    FUNC_1(VAR_4->stream, &VAR_5, &VAR_6);
    FUNC_3(VAR_4->mainloop);
    if (VAR_3)
        *VAR_3 = FUNC_0();
    if (VAR_2)
        *VAR_2 = VAR_4->timestamp - (VAR_6 ? -VAR_5 : VAR_5);
}
