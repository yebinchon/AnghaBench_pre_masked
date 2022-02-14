
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int range; int buffer; int low; } ;
struct TYPE_5__ {int error; TYPE_1__ rc; scalar_t__* ptr; scalar_t__* data_end; } ;
typedef TYPE_2__ APEContext ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(APEContext *VAR_1)
{
    while (VAR_1->rc.range <= VAR_0) {
        VAR_1->rc.buffer <<= 8;
        if(VAR_1->ptr < VAR_1->data_end) {
            VAR_1->rc.buffer += *VAR_1->ptr;
            VAR_1->ptr++;
        } else {
            VAR_1->error = 1;
        }
        VAR_1->rc.low = (VAR_1->rc.low << 8) | ((VAR_1->rc.buffer >> 1) & 0xFF);
        VAR_1->rc.range <<= 8;
    }
}
