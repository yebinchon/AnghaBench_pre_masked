
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pb; } ;
struct TYPE_6__ {int size; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    int VAR_2 = FUNC_1(VAR_0);
    if (VAR_2 < 0)
        return VAR_2;
    FUNC_0(VAR_0->pb, VAR_1->data, VAR_1->size);
    return 0;
}
