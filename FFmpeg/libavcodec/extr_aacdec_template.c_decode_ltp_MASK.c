
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t lag; int * used; int coef; } ;
typedef TYPE_1__ LongTermPrediction ;
typedef int GetBitContext ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(LongTermPrediction *VAR_2,
                       GetBitContext *VAR_3, uint8_t VAR_4)
{
    int VAR_5;

    VAR_2->lag = FUNC_1(VAR_3, 11);
    VAR_2->coef = VAR_1[FUNC_1(VAR_3, 3)];
    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4, VAR_0); VAR_5++)
        VAR_2->used[VAR_5] = FUNC_2(VAR_3);
}
