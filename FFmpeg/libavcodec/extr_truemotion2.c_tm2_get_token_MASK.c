
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int table; } ;
struct TYPE_5__ {int* recode; int bits; TYPE_1__ vlc; } ;
typedef TYPE_2__ TM2Codes ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(GetBitContext *VAR_0, TM2Codes *VAR_1)
{
    int VAR_2;
    VAR_2 = FUNC_0(VAR_0, VAR_1->vlc.table, VAR_1->bits, 1);
    if(VAR_2<0)
        return -1;
    return VAR_1->recode[VAR_2];
}
