
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; } ;
struct TYPE_4__ {scalar_t__ pos; TYPE_2__* packet; } ;
typedef TYPE_1__ PacketWriter ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef scalar_t__ OPJ_OFF_T ;
typedef TYPE_2__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static OPJ_OFF_T FUNC_1(OPJ_OFF_T VAR_2, void *VAR_3)
{
    PacketWriter *VAR_4 = VAR_3;
    AVPacket *VAR_5 = VAR_4->packet;
    if (VAR_2 < 0) {
        if (VAR_4->pos == 0) {
            return (OPJ_SIZE_T)-1;
        }
        if (VAR_2 + VAR_4->pos < 0) {
            VAR_2 = -VAR_4->pos;
        }
    } else {
        int VAR_6 = VAR_5->size - VAR_4->pos;
        if (VAR_2 > VAR_6) {
            OPJ_SIZE_T VAR_7 = VAR_2 - VAR_6;
            int VAR_8 = VAR_1 - VAR_0 - VAR_5->size;
            if (VAR_7 > VAR_8) {
                return (OPJ_SIZE_T)-1;
            }
            if (FUNC_0(VAR_5, (int)VAR_7)) {
                return (OPJ_SIZE_T)-1;
            }
        }
    }
    VAR_4->pos += (int)VAR_2;
    return VAR_2;
}
