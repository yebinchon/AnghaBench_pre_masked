
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t dwBufferCount; TYPE_1__* lpBuffers; } ;
typedef TYPE_2__ WSAMSG ;
struct TYPE_3__ {char* buf; int len; } ;



void FUNC_0(void *VAR_0, char *VAR_1, int VAR_2) {
    WSAMSG *VAR_3 = (WSAMSG *)VAR_0;
    VAR_3->lpBuffers[VAR_3->dwBufferCount].buf = VAR_1;
    VAR_3->lpBuffers[VAR_3->dwBufferCount].len = VAR_2;
    VAR_3->dwBufferCount++;
}
