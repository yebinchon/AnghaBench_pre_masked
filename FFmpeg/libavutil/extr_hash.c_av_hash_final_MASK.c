
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int type; int crc; int ctx; } ;
typedef TYPE_1__ AVHashContext ;



 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(AVHashContext *VAR_1, uint8_t *VAR_2)
{
    switch (VAR_1->type) {
    case 140: FUNC_1(VAR_1->ctx, VAR_2); break;
    case 139: FUNC_2(VAR_1->ctx, VAR_2); break;
    case 138:
    case 137:
    case 136:
    case 135: FUNC_3(VAR_1->ctx, VAR_2); break;
    case 134:
    case 133:
    case 132: FUNC_5(VAR_1->ctx, VAR_2); break;
    case 129:
    case 128:
    case 131:
    case 130: FUNC_4(VAR_1->ctx, VAR_2); break;
    case 141: FUNC_0(VAR_2, VAR_1->crc ^ VAR_0); break;
    case 142: FUNC_0(VAR_2, VAR_1->crc); break;
    }
}
