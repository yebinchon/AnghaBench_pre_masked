
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_use; int * gap_cback; } ;
typedef TYPE_1__ tGAP_INFO ;


 int VAR_0 ;

void FUNC_0 (tGAP_INFO *VAR_1)
{
    if (VAR_1) {
        VAR_1->gap_cback = ((void*)0);
        VAR_1->in_use = VAR_0;
    }
}
