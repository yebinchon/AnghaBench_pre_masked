
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int music_emu; } ;
typedef TYPE_1__ GMEContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_1, int VAR_2, int64_t VAR_3, int VAR_4)
{
    GMEContext *VAR_5 = VAR_1->priv_data;
    if (!FUNC_0(VAR_5->music_emu, (int)VAR_3))
        return VAR_0;
    return 0;
}
