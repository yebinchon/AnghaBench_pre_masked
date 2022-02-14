
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sequence {int length; struct sequence* samples; struct sequence* label; } ;


 int FUNC_0 (struct sequence*) ;

void FUNC_1(struct sequence *VAR_0) {
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->length; VAR_1++)
        FUNC_0(VAR_0->samples[VAR_1].label);
    FUNC_0(VAR_0->samples);
    FUNC_0(VAR_0);
}
