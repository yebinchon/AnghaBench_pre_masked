
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int qmf; TYPE_1__* prediction; } ;
struct TYPE_4__ {int previous_reconstructed_sample; } ;
typedef TYPE_2__ Channel ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(Channel *VAR_1, int32_t VAR_2[4])
{
    int32_t VAR_3[4];
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        VAR_3[VAR_4] = VAR_1->prediction[VAR_4].previous_reconstructed_sample;
    FUNC_0(&VAR_1->qmf, VAR_3, VAR_2);
}
