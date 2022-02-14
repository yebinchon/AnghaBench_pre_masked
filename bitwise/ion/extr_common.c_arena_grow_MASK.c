
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; int blocks; scalar_t__ end; } ;
typedef TYPE_1__ Arena ;


 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (size_t) ;

void FUNC_6(Arena *VAR_2, size_t VAR_3) {
    size_t VAR_4 = FUNC_1(FUNC_2(VAR_3, VAR_1), VAR_0);
    VAR_2->ptr = FUNC_5(VAR_4);
    FUNC_3(VAR_2->ptr == FUNC_0(VAR_2->ptr, VAR_0));
    VAR_2->end = VAR_2->ptr + VAR_4;
    FUNC_4(VAR_2->blocks, VAR_2->ptr);
}
