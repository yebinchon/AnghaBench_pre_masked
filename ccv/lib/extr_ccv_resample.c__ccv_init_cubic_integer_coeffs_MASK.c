
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* si; int* coeffs; } ;
typedef TYPE_1__ ccv_cubic_integer_coeffs_t ;


 int FUNC_0 (int,int ) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, int VAR_1, float VAR_2, ccv_cubic_integer_coeffs_t* VAR_3)
{
 const float VAR_4 = -0.75f;
 VAR_3->si[0] = FUNC_0(VAR_0 - 1, 0);
 VAR_3->si[1] = VAR_0;
 VAR_3->si[2] = FUNC_1(VAR_0 + 1, VAR_1 - 1);
 VAR_3->si[3] = FUNC_1(VAR_0 + 2, VAR_1 - 1);
 float VAR_5 = VAR_2 - VAR_0;
 const int VAR_6 = 1 << 6;
 VAR_3->coeffs[0] = (int)((((VAR_4 * (VAR_5 + 1) - 5 * VAR_4) * (VAR_5 + 1) + 8 * VAR_4) * (VAR_5 + 1) - 4 * VAR_4) * VAR_6 + 0.5);
 VAR_3->coeffs[1] = (int)((((VAR_4 + 2) * VAR_5 - (VAR_4 + 3)) * VAR_5 * VAR_5 + 1) * VAR_6 + 0.5);
 VAR_3->coeffs[2] = (int)((((VAR_4 + 2) * (1 - VAR_5) - (VAR_4 + 3)) * (1 - VAR_5) * (1 - VAR_5) + 1) * VAR_6 + 0.5);
 VAR_3->coeffs[3] = VAR_6 - VAR_3->coeffs[0] - VAR_3->coeffs[1] - VAR_3->coeffs[2];
}
