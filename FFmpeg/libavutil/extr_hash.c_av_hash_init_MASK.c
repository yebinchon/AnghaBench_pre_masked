
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int crc; int ctx; } ;
typedef TYPE_1__ AVHashContext ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(AVHashContext *VAR_1)
{
    switch (VAR_1->type) {
    case 140: FUNC_0(VAR_1->ctx); break;
    case 139: FUNC_1(VAR_1->ctx); break;
    case 138: FUNC_2(VAR_1->ctx, 128); break;
    case 137: FUNC_2(VAR_1->ctx, 160); break;
    case 136: FUNC_2(VAR_1->ctx, 256); break;
    case 135: FUNC_2(VAR_1->ctx, 320); break;
    case 134: FUNC_4(VAR_1->ctx, 160); break;
    case 133: FUNC_4(VAR_1->ctx, 224); break;
    case 132: FUNC_4(VAR_1->ctx, 256); break;
    case 129: FUNC_3(VAR_1->ctx, 224); break;
    case 128: FUNC_3(VAR_1->ctx, 256); break;
    case 131: FUNC_3(VAR_1->ctx, 384); break;
    case 130: FUNC_3(VAR_1->ctx, 512); break;
    case 141: VAR_1->crc = VAR_0; break;
    case 142: VAR_1->crc = 1; break;
    }
}
