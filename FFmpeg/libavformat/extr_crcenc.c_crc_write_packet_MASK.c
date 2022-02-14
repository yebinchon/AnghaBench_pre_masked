
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct AVFormatContext {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int size; int data; } ;
struct TYPE_4__ {int crcval; } ;
typedef TYPE_1__ CRCState ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    CRCState *VAR_2 = VAR_0->priv_data;
    VAR_2->crcval = FUNC_0(VAR_2->crcval, VAR_1->data, VAR_1->size);
    return 0;
}
