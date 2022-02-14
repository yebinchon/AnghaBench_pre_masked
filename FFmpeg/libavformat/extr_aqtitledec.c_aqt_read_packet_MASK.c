
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int q; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef int AVPacket ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AQTitleContext ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    AQTitleContext *VAR_2 = VAR_0->priv_data;
    return FUNC_0(&VAR_2->q, VAR_1);
}
