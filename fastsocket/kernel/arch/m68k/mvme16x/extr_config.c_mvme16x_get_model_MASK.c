
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* p_bdid ;
struct TYPE_3__ {char* brdsuffix; int brdno; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,char*,int,char*) ;

__attribute__((used)) static void FUNC_1(char *VAR_1)
{
    p_bdid VAR_2 = &VAR_0;
    char VAR_3[4];

    VAR_3[1] = VAR_2->brdsuffix[0];
    VAR_3[2] = VAR_2->brdsuffix[1];
    VAR_3[3] = '\0';
    VAR_3[0] = VAR_3[1] ? '-' : '\0';

    FUNC_0(VAR_1, "Motorola MVME%x%s", VAR_2->brdno, VAR_3);
}
