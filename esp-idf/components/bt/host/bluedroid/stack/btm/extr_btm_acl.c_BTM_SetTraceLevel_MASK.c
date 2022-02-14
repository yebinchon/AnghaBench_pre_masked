
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_2__ {int trace_level; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;

UINT8 FUNC_1 (UINT8 VAR_1)
{
    FUNC_0 ("BTM_SetTraceLevel\n");
    if (VAR_1 != 0xFF) {
        VAR_0.trace_level = VAR_1;
    }

    return (VAR_0.trace_level);
}
