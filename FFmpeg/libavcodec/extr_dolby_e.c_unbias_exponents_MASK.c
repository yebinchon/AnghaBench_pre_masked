
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nb_mstr_exp; int* exponents; } ;
struct TYPE_8__ {int gb; } ;
struct TYPE_7__ {int nb_exponent; int* nb_bias_exp; int exp_ofs; } ;
typedef TYPE_1__ DBEGroup ;
typedef TYPE_2__ DBEContext ;
typedef TYPE_3__ DBEChannel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(DBEContext *VAR_2, DBEChannel *VAR_3, DBEGroup *VAR_4)
{
    int VAR_5[VAR_1];
    int VAR_6[VAR_0];
    int VAR_7, VAR_8, VAR_9;

    for (VAR_7 = 0; VAR_7 < VAR_3->nb_mstr_exp; VAR_7++)
        VAR_5[VAR_7] = FUNC_0(&VAR_2->gb, 2) * 6;

    for (VAR_7 = 0; VAR_7 < VAR_4->nb_exponent; VAR_7++)
        VAR_6[VAR_7] = FUNC_0(&VAR_2->gb, 5);

    for (VAR_7 = VAR_9 = 0; VAR_7 < VAR_3->nb_mstr_exp; VAR_7++)
        for (VAR_8 = 0; VAR_8 < VAR_4->nb_bias_exp[VAR_7]; VAR_8++, VAR_9++)
            VAR_3->exponents[VAR_4->exp_ofs + VAR_9] = VAR_5[VAR_7] + VAR_6[VAR_9];
}
