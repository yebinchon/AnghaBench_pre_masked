
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sequence {int * samples; scalar_t__ length; } ;


 struct sequence* FUNC_0 (int) ;

struct sequence *FUNC_1(void) {
    struct sequence *VAR_0 = FUNC_0(sizeof(*VAR_0));
    VAR_0->length = 0;
    VAR_0->samples = ((void*)0);
    return VAR_0;
}
