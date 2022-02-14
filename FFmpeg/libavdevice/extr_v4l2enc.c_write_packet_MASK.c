
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
typedef TYPE_1__ V4L2Context ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int size; int data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    const V4L2Context *VAR_3 = VAR_1->priv_data;
    if (FUNC_1(VAR_3->fd, VAR_2->data, VAR_2->size) == -1)
        return FUNC_0(VAR_0);
    return 0;
}
