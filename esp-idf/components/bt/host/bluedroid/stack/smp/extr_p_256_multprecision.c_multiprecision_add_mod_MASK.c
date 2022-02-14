
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__* p; } ;
struct TYPE_3__ {scalar_t__* p; } ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__*,int ) ;

void FUNC_3(DWORD *VAR_4, DWORD *VAR_5, DWORD *VAR_6, uint32_t VAR_7)
{
    DWORD VAR_8;
    DWORD *VAR_9;

    if (VAR_7 == VAR_0) {
        VAR_9 = VAR_2.p;
    } else if (VAR_7 == VAR_1) {
        VAR_9 = VAR_3;
    } else {
        return;
    }

    VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
    if (VAR_8) {
        FUNC_2(VAR_4, VAR_4, VAR_9, VAR_7);
    } else if (FUNC_1(VAR_4, VAR_9, VAR_7) >= 0) {
        FUNC_2(VAR_4, VAR_4, VAR_9, VAR_7);
    }
}
