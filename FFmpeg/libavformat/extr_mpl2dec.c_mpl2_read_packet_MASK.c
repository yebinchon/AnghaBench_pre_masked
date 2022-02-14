
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int q; } ;
typedef TYPE_1__ MPL2Context ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    MPL2Context *VAR_2 = VAR_0->priv_data;
    return FUNC_0(&VAR_2->q, VAR_1);
}
