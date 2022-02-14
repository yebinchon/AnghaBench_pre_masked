
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * buffer; } ;
struct TYPE_7__ {int type; int size; int * data; } ;
typedef TYPE_1__ QDM2SubPacket ;
typedef TYPE_2__ GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int,int,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(GetBitContext *VAR_1,
                                          QDM2SubPacket *VAR_2)
{
    VAR_2->type = FUNC_1(VAR_1, 8);

    if (VAR_2->type == 0) {
        VAR_2->size = 0;
        VAR_2->data = ((void*)0);
    } else {
        VAR_2->size = FUNC_1(VAR_1, 8);

        if (VAR_2->type & 0x80) {
            VAR_2->size <<= 8;
            VAR_2->size |= FUNC_1(VAR_1, 8);
            VAR_2->type &= 0x7f;
        }

        if (VAR_2->type == 0x7f)
            VAR_2->type |= (FUNC_1(VAR_1, 8) << 8);


        VAR_2->data = &VAR_1->buffer[FUNC_2(VAR_1) / 8];
    }

    FUNC_0(((void*)0), VAR_0, "Subpacket: type=%d size=%d start_offs=%x\n",
           VAR_2->type, VAR_2->size, FUNC_2(VAR_1) / 8);
}
