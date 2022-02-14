
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_4__ {int pos; TYPE_2__* packet; } ;
typedef TYPE_1__ PacketWriter ;
typedef scalar_t__ OPJ_OFF_T ;
typedef int OPJ_BOOL ;
typedef TYPE_2__ AVPacket ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static OPJ_BOOL FUNC_1(OPJ_OFF_T VAR_4, void *VAR_5)
{
    PacketWriter *VAR_6 = VAR_5;
    AVPacket *VAR_7 = VAR_6->packet;
    if (VAR_4 < 0) {
        return VAR_2;
    }
    if (VAR_4 > VAR_7->size) {
        if (VAR_4 > VAR_1 - VAR_0 ||
            FUNC_0(VAR_7, (int)VAR_4 - VAR_7->size)) {
            return VAR_2;
        }
    }
    VAR_6->pos = (int)VAR_4;
    return VAR_3;
}
