
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_2__ {int wBasicRate; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;


 int VAR_0 ;

__attribute__((used)) static
WORD FUNC_0(PVOID VAR_1, WORD VAR_2)
{
    PSDevice VAR_3 = (PSDevice) VAR_1;
    UINT VAR_4 = (UINT)VAR_2;
    while (VAR_4 > VAR_0) {
        if (VAR_3->wBasicRate & ((WORD)1 << VAR_4)) {
            return (WORD)VAR_4;
        }
        VAR_4 --;
    }
    return (WORD)VAR_0;
}
