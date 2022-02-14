
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** thres2; } ;
typedef TYPE_1__ PP7Context ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(PP7Context *VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5 = 0;

    for (VAR_3 = 0; VAR_3 < 99; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
            VAR_2->thres2[VAR_3][VAR_4] = ((VAR_4&1) ? VAR_1 : VAR_0) * ((VAR_4&4) ? VAR_1 : VAR_0) * FUNC_0(1, VAR_3) * (1<<2) - 1 - VAR_5;
        }
    }
}
