
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; int data; } ;
struct TYPE_4__ {int pos; TYPE_2__* packet; } ;
typedef TYPE_1__ PacketWriter ;
typedef int OPJ_SIZE_T ;
typedef TYPE_2__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int,void*,int) ;

__attribute__((used)) static OPJ_SIZE_T FUNC_2(void *VAR_2, OPJ_SIZE_T VAR_3, void *VAR_4)
{
    PacketWriter *VAR_5 = VAR_4;
    AVPacket *VAR_6 = VAR_5->packet;
    int VAR_7 = VAR_6->size - VAR_5->pos;
    if (VAR_3 > VAR_7) {
        OPJ_SIZE_T VAR_8 = VAR_3 - VAR_7;
        int VAR_9 = VAR_1 - VAR_0 - VAR_6->size;
        if (VAR_8 > VAR_9) {
            return (OPJ_SIZE_T)-1;
        }
        if (FUNC_0(VAR_6, (int)VAR_8)) {
            return (OPJ_SIZE_T)-1;
        }
    }
    FUNC_1(VAR_6->data + VAR_5->pos, VAR_2, VAR_3);
    VAR_5->pos += (int)VAR_3;
    return VAR_3;
}
