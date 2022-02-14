
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* lq; int* cq; } ;
typedef TYPE_1__ NuvContext ;


 int FUNC_0 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_1(NuvContext *VAR_2, int VAR_3)
{
    int VAR_4;
    VAR_3 = FUNC_0(VAR_3, 1);
    for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
        VAR_2->lq[VAR_4] = (VAR_1[VAR_4] << 7) / VAR_3;
        VAR_2->cq[VAR_4] = (VAR_0[VAR_4] << 7) / VAR_3;
    }
}
