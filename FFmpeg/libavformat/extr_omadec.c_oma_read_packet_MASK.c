
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int (* read_packet ) (TYPE_2__*,int *) ;} ;
typedef TYPE_1__ OMAContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    OMAContext *VAR_2 = VAR_0->priv_data;
    return VAR_2->read_packet(VAR_0, VAR_1);
}
