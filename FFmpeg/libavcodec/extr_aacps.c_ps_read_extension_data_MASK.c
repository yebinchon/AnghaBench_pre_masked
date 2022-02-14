
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_env; int opd_par; int ipd_par; void* enable_ipdopd; } ;
typedef TYPE_1__ PSContext ;
typedef int GetBitContext ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,TYPE_1__*,int ,int ,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(GetBitContext *VAR_4, PSContext *VAR_5, int VAR_6)
{
    int VAR_7;
    int VAR_8 = FUNC_1(VAR_4);

    if (VAR_6)
        return 0;

    VAR_5->enable_ipdopd = FUNC_0(VAR_4);
    if (VAR_5->enable_ipdopd) {
        for (VAR_7 = 0; VAR_7 < VAR_5->num_env; VAR_7++) {
            int VAR_9 = FUNC_0(VAR_4);
            FUNC_2(((void*)0), VAR_4, VAR_5, VAR_5->ipd_par, VAR_9 ? VAR_1 : VAR_0, VAR_7, VAR_9);
            VAR_9 = FUNC_0(VAR_4);
            FUNC_2(((void*)0), VAR_4, VAR_5, VAR_5->opd_par, VAR_9 ? VAR_3 : VAR_2, VAR_7, VAR_9);
        }
    }
    FUNC_3(VAR_4);
    return FUNC_1(VAR_4) - VAR_8;
}
