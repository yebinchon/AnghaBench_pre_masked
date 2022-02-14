
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* end; void* ptr; } ;
typedef TYPE_1__ Arena ;


 void* FUNC_0 (void*,int ) ;
 void* FUNC_1 (void*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (int) ;

void *FUNC_4(Arena *VAR_1, size_t VAR_2) {
    if (VAR_2 > (size_t)(VAR_1->end - VAR_1->ptr)) {
        FUNC_2(VAR_1, VAR_2);
        FUNC_3(VAR_2 <= (size_t)(VAR_1->end - VAR_1->ptr));
    }
    void *VAR_3 = VAR_1->ptr;
    VAR_1->ptr = FUNC_1(VAR_1->ptr + VAR_2, VAR_0);
    FUNC_3(VAR_1->ptr <= VAR_1->end);
    FUNC_3(VAR_3 == FUNC_0(VAR_3, VAR_0));
    return VAR_3;
}
