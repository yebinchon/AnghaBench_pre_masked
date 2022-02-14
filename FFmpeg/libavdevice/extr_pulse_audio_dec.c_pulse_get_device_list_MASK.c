
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int server; } ;
typedef TYPE_1__ PulseData ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVDeviceInfoList ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVDeviceInfoList *VAR_1)
{
    PulseData *VAR_2 = VAR_0->priv_data;
    return FUNC_0(VAR_1, VAR_2->server, 0);
}
