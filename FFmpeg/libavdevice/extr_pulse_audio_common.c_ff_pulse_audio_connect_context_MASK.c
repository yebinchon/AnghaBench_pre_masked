
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pa_mainloop_api ;
typedef int pa_mainloop ;
typedef int pa_context ;
typedef enum PulseAudioContextState { ____Placeholder_PulseAudioContextState } PulseAudioContextState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int **) ;
 scalar_t__ FUNC_3 (int *,char const*,int ,int *) ;
 int * FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int ,int*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int *) ;
 int * FUNC_8 () ;
 int VAR_4 ;

int FUNC_9(pa_mainloop **VAR_5, pa_context **VAR_6,
                                   const char *VAR_7, const char *VAR_8)
{
    int VAR_9;
    pa_mainloop_api *VAR_10 = ((void*)0);
    enum PulseAudioContextState VAR_11 = VAR_3;

    FUNC_1(VAR_5);
    FUNC_1(VAR_6);

    *VAR_5 = ((void*)0);
    *VAR_6 = ((void*)0);

    if (!(*VAR_5 = FUNC_8()))
        return FUNC_0(VAR_1);
    if (!(VAR_10 = FUNC_6(*VAR_5))) {
        VAR_9 = VAR_0;
        goto fail;
    }
    if (!(*VAR_6 = FUNC_4(VAR_10, VAR_8))) {
        VAR_9 = FUNC_0(VAR_1);
        goto fail;
    }
    FUNC_5(*VAR_6, VAR_4, &VAR_11);
    if (FUNC_3(*VAR_6, VAR_7, 0, ((void*)0)) < 0) {
        VAR_9 = VAR_0;
        goto fail;
    }

    while (VAR_11 == VAR_3)
        FUNC_7(*VAR_5, 1, ((void*)0));
    if (VAR_11 == VAR_2) {
        VAR_9 = VAR_0;
        goto fail;
    }
    return 0;

  fail:
    FUNC_2(VAR_5, VAR_6);
    return VAR_9;
}
