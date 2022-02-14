
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * DPB; } ;
typedef TYPE_1__ HEVCContext ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

void FUNC_2(HEVCContext *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->DPB); VAR_3++)
        FUNC_1(VAR_2, &VAR_2->DPB[VAR_3],
                            VAR_1 |
                            VAR_0);
}
