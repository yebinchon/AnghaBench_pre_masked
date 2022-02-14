
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int m64p_type ;
struct TYPE_2__ {int pDst; int pSrc; } ;
typedef TYPE_1__ SCopySection ;


 int FUNC_0 (int ,char const*,int,...) ;
 int FUNC_1 (int ,char const*,int,...) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static void FUNC_3(void * VAR_2, const char *VAR_3, m64p_type VAR_4)
{
    SCopySection *VAR_5 = (SCopySection *) VAR_2;
    int VAR_6;
    float VAR_7;
    char VAR_8[1024];


    switch (VAR_4)
    {
        case 129:
        case 131:
            if (FUNC_0(VAR_5->pSrc, VAR_3, VAR_4, &VAR_6, sizeof(int)) == VAR_0)
                FUNC_1(VAR_5->pDst, VAR_3, VAR_4, &VAR_6);
            break;
        case 130:
            if (FUNC_0(VAR_5->pSrc, VAR_3, VAR_4, &VAR_7, sizeof(float)) == VAR_0)
                FUNC_1(VAR_5->pDst, VAR_3, VAR_4, &VAR_7);
            break;
        case 128:
            if (FUNC_0(VAR_5->pSrc, VAR_3, VAR_4, VAR_8, 1024) == VAR_0)
                FUNC_1(VAR_5->pDst, VAR_3, VAR_4, VAR_8);
            break;
        default:

            FUNC_2(VAR_1, "Unknown source parameter type %i in copy callback", (int) VAR_4);
            return;
    }
}
