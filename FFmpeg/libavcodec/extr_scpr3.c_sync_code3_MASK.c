
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int code1; int code; } ;
typedef TYPE_1__ RangeCoder ;
typedef int GetByteContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(GetByteContext *VAR_0, RangeCoder *VAR_1)
{
    VAR_1->code1++;
    if (VAR_1->code1 == 0x20000) {
        VAR_1->code = FUNC_0(VAR_0);
        VAR_1->code1 = 0;
    }
}
