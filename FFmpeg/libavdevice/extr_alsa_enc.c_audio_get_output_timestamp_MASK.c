
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ snd_pcm_sframes_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ timestamp; int h; } ;
typedef TYPE_1__ AlsaData ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(AVFormatContext *VAR_0, int VAR_1,
    int64_t *VAR_2, int64_t *VAR_3)
{
    AlsaData *VAR_4 = VAR_0->priv_data;
    snd_pcm_sframes_t VAR_5 = 0;
    *VAR_3 = FUNC_0();
    FUNC_1(VAR_4->h, &VAR_5);
    *VAR_2 = VAR_4->timestamp - VAR_5;
}
