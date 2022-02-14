
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c; int rolling_variance; int rolling_mean; int scales; } ;
typedef TYPE_1__ layer ;
typedef int FILE ;


 int FUNC_0 (int ,int,int ,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__) ;

void FUNC_2(layer VAR_1, FILE *VAR_2)
{





    FUNC_0(VAR_1.scales, sizeof(float), VAR_1.c, VAR_2);
    FUNC_0(VAR_1.rolling_mean, sizeof(float), VAR_1.c, VAR_2);
    FUNC_0(VAR_1.rolling_variance, sizeof(float), VAR_1.c, VAR_2);
}
