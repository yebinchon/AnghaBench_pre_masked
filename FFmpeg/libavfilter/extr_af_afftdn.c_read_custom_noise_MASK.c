
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int band_noise ;
struct TYPE_6__ {int band_noise_str; TYPE_1__* dnch; } ;
struct TYPE_5__ {int band_noise; } ;
typedef TYPE_1__ DeNoiseChannel ;
typedef TYPE_2__ AudioFFTDeNoiseContext ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (char*,char*,int*) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char*,char*,char**) ;
 int FUNC_6 (int ,int*,int) ;

__attribute__((used)) static void FUNC_7(AudioFFTDeNoiseContext *VAR_1, int VAR_2)
{
    DeNoiseChannel *VAR_3 = &VAR_1->dnch[VAR_2];
    char *VAR_4, *VAR_5, *VAR_6 = ((void*)0);
    int VAR_7, VAR_8, VAR_9[15] = { 0 };

    if (!VAR_1->band_noise_str)
        return;

    VAR_4 = FUNC_4(VAR_1->band_noise_str);
    if (!VAR_4)
        return;

    for (VAR_7 = 0; VAR_7 < 15; VAR_7++) {
        if (!(VAR_5 = FUNC_5(VAR_4, "| ", &VAR_6)))
            break;

        VAR_4 = ((void*)0);

        VAR_8 = FUNC_3(VAR_5, "%d", &VAR_9[VAR_7]);
        if (VAR_8 != 1) {
            FUNC_2(VAR_1, VAR_0, "Custom band noise must be integer.\n");
            break;
        }

        VAR_9[VAR_7] = FUNC_0(VAR_9[VAR_7], -24, 24);
    }

    FUNC_1(VAR_4);
    FUNC_6(VAR_3->band_noise, VAR_9, sizeof(VAR_9));
}
