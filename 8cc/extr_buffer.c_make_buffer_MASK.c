
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nalloc; scalar_t__ len; void* body; } ;
typedef TYPE_1__ Buffer ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

Buffer *FUNC_1() {
    Buffer *VAR_1 = FUNC_0(sizeof(Buffer));
    VAR_1->body = FUNC_0(VAR_0);
    VAR_1->nalloc = VAR_0;
    VAR_1->len = 0;
    return VAR_1;
}
